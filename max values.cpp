#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>
#include <limits>

int g_iRandNum = 0;

const double PI = 3.14159;

int main(){

	bool bMarried = true;
	char chMyGrade = 'A';
	unsigned short int u16Age = 43;
	short int siWeight = 180;
	int nDays = 7;
	long lBigNum = 1100000;
	float fPi = 3.14159;
	double dBBigFloat = 1.11111111111111111111;
	long double ldPi = 3.14159;
	auto whatWillIBe = true;
	std::cout << "Min bool " <<
		std::numeric_limits<unsigned short int>::min() << "\n";
	std::cout << "Max bool " <<
		std::numeric_limits<unsigned short int>::max() << "\n";

	return 0;

 

}