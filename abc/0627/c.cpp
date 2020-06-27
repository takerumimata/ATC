#include<iostream>
#include<vector>//可変長配列
#include<algorithm>//sort,二分探索,など
// #include<map>//map(辞書)

using namespace std;


// void printVec(const vector<int> v){
//     for(int j=0;j < v.size();j++){
//             cout<<  v[j] << " ";
//         }
// }

void retA(vector<int> v, int K, int hon){
    while(K > 0 && !v.empty()){
        K -= v[0];
        v.erase(v.begin());
        hon += 1;
    }
    cout << hon << endl;
}

int main(void){
    int N, M, K;
    vector<int> a;
    vector<int> b;
    cin >> N >> M >> K;
    int tmp;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int i = 0; i < M; i++){
        cin >> tmp;
        b.push_back(tmp);
    }
    // --------------読み込み完了----------------------
    int hon = 0;
    while(K > 0 && !a.empty() && !b.empty()){
        if(a[0] <= b[0] && a[0] <= K && !a.empty()){
            K -= a[0];
            a.erase(a.begin());
            hon += 1;
            continue;
        }else if(b[0] < a[0] && b[0] <= K && !b.empty()){
            K -= b[0];
            b.erase(b.begin());
            hon += 1;
            continue;
        }else if(a.empty() && b[0] <= K){
            // どっちかがからになった場合
            retA(b, K, hon);
            return 0;
        }else if(b.empty() && a[0] <= K){
            // どっちかがからになった場合
            retA(a, K, hon);
            return 0;
        }else {
            break;
        }
    }
    cout << hon << endl;
}