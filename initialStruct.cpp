#include<iostream>
using namespace std;

struct BubtStudents{
    string name;
    int id;
    string Blood;
    string hobby;
    string cgpa;
};
int main(){ 

    int alif;
    
    string smrity;

    BubtStudents reza;

    reza.name = "Reza Mia";
    reza.id = 249;
    reza.Blood = "A+";
    reza.cgpa = "3.30";
    reza.hobby = "Sport";

    BubtStudents BUBTData[10];

    BUBTData[0].name = "Smrity";
    BUBTData[0].id = 120;


    BUBTData[1].name = "Pushpo";
    BUBTData[1].id = 133;

    BUBTData[2].name = "alif";
    BUBTData[2].id = 255;

    for (int i = 0; i < 3; i++)
    {
        cout<<BUBTData[i].name<<" "<<BUBTData[i].id<<endl;
    }
    

}

/*
  11257 / 100 = 112 ... money = 7
  11257 % 100 = 
 arr[5] = [34532, 23523, 232, 353,  234];

*/