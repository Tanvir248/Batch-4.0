#include<iostream>
using namespace std;

struct BubtStudents{
    string name;
    int id;
    string Blood;
    string hobby;
    string cgpa;
};

BubtStudents bubt(){
    int a = 10;
    BubtStudents reza;
    reza.name = "Reza";
    reza.Blood = "A+";
    reza.cgpa = "3.30";

    return reza;
}

int main(){ 

     bubt();
    cout<<bubt().cgpa<<endl;

}

/*
  11257 / 100 = 112 ... money = 7
  11257 % 100 = 
 arr[5] = [34532, 23523, 232, 353,  234];

*/