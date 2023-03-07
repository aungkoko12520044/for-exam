#include<iostream>
using namespace std;
void square(int x,int y);
void cube(int x,int y,int z);
int main()
{
    square(10,10);
    cube(10,10,10);
    return 0;
}
void square(int x,int y)
{
    cout<<"square of box is : "<<x*y<<"\n";
}

void cube(int x,int y,int z)
{
    cout<<"cube of box is : "<<x*y*z;
}




