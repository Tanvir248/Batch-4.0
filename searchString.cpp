#include<iostream>
using namespace std;

int searchString(string a){
   int findIndex = 0;
   for (int i = 0; i < a.size(); i++)
   {
         if(a[i] == '&'){
            findIndex = i+1;
            break;
         }
   }

      return findIndex;
}
int main(){
   string s = "sjhdfj&ssdvseroncskfnd";

   int x = searchString(s);
  
   if (x != 0) {
      cout<<"find Element at "<<x<<endl;
   }else {
      cout<<"Item not found"<<endl;
   }

}