#include<iostream>
#include<vector>
using namespace std;

int main(void) {
    int H,W;
    cin >> H >> W;
    char vec[H][W];

    for(int i = 0; i <  H; i++){
        for(int j = 0; j < W; j++){
            cin >> vec[i][j];
        }
    }

    int count = 0;
    int rec = 0;
    // 頂点の数を数えればいい
    // ４ますひとペアで探索する 
    for(int i = 0; i <  H; i++){
        for(int j = 0; j < W; j++){
            if (vec[i][j] == '#') count += 1;
            if (vec[i+1][j] == '#') count += 1;
            if (vec[i][j+1] == '#') count += 1;
            if (vec[i+1][j+1] == '#') count += 1;
            if(count == 1 or count == 3) rec += 1;
            count = 0;
        }
    }
    cout << rec << endl;
    return 0;
}