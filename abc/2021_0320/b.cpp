#include<iostream>
#include <iomanip>
#include<vector>
using namespace std;

int main(){
    // 文字列として扱って.以下を消す処理を走らせたほうがいい
    char a[100];
    string str;
    // cin >> a;
    char l;
    int i = 0;
    // while(cin>>l){
    //     str[i] = l;
    //     cout << a[i];
    //     i++;
    // }
    getline(cin,str);
    
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '.') break;
        cout << str[i];
    }
    cout << endl;
    return 0;
}