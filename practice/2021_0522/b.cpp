#include<iostream>
#include<vector>

using namespace std;
/*
神の恵みで財産を築いた高橋くんですが、なんとそこには罠がありました。
神は、高橋くんの発した言葉から母音 a、i、u、e、o を全て盗んでいったのです。
高橋くんが発した言葉を表す文字列 W が与えられるので、周囲の人が聞く言葉を表す文字列を出力するプログラムを書いてください。

input 
chokudai

output
chkd
*/

int main(void){
    string str;
    getline(cin, str);
    for(int i = 0; i < str.length(); i++){
        char cc = str[i];
        if(cc != 'a' and cc != 'i' and cc != 'u' and cc != 'e' and cc != 'o'){
            cout << cc;
        }
    }
    cout << endl;
    return 0;
}