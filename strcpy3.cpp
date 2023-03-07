#include<iostream>
#include <cstring>
using namespace std;
int main(){
    char src[40];
    char dest[40];
    strcpy(src,"This is a sample line");
    strcpy(dest,"This is destination");
    strcpy(dest,src);
    cout<<"final copied string:"<<'\t'<<dest;

    return 0;

}

