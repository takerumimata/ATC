#include<iostream>
#include<string>

using namespace std;

int main(){
    string S;
    cin >> S;
    int count[6] = {0};

    for(int i = 0; i < S.length(); i++){
        if(S[i] == 'A'){
            count[0] += 1;
        }
        if(S[i] == 'B'){
            count[1] += 1;
        }
        if(S[i] == 'C'){
            count[2] += 1;
        }
        if(S[i] == 'D'){
            count[3] += 1;
        }
        if(S[i] == 'E'){
            count[4] += 1;
        }
        if(S[i] == 'F'){
            count[5] += 1;
        }
    }

    cout << count[0] << " " << count[1] << " " << count[2] << " " << count[3] << " " << count[4] << " " << count[5]  << endl;
}