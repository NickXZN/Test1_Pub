#include <iostream>
#include <vector>

using namespace std;

int ComputeDist(const string& source, const string& destination){
	return source.length() - destination.length();
}

class Route {
public:
	Route(){
		source = "Moscow";
		destination  = "saint-Petersburg";
		UpdateLen();
	}
	Route(const string& new_source, const string& new_destination){
		source= new_source;
		destination = new_destination;
		UpdateLen();
	}
	~Route(){
		for (const string& entry : comp_dist_log){
			cout << entry << endl;
		}
	}

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
		comp_dist_log.push_back(
				source + " + " + destination);
	}
	string source;
	string destination;
	int lenght;
	vector<string> comp_dist_log;
};

void printRoute(const Route& route) {
	cout << route.GetDestination() << " - " <<
			route.GetSource() << "\n";
}

int main() {
	Route route("Moscow", "saint-Petersburg");
	route.SetSource("Vyborg");
	route.SetDestination("Vologda");
	 return 0;
}
