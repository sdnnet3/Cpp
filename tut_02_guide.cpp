#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
 
 using namespace std;



int main() {

	string sAge = "0";
	int nGrade = 0;
	cout << "Enter Age : ";
	getline(cin, sAge);
	int nAge = stoi(sAge);

	if(nAge < 5){
		cout << "To young for school\n";

	} else if(nAge == 5){
		cout << "Go to Kindergarten\n";
	} else if((nAge > 5) && (nAge <= 17)){
		nGrade = nAge -5;
		cout << "Go to grade " << nGrade << "\n";
	} else {
		cout << "Go to college\n";
	}

	return 0;
}