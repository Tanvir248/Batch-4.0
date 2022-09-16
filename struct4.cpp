#include<iostream>
using namespace std;

struct dipDrive3{
    int id;
    string name;
    void printStrict(){
        cout<<id<<" "<<name<<endl;
    }
};


int main(){
    dipDrive3 x[5];
    x[0].id = 1;
    x[0].name ="Tanvir";

    x[1].id = 2;
    x[1].name ="Pushpo";
    
    x[2].id = 3;
    x[2].name ="Smrity";

    for (int i = 0; i < 3; i++)
    {
        x[i].printStrict();
    }
    
}