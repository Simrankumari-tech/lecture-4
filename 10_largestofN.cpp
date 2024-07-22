#include<iostream>
#include<climits>
using namespace std;
int main(){
int a[] ={1,24,54,67,76};
int n= sizeof(a)/ sizeof(int) ;
int largest= INT_MIN;
for(int i= 0; i<n ;i++){
    if(a[i] > largest ){
        largest = a[i];
    }
}
cout << largest << endl;

    return 0;
}