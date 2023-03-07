#include<iostream>
#include <cstring>
using namespace std;
int main(){
   char str1[]="Hello World!";
   char str2[]="Hello World!";
   int result=strcmp(str1,str2);
   if(result==0)
    cout<<"Strings are equal"<<'\n';
   else
    cout<<"strings are unequal"<<'\n';
   cout<<"Values returned by strcmp is : "<<result;
    return 0;

}

