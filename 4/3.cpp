#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    if(a.find(b) != string::npos){
        cout << "yes";
    }
    else{cout << "no";}
    return 0;
}
