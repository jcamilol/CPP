/*Write a C++ program to print
*
**
***
****
on screen.*/
#include <iostream>
int main(){
    int lim = 4;
    for(int jj=1; jj<=lim; jj++){
        for(int ii=1; ii<=jj; ii++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}
