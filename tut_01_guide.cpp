#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
 



int main() {

	std::string sMiles;
	double dMiles, dKilometers;
	std::cout << "Enter miles : ";
	getline(std::cin, sMiles);

	//string into a double
	dMiles = std::stod(sMiles);
	dKilometers = dMiles * 1.60934;

	printf("%.1f miles equals %.4f dKilometers\n",
		dMiles, dKilometers);


	return 0;

}