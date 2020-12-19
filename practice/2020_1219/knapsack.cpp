#include<iostream>
#include<vector>

using namespace std;

template<class T> void chmax(T& a, T b) {
    if(a < b) a = b;
}

int main(){
    // 入力
    int N, W;
    cin >> N >> W;
    vector<long long> weight(N), value(N);
    for(int i = 0; i < N; i++) cin >> weight[i] >> value[i];
    
    // DPテーブル定義
    vector<vector<long long>> dp(N+1, vector<long long>(W + 1, 0));
    // DP ループ
    for(int i = 0; i < N; i++){
        for(int w = 0; w <= W; w++){
            // i番目の商品を選ぶ場合
            if(w - weight[i] >= 0){
                chmax(dp[i + 1][w], dp[i][w - weight[i] + value[i]]);
            }

            // i番目の商品を選ばない場合
            chmax(dp[i + 1][w], dp[i][w]);
        }
    }

    // 最適解の出力
    cout << dp[N][W] << endl;
    return 0;
}