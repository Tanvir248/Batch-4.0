//vector
#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> V;

  for (int i = 0; i < 6; i++)
  {
      int n;
      cin>>n;
      V.push_back(n);
  }
  
  for (int i = 0; i <V.size(); i++)
  {
      cout<<V[i]<<" ";
  }
  sort(V.begin(),V.end());
cout<<endl;
cout<<"Sorted Array : "<<endl;
 
  for (int i = 0; i <V.size(); i++)
  {
      cout<<V[i]<<" ";
  }   
  reverse(V.begin(), V.end());
  cout<<endl;
  cout<<"Desending sort: "<<endl;
  for (int i = 0; i <V.size(); i++)
  {
      cout<<V[i]<<" ";
  }   
}