#include <iostream>
using namespace std;
int main(){
 int A[4][2]={{10,11},{20,21},{30,31},{40,41}};
 int i,j;
 cout<<"Printing a 2D Array is : \n";
 for(i=0;i<4;i++)
 {
     for(j=0;j<2;j++)
     {
         cout<<"\t"<<A[i][j];
     }
     cout<<endl;

 }

 return 0;
}



