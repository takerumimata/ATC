#include<iostream>
using namespace std;

int main(){
    int h, w;
    char str[1000][55];

    cin >> h >> w;

    for(int i = 0; i < h; i++){
        cin >> str[i];
    }

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            int count = 0;
            // ijが空白か判定
            if(str[i][j] == '.'){
                //cout << "." << endl;
                if(i == 0){
                    // i-1が存在しない
                    if(j==0){
                        // j-1が存在しない
                        for(int k = i; k < i+2; k++){
                            for(int l = j; l < j+2; l++){
                                if(str[k][l] == '#'){
                                    count++;
                                }
                            }
                        }
                    }else{
                        for(int k = i; k < i+2; k++){
                            for(int l = j-1; l < j+2; l++){
                                if(str[k][l] == '#'){
                                    count++;
                                }
                            }
                        }
                    }
                }else{  // iが0じゃない
                    if(j==0){
                        // jが０
                        for(int k = i-1; k < i+2; k++){
                            for(int l = j; l < j+2; l++){
                                if(str[k][l] == '#'){
                                    count++;
                                }
                            }
                        }
                    }else{
                        // iもjも0じゃない
                        for(int k = i-1; k < i+2; k++){
                            for(int l = j-1; l < j+2; l++){
                                if(str[k][l] == '#'){
                                    count++;
                                }
                            }
                        }
                    }

                }

                str[i][j] = (char)count;
                cout << count;
                count = 0;
                if(j == w-1){
                    cout << endl;
                }
            }
        }
    }

    for(int i = 0; i < h; i++){
        cout << str[i] << endl;
    }

}