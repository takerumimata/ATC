#include<iostream>
using namespace std;

int main(){
    string a, b, c;
    cin >> a >> b >> c;

    char who = 'a';
    int i, j, k = 0;
    while(true){
        if(who == 'a'){
            if(a[i] == '\0'){
                who = 'A';
                break;
            }
            who = a[i];
            i++;
        }
        else if(who == 'b'){
            if(b[j] == '\0'){
                who = 'B';
                break;
            }
            who = b[j];
            j++;
        }
        else if(who == 'c'){
            if(c[k] == '\0'){
                who = 'C';
                break;
            }
            who = c[k];
            k++;
        }
    }
    cout << who << endl;
}