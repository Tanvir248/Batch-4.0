#include<iostream>
using namespace std;

//universal variable
int num;

bool isEven(int n){
   if(n % 2 == 0) {
     return true;
   }
   return false;
   
}

void prime_number(int n){
 
  if (isEven(n)){
    cout<<"This is not a prime number!"<<endl;
    return;
  }
  // 13 
  bool flag = false;
  for (int i = 3; i < n; i++)
  {
     if(n % i == 0){
       flag = true;
       cout<<flag<<endl;
       break;
     }
  }
  
  if(flag){
    cout<<"This is not a prime number!"<<endl;
    return;
  }else {
    cout<<"Yeah this is prime number!"<<endl;
  }


}


int inputNumber(){

   cout<<"Enter a number: ";
   cin>>num;
   return num;
}


int main(){

 int x = inputNumber();

  prime_number(x);

}
/*
  2...15 -->  16
*/