#include<iostream>
#include<vector>

using namespace std;

int main(void) {
    int N;
    cin >> N;
    string str;
    for(int i = 0; i < 2 * N; i++) cin >> str[i];
    int Q;
    cin >> Q;
    char temp;
    string str_pre;
    string str_pos;
    int T[Q], A[Q], B[Q];
    for(int i = 0; i < Q; i++){
        cin >> T[i] >> A[i] >> B[i];
        A[i] -= 1;
        B[i] -= 1;
        // Tの値に応じて処理を分岐させる
        if(T[i] == 1) {
            // A[i]番目とB[i]番目の文字を入れ替える
            temp = str[A[i]];
            str[A[i]] = str[B[i]];
            str[B[i]] = temp;
        }else if(T[i] == 2){
            // Sの前半N文字と後半N文字を入れ替える
            for(int j = 0; j < N; j++) str_pre[j] = str[j];
            for(int j = N, k = 0; j < N * 2; j++, k++) {
                str_pos[k] = str[j];
            }
            for(int j = 0, k = 0; j < 2 * N; j++, k++){
                if(j == N) k = 0;
                if(j < N) str[j] = str_pos[k];
                else if (j >= N) str[j] = str_pre[k];
            }
        }

    }
    for(int i = 0; i < 2 * N; i++) cout << str[i];
    cout << endl;
    return 0;
}