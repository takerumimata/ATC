/*
https://atcoder.jp/contests/abc001/tasks/abc001_3
*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
    float Deg, Wind;
    cin >> Deg >> Wind;

    // 要素数16の配列を定義して、うまいことインデックスとdegが対応するようにする。
    string snew[17] = {"N", "NNE", "NE", "ENE", "E", " ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NNW", "N"};
    float dis_table[13] =
    {0.2, 1.5, 3.3, 5.4, 7.9, 10.7, 13.8, 
    17.1, 20.7, 24.4, 28.4, 32.6, 200.0};
    return 0;
}