#include<iostream>
#include<vector>

using namespace std;

// 最小費用流問題として定式化できるらしい。わからへんかったわ。数理最適化やってんけどな。

int main(void){
    //RGBが衝突しない範囲（つまり、Gのマーブルを左に動かしていっても、Rが右に動かしてマーブルを入れた箱に遭遇しない）の簡単な問題を考える.
    // 2 * sum_{i=1}_^{1/2(N-1)} がR（G, B）の必要回数になる。
    // ただしNが偶数の場合はこれに+1/2Nしてあげる

    int R, G, B;
    cin >> R >> G >> B;
    int sum = 0;
    int r_flag = 0;
    if(R % 2 == 0) {
        R -= 1;
        r_flag = 1;
    }
    cout << r_flag << endl;
    for(int i = 1; i < 1/2 * (R-1); i++){
        sum += 2 * i;
    }
    if(r_flag == 1) {
        R += 1;
        int r_p = 1/2+R;
        sum += r_p;
        // std::cout << "R" << R << "sum" << sum << std::endl;
    }
    cout << "rでの回数" << sum << endl;

    int g_flag = 0;
    if(G % 2 == 0) {
        G -= 1;
        g_flag = 1;
    }
    for(int i = 1; i < 1/2 * (G); i++){
        sum += 2 * i;
    }
    if(g_flag == 1) {
        G += 1;
        int g_p = 1/2+G;
        sum += g_p;
    }

    cout << "gでの回数" << sum << endl;

    int b_flag = 0;
    if(B % 2 == 0) {
        B -= 1;
        b_flag = 1;
    }
    for(int i = 1; i < 1/2 * (B-1); i++){
        sum += 2 * i;
    }
    if(b_flag == 1) {
        B += 1;
        int b_p = 1/2+B;
        sum += b_p;
    }


    cout << sum << endl;
    return 0;
}