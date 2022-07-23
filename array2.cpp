#include<iostream>
using namespace std;
int main(){

  //int arr[5] = {10, 20, 30, 40, 50};
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
      cin>>arr[i];
  }
  
    long int cnt = 0;

    for (int i = 0; i < 5; i++)
    {
        cnt += arr[i];
    }
    
    cout<<cnt<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<< cnt - arr[i] <<endl;
    }

}

// 230 - 10 == 220
// 230 - 20 == 210
// 23