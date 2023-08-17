#include <set>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int differ(int a, int b);

void qwe2(const vector<int>& v, const string& title){
	cout << title << ": ";
	for (auto i : v){
		cout << i << ' ';
	}
	cout << endl;
}

int main(){
	vector<int> v {
			1,5,4,5,2,3
		};

		2(v, "Init");
		for (auto& i : v){ //Меняем V, не копируя ее
			++i;
		}
		2(v,"Mod");

}

int differ(int a, int b){
	return a-b;
};

