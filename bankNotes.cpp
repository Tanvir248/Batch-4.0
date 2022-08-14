#include<iostream>
using namespace std;
int main(){

    int money = 11257;
    
    int arr[7] = {100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 7; i++)
    {

        int temp  = money / arr[i]; 

        cout<<temp<<" nota(s) de R$ "<< arr[i]<<",00"<<endl;
        
        money = money % arr[i];
    
    }
    

   
}

/*
  11257 / 100 = 112 ... money = 7
  11257 % 100 = 


*/