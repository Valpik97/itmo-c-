//sortirovka
#include <iostream>

using namespace std;

int main()
{
    int n;
    int* a;
    cin >> n;
    for(int i = 0; i  < n; i++){
        cin >> a[i];
    }
    for(int i = 0 i < n; i++){
        for(int j = i+1; j< n;j++){
            if(a[i]> a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << array;
    return 0;
}

