// 条件を満たすものがある場所も知る
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 入力を受け取る
    int N, v;
    cin >> N >> v;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];
    
    // 線形探索
    int found_id = -1;  // 初期値ではあり得ない場所に
    bool exist = false; // 初期値はfalseに
    for (int i = 0; i < N; ++i){
        if(a[i] == v) {
            exist = true; // 見つかったらフラグを立てる
            found_id = i;
        }
    }

    // 結果出力
    if(exist) cout << "Yes" << found_id << endl;
    else cout << "No" <<endl;
    return 0;
}