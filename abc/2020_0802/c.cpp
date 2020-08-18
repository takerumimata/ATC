#include<iostream>
#include<vector>//可変長配列
#include<algorithm>//sort,二分探索,など
#include<map>//map(辞書)
#include <cmath>

using namespace std;

int main(void){
    long K;
    cin >> K;
    int n;
    unsigned long long an;

    for(int i = 2; i < K; i++){
        an = (pow(10, i)-1)/9;
        cout << pow(10, i) << " " << an <<  endl;
        if(an % K == 0){
            cout << i  << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}