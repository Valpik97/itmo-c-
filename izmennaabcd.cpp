#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream in ("C:\\Users\\111040\\c++\\Tolstoy Leo. War and Peace - royallib.com.txt");
	ofstream out ("C:\\Users\\111040\\c++\\new1.txt");
	int a, cnum, rec;
	string str;
	while(getline(in, str)){
		for(int i = 0; i < str.size(); i++){
			out << char('A' + (int(str[i] + 255)) % 3);
		}
	}
}
