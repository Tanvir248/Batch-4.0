//recursion
//vector
#include<iostream>
using namespace std;
int sum = 0;

int oddNumber(int n){

    if(n == 100){
        return 0;
    }
    
    if (n%2 == 1){
     cout<<n<<" ";
    }

    return oddNumber(n + 1);
    

}

int main(){
   oddNumber(0);
}