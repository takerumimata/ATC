#include<iostream>

using namespace std;

int main(void) {
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    int tmp, j, v;

    // sort 
    for(int i = 1; i < N; i++){
        v = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > v){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = v;
    }

    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}