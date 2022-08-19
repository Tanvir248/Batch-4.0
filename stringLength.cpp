#include<iostream>
using namespace std;

int main(){

string str = "BUBTdkfjsgsgagd"; //'\0'

int i = 0;
   while (1)
   {
      if(str[i] == '\0'){
         break;
      }
   i++;
   }
   cout<<i<<endl;
      
}