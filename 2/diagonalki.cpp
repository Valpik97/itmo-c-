#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    int N, sum=0, sum2=0;
    cin >> N;
    vector<vector<int>> a = vector<vector<int>>(N);
    for(int i = 0; i < N; i++){
        a[i] = vector<int>(N);
        for (int j = 0; j < N; j++){
            cin >> a[i][j];
            }
        }
        for(int i = 0; i < N; i++){
            sum += a[i][i];
            sum2 += a[i][N-1-i];
        }
        std::cout << sum << " " << sum2;

    return 0;
}


