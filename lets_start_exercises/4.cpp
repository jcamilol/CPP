/*Print the following pattern on the screen
****
***
**
*
**
***
**** */
#include <iostream>
int main(){
    int lim = 4;
    for(int jj=lim; jj>=1; jj--){
        for(int ii=1; ii<=jj; ii++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    for(int jj=2; jj<=lim; jj++){
        for(int ii=1; ii<=jj; ii++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}
