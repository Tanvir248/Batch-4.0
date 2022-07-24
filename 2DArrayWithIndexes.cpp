#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    int arr[10][10];

    for (int i = 0; i < 5; i++) 
    {

        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j]; //arr[0][0] ,arr[1][1] ,arr[1][2] ,arr[0][3], arr[0][4]
        }
        
    }

    cout<<endl;

    for (int i = 0; i < 5; i++)
    { 
        // i = 4, 
        for (int j = 0; j < 5; j++)
        {
           cout<<"["<<i<<"]"<<"["<<j<<"] ->"<<arr[i][j]<<" "; //arr[4][0]
        }

        cout<<endl;

    }
   
}
// https://www.beecrowd.com.br/judge/en/problems/view/1018

/*
       0 1  2 3 4
  0 -> 8 9 21 2 3 
  1 -> 8 9 21 2 3 
  2 -> 8 9 21 2 3 
  3 -> 8 9 21 2 3 
  4 -> 9 0 2 1 4


 0 = [0][0], 
 1 = [1][0] , [1][1] ,  

*/
