

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	string sLine = "ABC";
	string year;
	string month;
	string day;

	//C:\\Users\\user\\eclipse-workspace\\Test1\\src
	ifstream input("C:\\Users\\user\\eclipse-workspace\\Test1\\src\\tst.txt");
	if (input.is_open()){
		getline(input, year, '-');
		getline(input, month, '-');
		getline(input, day, '-');
		cout << year << " " << month << " " << day << endl;
		cout << "done" << endl;
	}else{
		cout << "error" << endl;
	}
	//cin >> sLine;
	return 0;
}
