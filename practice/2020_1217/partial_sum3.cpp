#include<iostream>
#include<vector>
using namespace std;


    // 漸化式
    /*
    【解法】
    ナップサック問題とほぼ一緒です。
    dp[i+1][j]dp[i+1][j] := ii 番目までの整数の中からいくつか選んで総和を jj とすることが可能かどうか (bool値)
    として、dp[i][j](j=0,1,…,A)dp[i][j](j=0,1,…,A) を使って dp[i+1][j](j=0,1,…,A)dp[i+1][j](j=0,1,…,A) の値を更新することを考えます。

    dp[i+1][j]dp[i+1][j] の値を求めるには、以下のようになります。

    整数 a[i]a[i] を選ぶ場合 (j≥a[i]j≥a[i] の場合のみ)
    dp[i][j−a[i]]　が　True　なら、dp[i+1][j]　も　True
    dp[i][j−a[i]]　が　True　なら、dp[i+1][j]　も　True
    整数 a[i]a[i] を選ばない場合
    dp[i][j]　が　True　なら、dp[i+1][j]　も　True
    dp[i][j]　が　True　なら、dp[i+1][j]　も　True
    まとめると、以下のようになります。

    ＜DP漸化式＞

    dp[i+1][j]={dp[i][j−a[i]]　|　dp[i][j]dp[i][j](j≥a[i])(j<a[i])
    dp[i+1][j]={dp[i][j−a[i]]　|　dp[i][j](j≥a[i])dp[i][j](j<a[i])
    <DP初期条件＞

    dp[0][j]={TrueFalse(j=0)(j≠0)
    dp[0][j]={True(j=0)False(j≠0)
    (0 個の整数の和は 0 とみなせるので、dp[0][0]dp[0][0] のみ TrueTrue です)

    ここで、| は or 演算子
    */
   
 // 入力
int n, A;
int a[110];

// DPテーブル
bool dp[110][10010];

int main() {
  cin >> n >> A;
  for (int i = 0; i < n; ++i) cin >> a[i];

  memset(dp, 0, sizeof(dp));   // 一旦すべて false に
  dp[0][0] = true;             // dp[0][0] だけ true に

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j <= A; ++j) {
      dp[i+1][j] |= dp[i][j];
      if (j >= a[i]) dp[i+1][j] |= dp[i][j-a[i]];
    }
  }

  if (dp[n][A]) cout << "YES" << endl;
  else cout << "NO" << endl;
}