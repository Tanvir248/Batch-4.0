#include<iostream>
using namespace std;

bool isEven(int num) {
    if (num % 2 == 0 ){
        return true;
    }

    return false;

}


int main(){ 
    
    int x = 77;

    if (isEven(77)) {
        cout<<"number even"<<endl;
    }else {
        cout<<"Odd"<<endl;
    }
}

/*
  11257 / 100 = 112 ... money = 7
  11257 % 100 = 
 arr[5] = [34532, 23523, 232, 353,  234];

*/