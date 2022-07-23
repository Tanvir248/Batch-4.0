#include<iostream>

using namespace std;

int main(){
  int number;
 // bool flag = false;
    int flag = 0;
  cin>>number; // 15

  for (int i = 2; i <= number - 1 ; i++)
  {
      if(number % i == 0) { 
        
        flag = 1;
        
        break;
      }

  }
  
  if(flag == 1) {
    cout<<"Not prime number"<<endl;
  }else {
    cout<<"prime number"<<endl;
  }

  
}
/*
prime number:  15
  2 -- 14 ... 15

   number = 11
 2...10 -> prime
   
   //15 ,, 1 -- 15 

   15 / 3 = 5

   10 % 4 = 2
*/
