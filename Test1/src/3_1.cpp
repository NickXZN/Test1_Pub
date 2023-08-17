#include <set>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int Min(int a, int b){
	if(a < b){
		return a;
	}
	return b;
}

void Print(const vector<int>& v, const string& title){
	cout << title << ": ";
	for (auto i : v){
		cout << i << ' ';
	}
	cout << endl;
}

int main() {
	vector<int> v {
		1,5,4,5,2,3
	};

	string s1 = "abc";
	string s2 = "abc";
	 cout << min(s1,s2) << endl;

	 Print(v,"Init");
	 sort(begin(v),end(v));
	 Print(v,"Sort");
	 return 0;
}
