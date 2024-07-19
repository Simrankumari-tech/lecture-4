#include<iostream>
using namespace std;
int main(){
    int x= 0,y=0;
    char ch;
    ch = cin.get() ;
    while(ch != '\n'){
        if(ch == 'N') y++ ;
        else if(ch== 'S') y-- ;
        else if(ch== 'E') x++ ;
        else if(ch== 'W') x-- ;
        ch= cin.get() ;
    }
//PRINT THE DIRECTIONS 'E' , 'N' , 'S' , 'W'
if(x>=0){
    // print x times E
    for(int i=0 ; i<x ; i++){
        cout << 'E' ;
    }
}
if(y>=0){
    //print y times N
    for(int i=0 ; i<y ; i++){
        cout << 'N' ;
    }
}
else{
    //print |y| times 'S' mod lagaya kyuki y negative hai
    y = y * - 1;
    for(int i=0 ; i<y ; i++){
        cout << 'S' ;
    }
}

//print W 
if(x<0){
    x= x * - 1;
 for(int i=0 ; i<x ; i++){
        cout << 'W' ;
    }
}
cout << endl;
    return 0;
}