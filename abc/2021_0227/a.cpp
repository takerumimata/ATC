#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    double A, B;
    cin >> A >> B;
    cout << std::fixed << std::setprecision(15) << (A-B)/A * 100<< endl;

    return 0;
}