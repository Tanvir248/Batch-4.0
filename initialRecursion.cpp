//recursion
//vector
#include<iostream>
using namespace std;

int decriment(int n){

    if(n == 0){
        return 0;
    }
    cout<<n<<" "; 

    return decriment(n - 1);
}

int main(){
    decriment(15);
}