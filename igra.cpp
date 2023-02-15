#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "windows.h"
#include <vector>
using namespace std;

char random_char(){
	int a = 0, n = 159 - 128;
	char b;
	srand(time(NULL) + rand());
	a = rand() % n + 128;
	b = (char)(a);
	return b;
}

void startgame(){
	string str;
	cout<<"Игра начнется через:" << endl;
	Sleep(1000);
	cout<<"3" << endl;
	Sleep(1000);
	cout<<"2" << endl;
	Sleep(1000);
	cout<<"1" << endl;
	Sleep(1000);
	cout<<"Игра началась!" << endl;
	Sleep(1000);
	vector<char> arr;
	arr.push_back(' ');
	for(int i = 0; i < 31; i++){
		arr.push_back(random_char());
		cout << "уровень " << i << endl;
		for(int i = 0; i < 64; i++){
			char chr = arr[rand() % (sizeof(arr) - 1)];
			str.push_back(chr);	
		}
		cout << str;
	}
}

void start(){
	int n, x = 63;
	string m;
	srand(time(NULL) + rand());
	cout<< "НАУЧИТЬСЯ ПЕЧАТАТЬ ВСЛЕПУЮ"<< endl << "МЕНЮ" << endl;
	cout << "нажмите:" << endl << "1) Чтобы начать тренировку" << endl; 
	cout << "2) Чтобы посмотреть таблицу лидеров" << endl << "3) Правила" << endl;
	cin >> n;
	if(n == 1){
		startgame();
	}
	else if (n == 3){
		cout << "Печатать только с капслоком. Это все правила"<< endl << "Для выхода ввести 1" << endl;
		cin >> n;
		if (n == 1)
			system("cls");
		
		start();
	}
}

int main(){
	setlocale( LC_ALL,"Russian" );
	start();
//	srand(time(NULL) + rand());
//	int chr = rand() %  5;
//	cout << chr;

}
