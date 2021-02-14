#include<iostream>
#include <iomanip>

using namespace std;

int main(){
    double N, K;
    int x;
    cin >> N >> K;
    double prob = 0;
    for(int i=1; i<= N; i++){
        x = ceil(log2(K/i));
        if( x <  0) x = 0;
        // cout << i << ":" << x << endl;
        prob += (1 / N / pow(2, x));
    }
    cout << fixed << setprecision(15) << prob << endl;
    return 0;
}