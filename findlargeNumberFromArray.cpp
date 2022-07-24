

#include<iostream>
using namespace std;
int main(){
// Small number , Large number , Search Number 

    int arr[8] = {8, 11, 24, 5 , 22, 0, 9, 12};
    
    int largeNumber = arr[0]; // 8
     
    for (int i = 1; i < 8; i++)
    {

        if ( arr[i] > largeNumber) {

            largeNumber = arr[i];
        }
    }

    cout<<largeNumber<<endl;

}
/*  int n;

    cin>>n; 

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        
    }
*/