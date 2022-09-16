//recursion
//vector
#include<iostream>
using namespace std;
int sum = 0;
int decriment(int n){

    if(n == 0){
        return sum;
    }
    sum += n;

    return decriment(n - 1);
}

int main(){
   cout<< decriment(10)<<endl;
}