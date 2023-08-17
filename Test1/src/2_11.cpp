#include <set>
#include <vector>
#include <iostream>

using namespace std;

void PrintSet(const set<string>& s){
	cout << s.size();
	for(auto x :s){
		cout << x << endl;
	}
}


int main() {
	 set<string> famous_persons;
	 famous_persons.insert("stroustrup");
	 famous_persons.insert("stroustrup");
	 //PrintSet(famous_persons);
	 famous_persons.erase("stroustrup");

	 //PrintSet(famous_persons);
	 set<string> month_names={"January","Feb","March","march"};
	 set<string>other_MONTH_NAMES  = {"Feb","January","March","march"};
	 //cout << (month_names == other_MONTH_NAMES) << endl;
	 //cout << month_names.count("January") << endl;

	 vector<string> v = {"a","b","c"};
	 set<string> s(begin(v), end(v));
	 PrintSet(s);
	 return 0;
}
