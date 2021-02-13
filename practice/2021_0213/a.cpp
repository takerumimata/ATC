#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N, K;
    string S;

    cin >> N >> K;
    cin >> S;

    for(int i = 0; i < N; i++){
        if(i == K - 1) {
            S[i] = tolower(S[i]);
        }
        cout << S[i];
    }
    cout << endl;
    return 0;
}