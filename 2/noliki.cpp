#include <iostream>

using namespace std;

int main()
{   
    int N, m;
    cin >> N >> m;
    int a[N][m];
        for(int i = 0; i < N; i++){
            for (int j = 0; j < m; j++){
        	    cin >>a[i][j];
            }
        }
        for(int i = 0; i < N; i++){
            for (int j = 0; j < m; j++){
                if(a[i][j] == 0){
        	        cout << i << " " << j;
        	    }
            }
        }
    return 0;
}

