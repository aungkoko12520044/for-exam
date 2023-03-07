#include<iostream>
using namespace std;
bool isEven(int num){
  if(!(num%2))return true;
  return false;
}
int main()
{
    if(isEven(4))
                  cout<<"4 is even\n";
    if(isEven(3))
                  cout<<"This won't display";
    return 0;
}





