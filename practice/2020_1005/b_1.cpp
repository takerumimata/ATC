// B - Similar Arrays

#include<iostream>
#include<vector>//可変長配列
#include<algorithm>//sort,二分探索,など
#include<map>//map(辞書)

using namespace std;

int main(void){
    int N;
    cin >> N;
    int x[N];
    for(int i = 0; i < N; i++){
        cin >> x[i];
    }

    // x[i]が偶数なら+3、[i]が奇数なら+2
    int whole = pow(3, N);
    int even = 0;
    for(int i = 0; i < N; i++){
        if(x[i] % 2 == 0){
            even+=1;
        }
    }
    // cout << whole << endl;
    whole -= pow(2, even);
    cout << whole << endl;

    return 0;
}