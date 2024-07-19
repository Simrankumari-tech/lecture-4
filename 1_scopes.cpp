#include<iostream>
using namespace std;
int a = 1000;
int main(){
int a= 10;
int b=100;
if(a>1){
    a++ ; //11
    int b= -1;
    cout << b << endl;  //-1
   
    b=-10; 
    cout << b << endl; //-10
     cout << "global a inside if block : " << ::a << endl;  //1000
     ::a = ::a +1000 ;
}
 //scope resolution operator ->  ::
 cout << " global a : " << :: a << endl; //2000
cout << a<< endl; //11
cout << b << endl;  //100
    return 0;
}