#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    int b = 0, c, siz, n;
    getline(cin, a);
    siz = a.length();
    n = siz / 2;
    c = siz;
    while(b < c){
        if(a[b] == a[c]){
            b += 1;
            c -= 1;
        }
		else if(a[b] == ' '){
			b+= 1;
		}
		else if(a[c] == ' '){
			c-=1;
    	}
    	else{cout << "no";
    	return 0;
    	}
	}
	cout << 'yes';
	return 0;
}

