#include<iostream>

using namespace std;

int main(void){
	string s,t;
    cin >> s >> t;
    int N = s.length();
    for(int i = 0; i < N; i++){
        if(s == t){
            cout << "Yes" << endl;
            return 0;
        }
        s = rotate(s);
    }
    cout << "No" << endl;
    return 0;
}

string rotate(string s){
    return s.substr(1)+s[0];    
}