#include<iostream>

using namespace std;

int main(){
   
    int n;
    cin>>n;  // 12

// statement true ->
    if(n%2 == 0) {

      if (n > 10) {
        cout<<"Yeah its bigger than 10"<<endl;
      }
  // loop
    for(int i = 0; i <= n; i++) {
      
      if(i%2 == 0) {
        cout<<i<<" ";
      }
    }
      //new line 
  cout<<endl;

    }
  else {

     for(int i = 0; i <= n; i++) {
      
      if(i%2 == 1) {
        cout<<i<<" ";
      }
      
    }
    cout<<endl;

}
return 0;
}
