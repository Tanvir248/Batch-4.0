#include<iostream>
using namespace std;

int cnt = 0;

int counterFunc(){
   return cnt++;
}


int main(){ 

    counterFunc();
    counterFunc();
    counterFunc();
    counterFunc();
    counterFunc();
   
   cout<<cnt<<endl;
}
// int 12; 18034312 
// 
