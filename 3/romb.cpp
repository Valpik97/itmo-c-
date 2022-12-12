#include <iostream>
using namespace std;
int main()
{
    int n, a, b, d, k;
    cin >> n;
    cin >> a;
    cin >> b;
    k = n/2 + 1;
    d = abs(a - k) + abs(b - k); 
    for(int x = 0; x < n; x++){
        for(int y = 0; y < n; y++){
            if(d <= a and d <= b){
                cout << "*";
            }
            else {
                cout << ".";
            }
       }
        cout << endl;
    }
    return 0;
}

