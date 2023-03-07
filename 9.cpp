#include <iostream>
using namespace std;
int main(){
 int A[3][3][3]={{{10,20,30},{40,50,60},{70,80,90}},
                {{11,22,33},{44,55,66},{77,88,99}},
                {{12,23,34},{45,56,67},{78,89,90}}};
 int i,j,k;
 cout<<"Printing a 3D Array is : \n";
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
     {
         for(k=0;k<3;k++)
         cout<<"A["<<i<<"]["<<j<<"]["<<k<<"] ="<<A[i][j][k]<<" ";
         cout<<endl;
    }
     cout<<endl;

 }
 cout<<endl;

 return 0;
}




