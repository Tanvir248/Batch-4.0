#include<iostream>
using namespace std;
int main(){
    
    int arr[10][10];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
        
    }


cout<<"Print Martix:"<<endl;

//    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           cout<<"arr"<<"["<<i<<"]"<<"["<<j<<"]"<<", ";
        }
        cout<<endl;
    }
    
//    cout<<sum<<endl;
cout<<arr[2][2];

}

// arr[0] --> value
// arr[1, 2, 4, 5] ==> arr[3]
// for 2D array ->> arr[0][0] --> value //  2D 100*100 --> O(n^3)

/*

    [0][0], [0][1], [0][2], [0][3]
    [1][0], [1][1], [1][2], [1][3]
    [2][0], [2][1], [2][2], [2][3]
    [3][0], [3][1], [3][2], [3][3]

*/
/*
    sum with any direction...!
*/