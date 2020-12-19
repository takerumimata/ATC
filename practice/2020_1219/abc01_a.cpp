/*
ある時刻の積雪深H1とその1時間前の積雪深H2が与えられます。この時、この1時間の積雪深差H1−H2の値を計算して出力してください。
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int H1, H2;
    cin >> H1 >> H2;
    int diff = H1 - H2;
    cout << diff << endl;
    return 0;
}