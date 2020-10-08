#include <iostream>

using namespace std; 

int main()
{
    for (int i = 1; i <= 100; i++) {
    if (i % 3 == 0 && i % 5 == 0)  // iが3の倍数かつ5の倍数
        cout << "Fizz,Buzz" << endl;
    else if (i % 3 == 0)  // iが3の倍数(かつ、5の倍数でない)
        cout << "Fizz" << endl;
    else if (i % 5 == 0)  // iが5の倍数(かつ、3の倍数でない)
        cout << "Buzz" << endl;
    else  // iが3の倍数でも5の倍数でもない
        cout << i << endl;
    }

  return 0;
}