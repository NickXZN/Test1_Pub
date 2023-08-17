#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	string sLine = "ABC";
	//C:\\Users\\user\\eclipse-workspace\\Test1\\src
	ifstream input("tst.txt");
	while(getline(input, sLine)){
		cout << sLine << endl;
	}

	cin >> sLine;
	return 0;
}

