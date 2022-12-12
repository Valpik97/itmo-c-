#include <iostream>

using namespace std;
 
int main()
{
    int n, a, b, sum = 0;
    cin >> n;
    int m[n];
    for(int i = 0; i<n; i++){
    	cin >> m[i], ' ';
	}
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(m[i] == 1 and (b - a) > 0){
            sum += (b - a);
        }
    }
    cout << sum;
    return 0;
}

//5
//0 1 0 1 0
//80000 81000
//80500 81500 
//81500 81000
//80500 80000
//80000 81800
