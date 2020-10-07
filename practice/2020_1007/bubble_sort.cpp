#include<iostream>

using namespace std;

int main(void) {
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    int tmp;
    int count = 0;
    for(int i = 0; i < N; i++){
        for(int j = N-1; j > i; j--){
            if(arr[j] < arr[j-1]){
                tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
                count++;
            }
        }
    }

    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout  << endl;
    cout << count << endl;
    return 0;
}