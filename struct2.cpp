//vector
#include<iostream>
#include<vector>
using namespace std;
struct gfRecord {
   int id;
   string name;
   string gfNames[10];
  
};
int main(){
  int arr[10];
  gfRecord friendsRedcord[5];

  friendsRedcord[0].id = 2;
  friendsRedcord[0].name = "reza";
  friendsRedcord[0].gfNames[0] = "Sadia";
  friendsRedcord[0].gfNames[1] = "Rahima";
  friendsRedcord[0].gfNames[2] = "kulsum";
  friendsRedcord[0].gfNames[3] = "kohinur";
  friendsRedcord[0].gfNames[4] = "Fahima";

  friendsRedcord[1].id = 1;
  friendsRedcord[1].name = "alif";
  friendsRedcord[1].gfNames[0] = "khadija";
  friendsRedcord[1].gfNames[1] = "Nila";
  friendsRedcord[1].gfNames[2] = "mim";
  friendsRedcord[1].gfNames[3] = "shakila";
  friendsRedcord[1].gfNames[4] = "shapna";
cout<<"Printing Records: "<<endl;
  for (int i = 0; i < 2; i++)
  {
    cout<<friendsRedcord[i].id<<"\n"<<friendsRedcord[i].name<<endl;
    cout<<"Gf Records started from here: ";
    for (int j = 0; j < 5; j++)
    {
     cout<<friendsRedcord[i].gfNames[j]<<endl; 
    }
    
  }
  

}