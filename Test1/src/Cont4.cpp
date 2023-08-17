#include<iostream>
#include<algorithm>

using namespace std;

int minNotZero(const int& arr){
	 int min;
	 for(int i =0; i<arr.size(); ++i){

	 }
}


int main(){
	int magicPower[3];
	int magicPowerUpdated[3];
	int magicPowerUpdatedSign;
	int WhitchSearchCount = 0;
	int Step;
	int StepID;




	//cin >> magicPower[0] >> magicPower[1] >> magicPower[2] ;
	magicPower[0]=2;
	magicPower[1]=6;
	magicPower[2]=5;

	for (int i=0; i<=2; ++i){
		WhitchSearchCount = 0;
		for (int j=0; j<=2; ++j){
			magicPowerUpdated[j] = magicPower[j]-magicPower[i];
			if (magicPowerUpdated[j] > 0) {
				++magicPowerUpdatedSign;
			}else if (magicPowerUpdated[j] < 0){
				--magicPowerUpdatedSign;
			}
			if (i!=j and magicPower[j]+magicPowerUpdated[j]!= magicPower[i]){
				++WhitchSearchCount;
			};

		}
		if (magicPowerUpdatedSign==0){		//если это среднее значение, не мин и не макс
			Step=0;
		}else{
			minElement=magicPowerUpdated[0];
			for (int curr : magicPowerUpdated){
				if (curr < minElement and curr!=0){minElement=curr};
			};

			StepID = *min_element(begin(magicPowerUpdated), end(magicPowerUpdated));
			Step = magicPowerUpdated[StepID];
		};


		cout << Step << " " << WhitchSearchCount << endl;
	}

	return 0;
}
