#include<iostream>
using namespace std;
int main(){
//Search Number 

   int n; 

    cin>>n; 

    int arr[n];
    int searchNumber = 20;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == searchNumber ) {
            cout<<"Yes"<<endl;
            break;
        }   
    }
    
}
/*  int n;

    cin>>n; 

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        
    }
*/