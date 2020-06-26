#include<iostream>
using namespace std;

int main(){
    //自然数
    int num;
    // 各桁の数字
    int dig;
    // 合計
    int sum = 0;

    cin >> num;
    while(num){
        dig = num % 10;
        sum += dig;
        num /= 10;
    }

    cout << sum << endl;
}