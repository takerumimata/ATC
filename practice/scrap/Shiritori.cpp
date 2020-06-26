#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    // string str;
    char str[10][100];

    for(int i = 0; i < N; i++){
        cin >> str[i];
    }
    // for(int i = 0; i < N; i++){
    //     cout << strin[i] << endl;    
    // }
    int flag = 1;
    // 全探索
    for(int i = 0; i < N; i++){
        // しりとりになっているか
        char last;
        for(int k = 0; str[i][k] != '\0' and k < 10; k++){
            last = str[i][k];
        }

        if(last != str[i+1][0] and i != N-1){
            flag = 0;
        }
        // if(str[i][sizeof(str[i])/sizeof(char)] != str[i+1][0]){
        //     flag = 0;
        // }
        // cout << str[i] << endl;

        for(int k = i+1; k < N; k++){
            cout << str[k] << endl;
            if(str[i] == str[k]){
                flag = 0;
            }
        }
    }

    if(flag == 1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" <<endl;
    }
}