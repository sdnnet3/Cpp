#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
 
// Function Prototypes
using namespace std;

//return string from a function called vectortostring
//accepts a vector of strings as a reference operator to pass a vector inside
//otherwise just the address of the vector will be passed in
string VectorToString(vector<string>& vec, char separator);


int main() {
	vector<string> vCusts(3);
	vCusts[0] = "Bob";
	vCusts[1] = "Sue";
	vCusts[2] = "Tom";

	string sCusts = VectorToString(vCusts, ' ');
	cout << sCusts << "\n";

return 0;

}

//use the function prototype here
	string VectorToString(vector<string>& vec, char separator){

//create an empty string
		string theString = "";

//cycle through all items in passed vector cust [customers]
		for(auto cust : vec)
			theString += cust + separator;

		return theString;
	}