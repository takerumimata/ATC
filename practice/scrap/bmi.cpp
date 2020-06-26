#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    double h, bmi, wei;

    cin >> h >> bmi;
    h /= 100; 
    wei = h*h*bmi; 

    cout << fixed << setprecision(3) << wei << endl;
}