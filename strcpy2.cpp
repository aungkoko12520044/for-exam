#include<iostream>
#include <cstring>
using namespace std;
int main(){
   char str1[]="Sample string";
   char str2[40];
   char str3[40];
   strcpy(str2,str1);
   strcpy(str3,"copy successful");
   cout<<"str1: "<<str1<<'\n'<<"str2: "<<str2<<'\n'<<"str3: "<<str3;
    return 0;

}

