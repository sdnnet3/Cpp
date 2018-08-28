#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

 
using namespace std;

//argc, argv optional ability to pass in information from terminal

//argc is number of arguments passed in
//argv array that points to values or strings

int main(int argc, char** argv) {

	if(argc != 1){	
		std::cout << "you entered " << argc << " arguments\n";
}

	for(int i = 0; i < argc; ++i){
		std::cout << argv[i] << "\n";
	}
	
	return 0;
}