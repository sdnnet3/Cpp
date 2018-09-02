#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
 
using namespace std;

int main() {


	int arrnNums[10] = {1};

	int arrnNums2[] = {1,2,3};

	int arrnNums3[5] = {8,9};

	cout << "1st Value : " << arrnNums3[0] << "\n";
	arrnNums3[0] = 7;
	cout << "1st Value : " << arrnNums3[0] << "\n";

//how big is array? find total bytes of array
//divide by the size of one data point size
	cout << "Array size : " <<
			sizeof(arrnNums3) / sizeof(*arrnNums3) << "\n";

	int arrnNums4[2][2][2] = {{{1,2}, {3,4}},
	{{5,6}, {7,8}}};

	cout << arrnNums4[0][0][1] << "\n";


	return 0;
}