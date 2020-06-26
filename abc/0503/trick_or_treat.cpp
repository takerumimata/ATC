#include<iostream>
using namespace std;

int main(){
    int n, k;
    int arr[100][100];
    int d;

    cin >> n >> k;

    for(int i = 0; i < k; i++){
        cin >> d;
        int aa;
        for(int s = 0; s < d; s++){
            cin >> aa;
            arr[aa-1][i] = 1;
        }
        
    }

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < k; j++){
    //         cout << arr[i][j];
    //     }
    //     cout << endl;
    // }

    int count = 0;
    int sum = 0;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < k; j++){
            sum += arr[i][j];
        }
        if(sum == 0){
            count += 1;
        }
        // cout << sum << endl;
        sum = 0;
    }

    cout << count <<endl;
}