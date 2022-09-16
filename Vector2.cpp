//vector
#include<iostream>
#include<vector>
using namespace std;

int main(){
  int arr[5];
   vector<int> V;

    arr[0] = 5;
    arr[1] = 1;
    arr[2] = 4;

    V.push_back(5);
    V.push_back(1);
    V.push_back(10);
    V.push_back(100);
    V.push_back(99);
    //  v.pb , 5 1 10 100 99
    cout<<V.size()<<endl;
    reverse(V.begin(), V.end());
    sort(V.begin(), V.end());
}