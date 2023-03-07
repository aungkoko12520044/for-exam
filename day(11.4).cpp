#include <iostream>
using namespace std;
int area(int x)
{
    return x*x;
}
int area(int l,int w)
{
    return l*w;
}
double area(double r){
return 3.14*r*r;
}
int main()
{ int x,l,w,r;
    cout<<"Enter of length of square: ";
    cin>>x;
    cout<<"Enter of length of rectangle: ";
    cin>>l;
    cout<<"Enter of width of rectangle: ";
    cin>>w;
    cout<<"Enter the radius of circle: ";
    cin>>r;
    cout<<endl<<"The area of square is "<<area(x)<<endl;
     cout<<endl<<"The area of rectangle is "<<area(l,w)<<endl;
      cout<<endl<<"The area of circle is "<<area(r)<<endl;
    return 0;
}
