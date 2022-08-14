#include<iostream>
using namespace std;
int n;
int main(){
   
   int arr[10][10];
   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 5; j++)
      {
         cin>>arr[i][j];
      }
      
   }
   
   int findI  = 0, findJ = 0;
  


   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 5; j++)
      {
         if(arr[i][j] == 1) {
         findI = i + 1;
         findJ = j + 1;
           break;
         }
      }
      
   }
   
   
   int ans = abs(3 - findI) + abs(3 - findJ);

   cout<<ans<<endl;

}

/*

 

0 0 0 0 0  
0 0 0 0 0
0 0 0 0 0     
0 0 0 0 0
0 1 0 0 0

abs(3 - 5) = 2;
abs(3 - 1) = 2;

2 , 5

 abs 3- 5  = 2
  abs 3 -2 = 1


*/