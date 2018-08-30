#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
 

int main() {

 //if age == 5, go to kindergarten
	//6-17 , 1-12
	// > 17 college

	std::string sAge = 0;
	int nGrade = 0;
	std::cout << "Enter Age : ";
	getline(std::cin, sAge);
	int nAge = std::stoi(sAge);

	if(nAge < 5)
		std::cout << "To young for school\n";
	else if(nAge == 5)
		std::cout << "Go to kindergarten\n";
	else if((nAge > 5) && (nAge <= 17)){
		nGrade = nAge - 5;
		std::cout << "Go the the " << nGrade << "grade.\n";
	} else {
		std::cout << "Go to college\n";
	}
	return 0;
}