#include<iostream>
using namespace std;
int sumNum(int);
int main(){
int n;
int sum;
cout<<"\n\n Recursion :calculate the sum of numbers from 1 to n:\n";
cout<<"...................................................\n";

cout<<"Input the last number of the range starting from 1: ";
cin>>n;
sum=sumNum(n);
cout<<"\n The sum of numbers fro, 1 to : "<<n<<" is "<<sum;
return(0);
}
int sumNum(int n)
{
    int result;
    if(n==1){
        return(1);
        }
        else
            {
          result=n+sumNum(n-1);
        }
        return(result);
    }








