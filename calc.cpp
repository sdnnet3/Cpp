#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
 


	std::string sString = "0";
	std::vector<std::string> vecString;

int main() {
	// enter calc
	// 5 + 7 = 12
	// Enter only + , - , / , * 

	// need to set data, number and types

// ask for calculation
	std::cout << "Enter Calculation : ";

//gather input in string form
	getline(std::cin, sString);

// work string stream prototype
	std::stringstream ss(sString);

//create temp string
	std::string sIndivStr;

//account for spaces in strings
	std:char cSpace = ' ';

//process input string
	while(getline(ss, sIndivStr, cSpace)){
		vecString.push_back(sIndivStr);
	}

	double dbNum1 = 0;
	dbNum1 = stoi(vecString[0]);
	double dbNum2 = 0;
	dbNum2 = stoi(vecString[2]);
	char opperator = ' ';





	return 0;
}