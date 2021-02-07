#include<iostream>
#include<vector>
using namespace std;

int main(void) {
    int H,W;
    cin >> H >> W;
    H += 2;
    W += 2;
    char vec[H][W];
    for(int i = 0; i < H; i++){
        vec[i][0] = '.';
        vec[i][W-1] = '.';
    }
    for(int j = 0; j < W; j++){
        vec[0][j] = '.';
        vec[H-1][j] = '.';
    }

    for(int i = 1; i <  H-1; i++){
        for(int j = 1; j < W-1; j++){
            cin >> vec[i][j];
        }
    }

    // for(int i = 0; i <  H; i++){
    //     for(int j = 0; j < W; j++){
    //         cout << vec[i][j];
    //     }
    //     cout << endl;
    // }

    int count=0;

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            // i行目の操作に関して、連続しない#が観測された場合 +3 角形（両隣が白なら+3）
            if(vec[i][j] == '#'){
                count += 4;
                if(vec[i][j-1] == '#' ) count -= 1;
                if(vec[i][j+1] == '#' ) count -= 1;
                if(vec[i+1][j] == '#' ) count -= 1;
                if(vec[i-1][j] == '#' ) count -= 1;
                // 上がしろなんだけれど、隣が黒だったらさらに-1しなきゃいけない
                // 多分境界線のことが考慮に入れられてない パディングで詰め物をすると良い？
                if(vec[i][j-1] == '#' && vec[i+1][j] != '#') count -= 1;
                if(vec[i][j-1] == '#' && vec[i-1][j] != '#') count -= 1;
                if(vec[i+1][j] == '#' && vec[i][j+1] != '#') count -= 1;
                if(vec[i+1][j] == '#' && vec[i][j-1] != '#') count -= 1;

            }
            
        }
    } 
    cout << count << endl;
    // 連続する#が観測された場合
    return 0;
}