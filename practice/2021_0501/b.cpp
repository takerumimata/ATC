#include<iostream>
#include<vector>

using namespace std;

int main(void){
    int N;
    cin >> N;
    int A[N], B[N];
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> B[i];

    int maxA = 0;
    int minB = 1000;
    for(int i = 0; i < N; i++){
        if(maxA < A[i]) maxA = A[i];
        if(minB > B[i]) minB = B[i];
    }

    int count = minB - maxA + 1;
    if(count < 0) count = 0;
    // std::cout << maxA << std::endl;
    // std::cout << minB << std::endl;
    std::cout << count << std::endl;
    return 0;
}