#include<iostream>
#include<cctype>
using namespace std;
int main()
{
   int i;
   char str[80] ="This Is a Test";
   cout<<"Original string: "<<str<<"\n";
   for(i=0;str[i];i++)
   {
       if(isupper(str[i]))
        str[i]=tolower(str[i]);
       else if (islower(str[i]));
       str[i]=toupper(str[i]);
   }
   cout<<"Inverted-case string: "<<str;
    return 0;

}


