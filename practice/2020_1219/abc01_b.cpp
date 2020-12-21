/*
https://atcoder.jp/contests/abc001/tasks/abc001_2

気象情報は、世界中に様々な形で流れています。そのひとつの地上実況気象通報式 (SYNOP) では、視程 (肉眼で物体がはっきりと確認できる最大の距離) を、
次の規則に従って、VVという値 (通報式) に変換して報じます。

1. 0.1km未満：VVの値は00とする
2. 0.1km以上5km以下：距離(km)を10倍した値とする。１桁の場合は上位に0を付す。
    例えば、2000m=2.0kmならば、VVは20である、同じく、200mの場合VVは02である
3. 6km以上30km以下：距離(km)に50を足した値とする
4. 35km以上70km以下：距離（km）から30を引いて5を割った後、80を足した値とする
5. 70kmより大きい：VVの値は89とする

いま、あなたに視程の距離をメートルで与えるので、上記のルールに従って計算されるVVを出力するプログラムを作成してください。

なお、VVは必ず（上位の 0を含めて）2桁の整数であり、上記のルールに従って計算した時に整数にならないような入力や、上記の範囲に入らない入力はありません
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    float m;
    cin >> m;
    float km = m /1000;
    string VV;
    // cout << km << endl;
    if(km < 0.1) VV = "00";
    else if (km >= 0.1 && km <= 5.0) {
        km *= 10;
        if(km < 10){
            // 1桁目に0をつける
            // VV[0] = '0';
            VV = to_string((int)km);
            // VV[1] = km;
            cout << VV.length() << endl;
            // cout << VV[0] << endl;
            VV =  "0" + VV;
            cout << 0 << (int)km << endl;
            // return 0;
        }
        else {
            VV = to_string((int)km);
        }
    }
    else if (km >= 6.0 && km <= 30.0)
    {
        km += 50;
        VV = to_string((int)km);
    }
    else if (km >= 35.0 && km <= 70.0)
    {
        km -= 30;
        km /= 5.0;
        km += 80;
        VV = to_string((int)km);
    }
    else if (km > 70.0)
    {
        VV = "89";
    }
    // cout << VV[0] << VV[1] << endl;
    for(int i = 0; i < VV.length(); i++){
        cout << VV[i];
    }
    cout << endl;
    return 0;
}