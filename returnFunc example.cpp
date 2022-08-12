#include<iostream>
using namespace std;
int n;
int returnINT(int a, string s){

     int x = s.size();
    return a + x;
}
int main(){
   int a;
   a = 2;
   string b = "BUBTxyz";
   
   cout<<"Ans func: "<< returnINT(a, b)<<endl;
   
}