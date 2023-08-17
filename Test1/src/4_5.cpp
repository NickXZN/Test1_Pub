

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	string sLine = "ABC";
	//C:\\Users\\user\\eclipse-workspace\\Test1\\src
	ifstream input("C:\\Users\\user\\eclipse-workspace\\Test1\\src\\tst.txt");
	if (input.is_open()){
		while(getline(input, sLine)){
			cout << sLine << endl;
		}
		cout << "done" << endl;
	}else{
		cout << "error" << endl;
	}
	//cin >> sLine;
	return 0;
}
