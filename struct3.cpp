#include<iostream> 
using namespace std;

struct studentsRecord{
    int roll;
    string name;
    string bloodGroup;
    string hobby;
};

int main(){

    int x[10];
    string name;
    studentsRecord BUBTRecords[10];

        BUBTRecords[0].roll = 5;
        BUBTRecords[0].name = "Reza";
        BUBTRecords[0].bloodGroup = "O+";
        BUBTRecords[0].hobby = "hjsdhfjgs";
        
BUBTRecords[1].roll = 7;
BUBTRecords[1].name = "alif";

BUBTRecords[2].roll = 8;
BUBTRecords[2].name = "Smrity";
BUBTRecords[3].roll = 9;

BUBTRecords[3].name = "Tanvir";       
for (int i = 0; i < 10; i++)
{
    cin>>BUBTRecords[i].roll;
    cin>>BUBTRecords[i].name;
}


for (int i = 0; i < 4; i++)
{
    cout<<BUBTRecords[i].roll<< " "<<BUBTRecords[i].name<<endl;
}

}
