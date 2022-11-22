#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream in ("D:\\c++\\Tolstoy Leo. War and Peace - royallib.com.txt");
	ofstream out ("D:\\c++\\Новый текстовый документ.txt");
	int a, cnum, rec;
	string str;
	while(getline(in, str)){
		for(int i = 0; i < str.size(); i++){
			out << char('A' + (int(str[i] + 255)) % 4);
		}
	}
}                                     