#include<iostream>
using namespace std;

int main(){
    int n ,s, t;
    int w;
    // 配列を宣言
    int a[1000];

    cin >> n >> s >> t;
    cin >> w;

    for(int i = 0; i < n-1; i++){
        cin >> a[i];
    }

    int count = 0;
    if(w >= s && w <= t){
        count++;
    }

    for(int i = 0; i < n; i++){
        w += a[i];
        if(w >= s && w <= t){
            count += 1;
        }
        
    }

    cout << count << endl;
}