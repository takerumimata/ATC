#include<iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int i =1;
    int r = 360 % x;
    while(r != 0){
        i++;
        r = 360 * i % x;
    }
    int k = 360 * i / x;
    cout << k << endl;
}