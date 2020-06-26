#include<iostream>
#include<map>
using namespace std;


int main(){
    string s, t;
    cin >> s >> t;
    // パターン1: 文字の出現回数をカウントする
    int x = s.length();
    map<char, int> mps;
    map<char, int> mpt;
    for(int i = 0; i < x; i++){
        mps[s[i]] += 1;
        mpt[t[i]] += 1;
    }
  
    int flag = 0;
    for(auto itr = mps.begin(); itr != mps.end(); itr++) {
        cout << " " << itr->first << mps[itr->first] << " " << mpt[itr->first] << endl;
        if(mps[itr->first] != mpt[itr->first]){
            cout << "No" << endl;
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        cout << "Yes" << endl;
    }
}