#include <iostream>

using namespace std;

int main()
{
    int n, k, m, b, sum = 0;
    cin >> n >> k >> m;
    b = (k+m)+1;
    int a[n];
    cin >> a[n];
    for(int i = 0; i < n; i++){
        if(a[i] <= b){
            a[i] = 0;
        }
    }
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    cout << sum - b;
    return 0;
}


