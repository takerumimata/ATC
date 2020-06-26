#include<iostream>
using namespace std;

int main() {
    int N, A, B, d;
    int x = 0;
    string s;

    cin >> N >> A >> B;

    for(int i = 0; i < N; i++){
        cin >> s >> d;
        if(d<A){
            d = A;
        } 
        if(d>B){
            d = B;
        }

        if(s == "East"){
            x += d;
        }else{
            x -= d;
        }
    }

    if(x > 0){
        cout << "East " << x << endl;
    }
    else if(x < 0){
        cout << "West " << -x << endl;
    }else {
        cout << 0 << endl;
    }

}