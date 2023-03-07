#include<iostream>
using namespace std;
bool isEven(int num){
  if(!(num%2))return true;
  return false;
}
int main()
{  int num;
     cout<<"Enter Number: ";
    cin>>num;
    if(isEven(num))
                  cout<<num<< " is even\n";
    if(!isEven(num))
                  cout<<"This won't display";
    return 0;
}






