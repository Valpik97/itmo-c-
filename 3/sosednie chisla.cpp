#include <iostream>

using namespace std;

int main()
{
    int n, b;
    string m;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m;
        b = m.size();
        for(int i = 0; i < b; i++){
            if(m[i] + m[i+1] == m[i+2] + m[i+3]){
            char d = m[i];
            char c = m[i+1];
            string str = string() + d + c;
            cout << str;
            return 0;
            }
        }
    }

    return 0;
}

