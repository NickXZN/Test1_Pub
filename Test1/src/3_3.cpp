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

bool Gt2(int x){
	if (x>2){
		return true;
	}
	return false;
}

int main() {
	vector<int> v {
		1,5,4,5,2,3 
	};

	Print(v, "Init");
	for (auto& i : v){ //Меняем V, не копируя ее
		++i;
	}
	Print(v,"Mod");

	 return 0;
}
