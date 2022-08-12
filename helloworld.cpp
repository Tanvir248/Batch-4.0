#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>V;
    int arr[9] = { 1, 8, 6, 2, 3, 4, 8, 5, 7};
    int m = 0;
    
    for (int i = 0; i < 9; i++)
    {
        int x = i + 1;
        for (int j = x; j < 9; j++)
        {

        int mini = min(arr[i], arr[j]);
              int ansx = mini * (j - i);
            if (ansx>m)
                m=ansx;
        
        }
        
    }
    
    cout<<m<<endl;
    

}
