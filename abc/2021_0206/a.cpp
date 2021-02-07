#include<iostream>
#include<vector>//可変長配列
#include<algorithm>//sort,二分探索,など
#include<map>//map(辞書)

using namespace std;

int main(void){
    int V, T, S, D;
    cin >> V >> T >> S >> D;
    int start = V * T;
    int end = V * S;
    if(D >= start && D <= end){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}