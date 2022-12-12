#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char string[200];
    cin.getline(string, 200);
    
    char * pch = strtok(string, " "),
        * maxw = 0;
    
    int siz = strlen(pch);
    int maxsiz = 0;
    
    while(pch != NULL){
        siz = strlen(pch);
        if(maxsiz < siz){
            maxsiz = siz;
            maxw = pch;
        }
        pch = strtok(NULL, " ");
    }
    cout << maxw;
    
    return 0;
}




