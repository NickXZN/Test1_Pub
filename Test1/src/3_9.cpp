#include <iostream>

using namespace std;

int ComputeDist(const string& source, const string& destination){
	return source.length() - destination.length();
}

class Route {
public:
	string GetSource() const {
		return source;
	}
	string GetDestination() const {
		return destination;
	}
	int GetLenght() const {
		return lenght;
	}
	void SetSource(const string& new_source){
		source = new_source;
		UpdateLen();
	}
	void SetDestination(const string& new_destination){
		destination = new_destination;
		UpdateLen();
	}

private:

	void UpdateLen(){
		lenght = ComputeDist(source,destination);
	}
	string source;
	string destination;
	int lenght;
};

void printRoute(const Route& route) {
	cout << route.GetDestination() << " - " <<
			route.GetSource() << "\n";
}

int main() {
	Route route;
	route.SetDestination("Vologda");
	route.SetSource("Moscow");
	printRoute(route);

	 return 0;
}
