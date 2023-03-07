#include<iostream>
using namespace std;
int factr(int n);
int fact(int n);
int main()
{
    cout<<"6 factorial is "<<factr(6);
    cout<<'\n';
    cout<<"6 factorial is "<<fact(6);
    cout<<'\n';
    return 0;
}
  int factr(int n)
  {
      int answer;
      if(n==1) return(1);
      answer =factr(n-1)*n;
      return(answer);
  }

  int fact(int n)
  {
      int t, answer;
      answer=1;
      for(t=1;t<=n;t++)
        answer = answer*(t);
      return(answer);
  }





