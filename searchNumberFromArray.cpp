#include<iostream>
using namespace std;
int main(){
//Search Number 

    int searchItem = 21;
    int arr[10] = {10, 12, 89, 120, 48, 49, 210, 88, 112, 16};

    bool flag = true;

    for (int i = 0; i < 10; i++)
    {
        // arr[6] = 21
        if(arr[i] ==  searchItem){

            flag = false;
            cout<<"Yes I find this! "<< i+1 <<endl;
            
            break;
            
        }

    }

    if (flag == true) {
        cout<<"Item not found!"<<endl;
    }

}
/*  int n;

    cin>>n; 

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        
    }
*/