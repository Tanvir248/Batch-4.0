//vector
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[5] = {8, 5, 1 ,3 ,5};
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    reverse(arr, arr + 5);
cout<<endl;
   for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
        
    
}