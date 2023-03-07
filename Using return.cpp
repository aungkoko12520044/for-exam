#include<iostream>
using namespace std;

void f();
int main()
{
    cout<<"Before call\n";
    f();
    cout<<"After call\n";
}

void f()
{
    cout<<"Inside f()\n";
    return;
    cout<<"This won't display.\n";
}

