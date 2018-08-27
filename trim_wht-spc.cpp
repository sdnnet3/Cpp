#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
 
// Function Prototypes
using namespace std;

string TrimWhiteSpace(string theString);

int main() {

//create the string

	string aStr = "     Just a.  some random words.    ";
	aStr = TrimWhiteSpace(aStr);
	cout << "*" << aStr << "*\n";
	return 0;

}

//define white space characters
string TrimWhiteSpace(string theString){

//space, tab, form feed, newline, carrage return
	string whitespaces(" \t\f\n\r");
//find last instance that isn't one of the previous things
	theString.erase(theString.find_last_not_of(whitespaces) + 1);
	theString.erase(0, theString.find_first_not_of(whitespaces));
	return theString;
}