#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
 
using namespace std;

int main() {

	std::vector<int> vecnRandNums(2);
	vecnRandNums[0] = 10;
	vecnRandNums[1] = 20;
	vecnRandNums.push_back(30);
	cout << "Last Index : " <<
		vecnRandNums[vecnRandNums.size() - 1] << "\n";

//string called sSentence
	string sSentence = "This is a random string";

//vector of strings called vecsWords
	std::vector<std::string> vecsWords;
//create a sting stream, recieves strings and can manipulate them
//reciece a string, spit out words sep by space, into a vec
	std::stringstream ss(sSentence);
//recieving string
	std::string sIndivStr;
//seperator
	char cSpace = ' ';

//as long as ss still has words to put into sIndivStr, it will execute
	while(getline(ss, sIndivStr, cSpace)){
		//pull it out of the words with vecwords, SindivStr is a temp container
		vecsWords.push_back(sIndivStr);
	}

	for(int i = 0; i < vecsWords.size(); ++i){
		std::cout << vecsWords[i] << "\n";
	}
	return 0;
}