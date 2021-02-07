#include<iostream>
#include<vector>
using namespace std;

int main() {
    // 入力
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        if(A[i] == X){
            A.erase(A.begin() + i);
            i -= 1;
            N -= 1;
        }
    }

    for(int i = 0; i < N; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}