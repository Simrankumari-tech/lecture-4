#include<iostream>
using namespace std;
int main(){
int a[]={2,4,5,3,1};
int n= sizeof(a)/sizeof(int);
int ans= 0;
for(int i =0; i<n ; i++){
    ans += a[i];
}
cout << ans << endl;
 return 0;
}