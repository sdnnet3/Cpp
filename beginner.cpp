#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>



using namespace std;

int main(){

	string sMiles;
	double dMiles, dKilometers;
	cout << "Enter Miles : ";
	getline(cin, sMiles);
	dMiles = stod(sMiles);
	dKilometers = dMiles * 1.60934;
	printf("%.1f miles equals %.4f kilometers\n",
		dMiles, dKilometers);
 //testass

 return 0;
}


