#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
 

float miles;
float kilometers;


int main() {

std::cout << "Enter Miles: ";
std::cin >> miles;

kilometers = miles * 1.60934;	
std::cout << kilometers << "\n";

//convert miles to km
//km = mi * 1.60934
//Enter Miles: 5
//5 miles = 8.0467 km


	return 0;

}