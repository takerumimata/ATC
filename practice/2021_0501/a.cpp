#include<iostream>
#include<vector>

using namespace std;

int main(void){
    int a, b, c;
    cin >> a >> b >> c;
    a = a * a;
    b = b * b;
    c = c * c;
    if(a+ b < c) cout << "Yes" << endl;
    else
    {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}