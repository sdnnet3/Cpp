#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
 
// Function Prototypes
using namespace std;

vector<string> StringToVector(string theString, 
        char separator);
 

int main() {
    
    // ----- 1. CONVERT STRING TO VECTOR -----
    // Create a function that receives a string and separator
    // and returns a string vector
    string sSentence = "This is a random string";
    
    // Create a vector
    vector<string> vec = StringToVector(sSentence, ' ');
    
    // Cycle through each index in the vector and print
    // out each word 
    for(int i = 0; i < vec.size(); ++i){
        cout << vec[i] << "\n";
    }

    return 0;
}

    vector<string> StringToVector(string theString,
    	char separator){
    	vector<string> vecWords;

    	stringstream ss(theString);
    	string sIndivStr;
    	while(getline(ss, sIndivStr, separator)){
    		vecWords.push_back(sIndivStr);
    	}
    	return vecWords;
}