#include <iostream>

using namespace std;

int main()
{   
    int n;
    string m;
    cin >> n;
    if(n / 5 > 0){
    	for(int i = 0; i < n/5; i++){
    		m += 'V';
    	}
    }
    if(n%5 > 0){
    	for(int i=0; i< n%5; i++){
    		m+='I';
			}
        }
		cout << m;
    return 0;
}
