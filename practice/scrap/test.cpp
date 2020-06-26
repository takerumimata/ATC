#include<iostream>
#include<string>
// 
//
using namespace std;


int main() {
    int D;
    string s;
    cin >> D;
    if(D == 25){
        s = "Christmas";
    }
    else if(D == 23){
        s = "Christmas Eve Eve";
    }
    else if(D == 22){
        s = "Christmas Eve Eve Eve";
    }
    else if(D == 24){
        s = "Christmas Eve";
    }
    cout << s  << endl;
}