
#include <iostream>
#include <string>
#include <map>


using namespace std;

void PrintMap(const map<int,string>& m){
	cout << "Size = " << m.size() <<endl;;
	for (auto item :m){
		cout << item.first << ": " << item.second <<endl;
	}
}


int main() {
	 map<int,string> events;
	 events[1950] = "Bjarne Straustrup's birth";
 	 events[1941]="dennis Rich's birth";
	 PrintMap(events);

	 cout << events[1950];

	 events.erase(1950);
	 PrintMap(events);

	 //BuildReversedEvents(events);

	 PrintReversedMap(BuildReversedMap(events));

	 return 0;
}
