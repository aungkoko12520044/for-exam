#include<iostream>
#include <cstring>
using namespace std;
int main(){
    char src[] = "A Rose";
    char dest[] = "This is Red";

    strcpy(dest,src);

    cout<<dest<<'\n';

    return 0;

}
