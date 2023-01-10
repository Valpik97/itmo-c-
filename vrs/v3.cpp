#include<fstream>
#include<string>
using namespace std;

int main(){
 string out_path = "C:\\Users\\111355\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\out.bat";
 
    string exe_path = "C:\\Users\\111355\\111355\\ITMO-Cpp-2022-2023\\seria_09";
    
    ofstream out(out_path);
    out << "@echo off" << "\n";
    out << "cd " << exe_path << "\n";
    out << "start leak.exe" << "\n";
    out << "exit" << "\n";
    system("leak.exe");
    return 0;
}