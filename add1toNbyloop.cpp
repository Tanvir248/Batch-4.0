#include<iostream>

using namespace std;

int main(){
  int n;
  int sum = 0;
  
  cin>>n;  //n = 15

  for (int i = 1; i <= n ; i++)
  {
    sum = sum + i;
  //  cout<<sum<<" ";
  }
  
  cout<<sum<<endl;

}
