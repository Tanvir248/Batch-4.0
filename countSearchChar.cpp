#include<iostream>
using namespace std;

int searchString(string a){
   int cntA = 0;
   for (int i = 0; i < a.size(); i++)
   {
         if(a[i] == 'a' || a[i] == 'A'){
            cntA++;
         }
   }

      return cntA;
}
int main(){
   string s = "sefhisApklfsfkakfjskfafsaaeijaAr";

   cout<<searchString(s)<<endl;
  
}