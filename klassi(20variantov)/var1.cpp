#include <iostream>
using namespace std;
class Student
{	
public:
	string name;
	int group;
	float ses[5];
};

int main(){
	int a = 0, sum = 0;
	Student stud1[10];
	
	for(int i = 0; i < 10; i++){
		cin >> stud1[i].name;
		cin >> stud1[i].group;
		for(int j = 0; j < 5; j++){
			cin >> stud1[i].ses[j];
		}
	}
 	for (int i = 0; i < 10; i++){
        for (int j = 0; j < 5; j++){
        	sum += stud1[i].ses[j]; 
        }
        if((sum / 5) >= 4.0){ 
            cout << stud1[i].name << "  -  "; 
            cout << "sredniy bal: " << sum / 5 << " ";
            cout << "grupa: " << stud1[i].group << endl;
        }  
        else {a++;}
        sum = 0;
	}
    if(a == 10){
    	cout << "takih net";
	}        
	return 0;
}