#include<iostream>
#include <iomanip>
#include<vector>
using namespace std;

int ctoi(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	return 0;
}

int main(){
    int x;
    cin >> x;
    int num = x;
    int keta = 0;
    while(num!=0){
        num /= 10;
        keta++;
    }
    // std::cout << keta << std::endl;
    if(keta % 2 != 0) {
        keta--;
        x = pow(10, keta) - 1;
    }
    cout << "input " << x << endl;
    cout << "keta " << keta << endl;
    // 先頭の桁数が欲しい
    int sento;
    sento = x / (pow(10, (keta - 1)));

    cout << "sento " << sento << endl;

    string str;
    str = to_string(x);
    int chu = keta / 2;
    int count = 0;
    for(int i = 0; i <= chu; i++){
        int aa = ctoi(str[i]);
        std::cout << aa << std::endl;
        if(i == chu) count += aa + 1; 
    }

    // count = 9 * (sento - 1);
    cout << count << endl;
    return 0;
}