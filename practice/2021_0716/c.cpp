#include<iostream>
#include<vector>

using namespace std;

int main(void){
    int N;
    cin >> N;
    // 初期状態
    // 1 2 3 4 5 6
    int card[6] = {1, 2, 3, 4, 5, 6};
    for(int i = 0; i < N; i++){
        int left, right;
        left = i % 5 + 1 - 1;
        right = i % 5 + 2 - 1;  // 0-indexなので一個ずらす
        int temp;
        temp = card[left];
        card[left] = card[right];
        card[right] = temp;
    }

    for(int i = 0; i < 6; i++) cout << card[i];
    cout << endl;
    return 0;
}