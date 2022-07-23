#include<iostream>
//#include<bool>
using namespace std;

int main(){
   
  // int , string, bool, char, array, custom variable

   bool flag;

   int n;
   cin>>n;


   if(n%2 == 0){
      flag = true;
   }else {
      flag = false;
   }

   if (flag) {
      cout<<"The number is Even!"<<endl;
   }else {
      cout<<"The Number is Odd!"<<endl;
   }

}
