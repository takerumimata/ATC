#include<iostream>
// #include<cmath>
#include<vector>

using namespace std;

int main(){
    int N;
    cin >> N;

    // vector<int> tmp;
    int count[N+1];
    for(int i = 0; i <= N; i++){
        count[i] = 0;
    }
    int tmp;
    for(int i = 2; i <= sqrt(N); i++){
        for(int j = 2; pow(i, j) <= N; j++){
            tmp = pow(i, j);
            // cout << tmp << endl;
            count[tmp] = 1;
        }
    }

    int cnt = 0;
    for(int i = 0; i <= N; i++){
        if(count[i] == 1) {
            // cout << i << endl;
            cnt += 1;
        }
    }
    cout << N - cnt << endl;
    return 0;
}