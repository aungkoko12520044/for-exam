#include<iostream>
#include<cctype>
using namespace std;
int main()
{
   int i;
   char*p;
   char str[80] ="This Is a Test";
   cout<<"Original string: "<<str<<"\n";
   p=str;
   for(i=0;p[i];i++)
   {
       if(isupper(p[i]))
        p[i]=tolower(p[i]);
       else if (islower(p[i]));
       p[i]=toupper(p[i]);
   }
   cout<<"Inverted-case string: "<<str;
    return 0;

}



