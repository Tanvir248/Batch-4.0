
//time conversion

#include<iostream>
using namespace std;

int main(){
string hrArr;
string minArr;
string secArr;
string ampmArr;
string str = "07:10:45PM"; 
   hrArr.push_back(str[0]);
   hrArr.push_back(str[1]);
   //cout<<hrArr<<endl;

   minArr.push_back(str[3]);
   minArr.push_back(str[4]);
   //cout<<minArr<<endl;
   
   secArr.push_back(str[6]);
   secArr.push_back(str[7]);
   //cout<<secArr<<endl;
   
   ampmArr.push_back(str[8]);
   ampmArr.push_back(str[9]);

   //cout<<ampmArr<<endl;
   int x = stoi(hrArr);
    
   if(x<12 && ampmArr == "PM") {
      cout<<x+12<<":"<<minArr<<":"<<secArr<<ampmArr<<endl; 
   }
   if(x<=12 && ampmArr =="AM"){
      cout<<x%12<<":"<<minArr<<":"<<secArr<<ampmArr<<endl; 
   }
}