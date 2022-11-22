#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream in ("D:\c++\ABC.txt");
	int sum = 1, max = 0;
	string str;
	while(getline(in, str)){
		for(int i = 0; i < str.size(); i++){
			if(str[i] == 'B' and str[i+1] == 'B'){
				sum += 1;
			}
			cout << sum;
			if(sum > max){
				max = sum;
			}
		}
	}
	cout << max;
	return 0;
}