// https://atcoder.jp/contests/arc028/tasks/arc028_2

// アルゴリズムがどうこうって話ではなくて、頭でパズルを解くのがいかにうまいかだなこれは...

#include<iostream>
#include<vector>
#include<map>
using namespace std;

//2次元ベクトルを表示
void printVec(const vector<vector<int> > v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main(void){
    int N, K;
    vector< vector<int> > x;
    // map<int, int> x;
    cin >> N >> K;
    int xx;

    // 連想配列として読み込みたい

    for(int i = 0; i < N; i++){
        cin >> xx;

        vector<int> tmp;
        tmp.push_back(i);tmp.push_back(xx);
        x.push_back(tmp);
        tmp.clear();
        
    }

    printVec(x);
}

