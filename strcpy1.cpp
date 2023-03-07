#include<iostream>
#include <cstring>
using namespace std;
int main(){
    char src[20] = "I am the source";
    char dest[30] ="I am the destination";
    cout << "dest[] before copy : "<<dest<<endl;

    strcpy(dest,src);
    cout<<"dest[] after copy: "<<dest;

    return 0;

}

