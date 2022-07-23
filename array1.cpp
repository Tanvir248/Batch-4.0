#include<iostream>
using namespace std;
int main(){

    int arr[5] = {111, 72, 63, 44, 35};

    cout<<arr[0]<<" ";
    cout<<arr[1]<<" ";
    cout<<arr[2]<<" ";
    cout<<arr[3]<<" ";
    cout<<arr[4]<<" ";
    cout<<endl;


 // ->

    for (int i = 0; i < 5; i++)
    {
      
       cout<<arr[i]<<" ";

    }
  cout<<endl;

  for (int i = 4; i >= 0; i--)
  {

    cout<<arr[i]<<" ";

  }
  


    cout<<endl;
}
