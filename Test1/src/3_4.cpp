#include <set>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void ParityPrint(int x){
	string parity = (x%2 == 0) ? "even" : "odd";
	cout << x << " is " << parity << endl;
};

void PositivityPrint(int x){
	string positivity;
}

int main() {
	ParityPrint(5);

	 return 0;
}
