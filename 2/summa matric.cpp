#include <iostream>

using namespace std;

int main()
{   
    int N;
    cin >> N;
    int a[N][N];
    int d[N][N];
    int sum[N][N];
        for(int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
        	    cin >>a[i][j];
            }
        }
        for(int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
        	    cin >>d[i][j];
            }
        }
        for(int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
        	   sum[i][j] = a[i][j] + d[i][j];
            }
        }
        for(int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                cout << sum[i][j] << " ";
                if(j == N-1){
                    cout << endl;
                }
            }
        }
    return 0;
}

