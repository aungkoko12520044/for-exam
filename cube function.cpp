#include<iostream>
using namespace std;

void box(int num1,int num2,int num3);
int main()
{
    box(6,6,6);
    box(7,7,7);
    return 0;
}
void box(int num1,int num2,int num3)
{
    cout<<"cube of box is : "<<num1*num2*num3<<"\n";
}
