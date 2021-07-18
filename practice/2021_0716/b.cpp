// B問題：回転
#include<iostream>
#include<vector>

using namespace std;

int main(void){
    int h, w;
    h = 4;
    w = 4;
    // vector< vector<char> > board;
    char board[4][4];
    for(int i = 0; i < h; i++){
        for(int k = 0; k < w; k++){
            cin >> board[i][k];
        }
    }

    // 出力
    for(int i = h - 1; i >= 0; i--){
        for(int k = w - 1; k >= 0; k--){
            cout << board[i][k] << " ";
        }
        cout << endl;
    }

    return 0;
}