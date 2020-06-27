#include<iostream>
#include<vector>//可変長配列
#include<algorithm>//sort,二分探索,など
#include<map>//map(辞書)

using namespace std;

int main(void){
    string s, t;
    
    cin >> s >> t;
    int N = s.length();

    int count = 0;
    for(int i = 0; i < N; i++){
        if(s[i] != t[i]){
            count += 1;
        }
    }

    cout << count << endl;
}