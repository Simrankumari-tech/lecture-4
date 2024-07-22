#include<iostream>
using namespace std;
int main(){
int a[] ={65, 2,4 , 5 ,9 ,15,67};
int n= sizeof(a)/ sizeof(int);
int largest, second_largest;
largest = second_largest= a[0];
for(int i =1; i<=n ;i++){
    if(a[i]>largest){
        second_largest =largest;
        largest= a[i];
    }
    else if(a[i]> second_largest){
        second_largest = a[i];
    }
}
cout << "second largest : " << second_largest << endl;

    return 0;
}