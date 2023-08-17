
#include <iostream>
#include <string>
#include <map>
#include <vector>


using namespace std;

void PrintMap(const map<string,int>& m){
	for (const auto& item :m){
		cout << item.first << ": " << item.second <<endl;
	}
}


int main() {
	 vector<string> words = {"one","two","three"};
	 map<char,vector<string>> grouped_words;
	 for (const string& word :words){
		 grouped_words[word[0]].push_back(word);
	 }

	 for (const auto& item : grouped_words){
		 cout << item.first << endl;
		 for (const string& word : item.second){
			 cout << word << " ";
		 }
		 cout << endl;
	 }

	 //PrintMap(counters);

	 return 0;
}
