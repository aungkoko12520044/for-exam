#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int nums[10];
    int a,b,t;
    int n;
    n =10;
    for(t=0;t<n;t++) nums [t] =rand ();
    cout<<"Original array is: \n ";
    for(t=0;t<n;t++) {
        cout<<nums[t]<<' ';}
    cout<<'\n';

    for(a=1;a<n;a++)
        for(b=n-1;b>=a;b--)
    {
        if(nums[b-1]>nums[b]){
            t=nums[b-1];
        nums[b-1]=nums[b];
        nums[b]=t;} }

         cout<<"\nSorted array is: \n  ";
        for(t=0;t<n;t++){
            cout<<nums[t]<<' ';}
   return 0;
}
