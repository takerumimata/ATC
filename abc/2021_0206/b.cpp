#include<iostream>
// #include<vector>//可変長配列
#include<algorithm>//sort,二分探索,など
#include<map>//map(辞書)

using namespace std;

int main(void){
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        if(A[i] == X){
            A.erase(i);
        }
    }
    return 0;
}