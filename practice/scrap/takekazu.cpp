#include <iostream>
 using namespace std;
 int main(){
    int w,x,s,t,n;
    int a[n+1],b[n+1];
    a[0] = 0;
    a[1] = 0;
    b[0] = 0;
    b[1] = w;
    cin >> n >> s >> t ;
    cin >> w;
    for(int i = 2; i<=n;i++) cin>>a[i];
     x=w;
     for(int i=2;i<=n;i++){
         x+=a[i];
         b[i]=x;
     }
     int count;
     count = 0;
     for(int i=1;i<=n;i++){
         if (b[i] >=s & b[i]<=t){
             count++;
         }
     }
     cout << count <<endl;
     return 0;
 }