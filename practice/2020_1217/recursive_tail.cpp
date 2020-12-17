// フィボナッチ数列を求める再帰関数を末尾呼び出し最適化
#include<iostream>
// #include<>

using namespace std;

// ダメな例
int fibo(int N){
    // フィボナッチ数列
    if(N == 1) return 1;
    if(N == 0) return 0;
    if(N < 0) {
        cout << "input error" << N << "is invalid!" <<endl;
    }

    return fibo(N-1) + fibo(N-2);
}

// 良い例
int fibo_tail(int N, int a = 1, int b = 0){
    // フィボナッチ数列
    if(N == 1) return a;
    if(N == 0) return 0;
    if(N < 0) {
        cout << "input error" << N << "is invalid!" <<endl;
    }

    return fibo_tail(N-1, a+b, a);
}

int main() {
    int x;
    cin >> x;
    cout << fibo_tail(x) << endl;
    return 0;
}