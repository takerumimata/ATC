#include<iostream>
#include<vector>//可変長配列
#include<algorithm>//sort,二分探索,など
#include<map>//map(辞書)
#include <cmath>

using namespace std;

int main(void){
    int N, D;
    cin >> N >> D;
    long x, y;
    double l;
    int count = 0;
    for(int i = 0; i < N; i++){
        cin >> x >> y;
        l = sqrt(x*x + y*y);
        if(l <= D){
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}