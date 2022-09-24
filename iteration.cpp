#include<iostream>
#include<map>
#include<vector>

using namespace std;
int main(){
    vector<int> V;
    pair<int , string> pr;
    map<int, string> mp;
    vector<int> :: iterator it;
    vector<int> V2;
    map<int, string> :: iterator itMP;
    V.push_back(10);
    V.push_back(11);
    V.push_back(12);
    V.push_back(13);
    V.push_back(15);
    sort(V.begin(), V.end());
    reverse(V.begin(), V.end());


    for ( it = V.begin(); it < V.end(); it++)
    {
        cout<< *it <<" ";
    }

    cout<<"Print in normal loop: "<<endl;

    for (int i = 0; i < V.size(); i++)
    {
        cout<<V[i]<<" ";
    }
    
    
}