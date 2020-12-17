#include<iostream>
#include<vector>//可変長配列
#include<algorithm>//sort,二分探索,など
#include<map>//map(辞書)

using namespace std;
/*
  部分和問題
  N個の正の整数a0, a1, a2,...an-1と正の整数Wが与えられます。
  a0,...an-1の中っから何個かの整数を選んで総和をWとすることができるかどうかを判定してください
*/

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
    for(int bit=0; bit < (1 << N); bit++){
        int sum = 0; // 部分集合に含まれる要素の和
        for(int i = 0; i < N; ++i){
            // i番目の要素a[i]が部分集合に含まれているかどうか
            if(bit && (1 << i)){ // 肝となる判定方法
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