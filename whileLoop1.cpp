#include<iostream>

using namespace std;

int main(){


  // 109 % 10 = 1 
      int  x = 12434254;
      int cntNumber = 0;
      cout<<x<<endl;
      while(x != 0)
      {          
        cntNumber++;
        x = x/10;
        cout<<x<<" ";
      }
      //cout<<cntNumber<<endl;
}

