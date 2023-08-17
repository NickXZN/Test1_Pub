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

	int thr = 0;
	cin >> thr;

	cout << count(begin(v),end(v),2) << endl;
	cout << count_if(begin(v),end(v), Gt2) << endl;
	cout << count_if(begin(v),end(v), [thr](int i){
		if (i>thr){
			return true;
		}
		return false;
	});
	cout << endl;
	 return 0;
}
