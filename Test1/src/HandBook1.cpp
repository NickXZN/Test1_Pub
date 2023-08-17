
#include <iostream>
#include <stdlib.h>
#include <cmath>
//using namesace std;

bool isTriange(long int a,long  int b,long  int c){
	if (a+b>=c and a+c>=b and b+c>=a){
		return true;
	}else{
		return false;
	};
};
long int max3(long int a, long int b, long int c){
	long int result = std::max(a,b);
	result = std::max(result,c);
	return result;
};

int main() {
	long int a=0;
	long int b=0;
	long int c=0;

	long int max_side=0;
	long int kat1=0;
	long int kat2=0;



	std::cin >> a;
	std::cin >> b;
	std::cin >> c;


	if (isTriange(a,b,c)){

		if (max3(a,b,c)==a){
			max_side=a;
			kat1=b;
			kat2=c;
		}
		else if (max3(a,b,c)==b){
			max_side=b;
			kat1=c;
			kat2=a;
		}
		else if (max3(a,b,c)==c){
			max_side=c;
			kat1=b;
			kat2=a;
		};
		long int leftSide=max_side*max_side;
		long int rightSide=kat1*kat1+kat2*kat2;
		if (leftSide==rightSide){
				std::cout << "YES";
		}
		else{
			std::cout << "NO";
		};

	}
	else {
		std::cout << "UNDEFINED";
	};
    return 0;
}
