// https://atcoder.jp/contests/arc028/tasks/arc028_1
#include<iostream>

using namespace std;

int main(void) {
    int N, a, b;
    cin >> N >> a >> b;

    while(N >= 0){
        N -= a;
        if(N <= 0){
            cout << "Ant" << endl;
            return 0;
        }
        N -= b;
        if(N <= 0){
            cout << "Bug" << endl;
            return 0;
        }
    }
}