#include<iostream>
#include<map>
using namespace std;
int main(){
    int arr[100];
    arr[0] = 10;
    arr[1] = 12;
    arr[2] = 20;
    //alif.roxen12
    map<int, string> mp;
    mp[67] = "Tanvir";
    //cout<<mp[67]<<endl;
   map<string, int> mp2;
   mp2["Tanvir"] = 45;
   mp2["Reza"] = 75;
   mp2["Alif"] = 68;
   mp2["alif.roxen12"] = 90;
   

    string name;
    cout<<"Search username: ";
    cin>>name;
   cout<<mp2[name]<<endl;
}