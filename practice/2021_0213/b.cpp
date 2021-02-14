#include<iostream>
#include<vector>

using namespace std;

int main(){
    string S;
    cin >> S;
    int num = stoi(S);
    int post = num % 100;
    int pre = num / 100;

    if(pre >= 1 && pre <= 12 && post >= 1 && post <= 12) cout << "AMBIGUOUS" << endl;
    else if(pre >= 0 && pre <= 99 && post >= 1 && post <= 12) cout << "YYMM" << endl;
    else if(pre >= 1 && pre <= 12 && post >= 0 && post <= 99) cout << "MMYY" << endl;
    else cout << "NA" << endl;
    return 0;
}