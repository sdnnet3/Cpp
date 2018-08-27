#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
 
// Function Prototypes
using namespace std;


//create function prototype, i.e. and empty body function
//return vector from function that accepts a string and a separator

vector<string> StringToVector(string theString, char separator);




int main() {

return 0;

}

//create the fuction with body/method from line 15

vector<string> StringToVector(string theString, char separator){

	//create empty vector called vecsWords
	vector<string> vecsWords;

	//create a string stream type function called ss that accepts a var called theString
	//doesn't have IO operation, read and writes stream
	//code reuse, offline data formatting, etc
	//seperated by tabs, spaces, newlines as tokens.
	stringstream ss(theString);

	//create a string called sIndivStr
	string sIndivStr;

	//loop, while condition is True.
	//while geting input from getline,
	while(getline(ss, sIndivStr, separator)){

		vecsWords.push_back(sIndivStr);
	}

}