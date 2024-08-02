#include "solution.hpp"

using namespace std;

int main(){

	Solution solution;
	vector<int> temperatures={73,74,75,71,69,72,76,73};
	vector<int> output=solution.dailyTemperatures(temperatures);
	for(int i=0; i<output.size(); i++){
		cout<<output[i]<<"-->";
	}

	return 0;
}