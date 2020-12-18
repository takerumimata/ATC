# 部分和問題の解法について
以下の問題を考える
```
部分和問題
N個の正の整数a0, a1, a2,...an-1と正の整数Wが与えられます。
a0,...an-1の中っから何個かの整数を選んで総和をWとすることができるかどうかを判定してください
```

この問題には3つの解法が存在する。
## 解法１.bit全探索によるアプローチ
まず回答となるプログラムを示す
```cpp
#include<iostream>
#include<vector>//可変長配列
#include<algorithm>//sort,二分探索,など
#include<map>//map(辞書)

using namespace std;

int main() {
    // 基本的には選ぶ、各値を選ばないの二値の問題の全探索でとく手法をまず考える >> O(N2^N)
    // 入力受け取り
    int N,W;
    cin >> N >> W;
    vector<int> a(N);
    for(int i = 0; i < N; ++i){
        cin >> a[i];
    }

    // bitは2^N通りの部分集合全体を動く
    bool exist = false;
    for(int bit = 0; bit < (1 << N); bit++){
        int sum = 0; // 部分集合に含まれる要素の和
        for(int i = 0; i < N; ++i){
            // i番目の要素a[i]が部分集合に含まれているかどうか
            if(bit & (1 << i)){ // 肝となる判定方法
                sum += a[i];
            }
        }

        // sumがWに一致するかどうか
        if (sum == W) exist = true;
    }

    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
```

肝となるのは以下の演算だろう。
```cpp
if(bit & (1 << i)){ // 肝となる判定方法
    sum += a[i];
}
```
ここでi番目の要素を含むか含まないかを判定している。
まず問題を振り返る。a_iによって構成されるsumは合計で何通りあるだろうか？答えは2^N通り存在する。それぞれの要素に関して選ぶか、選ばないかを選択することができるためである。
解法１のアプローチでは素直に2^N個存在する全ての組み合わせを探索する。for文の中でそのループ中にその要素を含むかどうかを判定し、含まれていればsumに加算する、ということを繰り返している。

```
bit & (1 << i)
```
<<はシフト演算で、bitを左にシフトする。int型に対する&演算は両方のbitが1の時のみ結果が1になる。
## 解法２.分割統治法を用いたアプローチ
解法１は計算量としてO(N・2^N)もの計算量になる。Nが小さい間はまだどうにかなるが、累乗で計算量が増えるので、すぐに限界がくる。N=20~25くらいまではギリギリ耐えるかもしれないが、30までいくと死ぬ。
しかし分割統治法を利用することによって計算量をO(2^N)まで落とせる。さらにメモ化することでO(NW)まで落とすことができる。まずは分割統治法によるアプローチをみてみる。

```cpp
#include<iostream>
#include<vector>

using namespace std;

bool func(int i, int w, const vector<int> &a){
    // ベースケース
    if(i == 0){
        if(w == 0) return true;
        else return false;
    }

    // a[i - 1]を選ばない場合
    if(func(i-1, w, a)) return true;
    if(func(i-1, w - a[i-1], a)) return true;

    // どちらもfalseの場合はfalse
    return false;
}

int main(){
    // 入力
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for(int i=0; i < N; ++i) cin >> a[i];

    // 再帰的に解く
    if (func(N, W, a)) cout << "Yes" <<endl;
    else cout << "No" << endl;
    
    return 0;
}
```

## 解法3.メモ化によるさらなる高速化
前述したようにメモ化によってこのアルゴリズムはO(NW)まで計算量が落とせる。
動的計画法を考える際に重要なことは、問題を漸化式に落とし込むこと。ちなみによく聞くナップサック問題は部分和問題の一般化。

dp[i+1][j]dp[i+1][j] := ii 番目までの整数の中からいくつか選んで総和を jj とすることが可能かどうか (bool値)として、dp[i][j](j=0,1,…,A)dp[i][j](j=0,1,…,A) を使って dp[i+1][j](j=0,1,…,A)dp[i+1][j](j=0,1,…,A) の値を更新することを考える。

dp[i+1][j]dp[i+1][j] の値を求めるには、以下のようになる。

整数 a[i]a[i] を選ぶ場合 (j≥a[i]j≥a[i] の場合のみ)
dp[i][j−a[i]]　が　True　なら、dp[i+1][j]　も　True
dp[i][j−a[i]]　が　True　なら、dp[i+1][j]　も　True
整数 a[i]a[i] を選ばない場合
dp[i][j]　が　True　なら、dp[i+1][j]　も　True
dp[i][j]　が　True　なら、dp[i+1][j]　も　True
まとめると、以下のようになる。

＜DP漸化式＞

dp[i+1][j]={dp[i][j−a[i]]　|　dp[i][j]dp[i][j](j≥a[i])(j<a[i])
dp[i+1][j]={dp[i][j−a[i]]　|　dp[i][j](j≥a[i])dp[i][j](j<a[i])
<DP初期条件＞

dp[0][j]={TrueFalse(j=0)(j≠0)
dp[0][j]={True(j=0)False(j≠0)
(0 個の整数の和は 0 とみなせるので、dp[0][0]dp[0][0] のみ TrueTrue)

## まとめ
- 集合の列挙によるbit全探索はシフト演算とint型同士の&演算でforループを回して探索していく=>O(N・2^N)
- 分割統治法によるアプローチ（目標値Wからa[i]を引いていく/引かずに探索する）で計算量はO(2^N)に落とせる
- 動的計画法を用いる（漸化式を立ててメモ化を行う）ことにより。計算量はO(NW)まで落とせる

## 参考
[](https://qiita.com/drken/items/a5e6fe22863b7992efdb)