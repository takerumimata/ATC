#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N;
    cin >> N;
    int data[N][3];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 3; j++){
            cin >> data[i][j];
        }
    }
    // 時間の進み方を変えると考えやすい 2バイすると、1, 3, 5, 7分後に一個売れていく
    int min = -1;

    for(int i = 0; i < N; i++){
        int time = data[i][0] * 2;
        if(time % 2 == 0) time -= 1;
        int decrease = time / 2 + 1;
        if(decrease < data[i][2]){
            if(min == -1) min = data[i][1];
            else if(min > data[i][1]) min = data[i][1];
        }
    }

    cout << min << endl;
    return 0;
}