#include <iostream>

using namespace std;

int main()
{   
    int N;
    cin >> N;
    int a[N][N];
        for(int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
        	    cin >> a[i][j];
            }
        }
        for(int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                cin >> b;
                a[i][j] = a[i][j] + b;
            }
        }
        for(int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                cout << a[i][j] << " ";
                if(j == N-1){
                    cout << endl;
                }
            }
        }
    return 0;
}
