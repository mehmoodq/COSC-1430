#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include "nameObj.h"

using namespace std;

int main() 
{

	ifstream instream;
	instream.open("names.txt");

	if (instream.fail())
	{

		cout << "File failed to open." << endl;
		exit(1);
	}

	string nextLine;
	vector<nameObj> list;
	map <nameObj, int> nameScores;

	int finalScore;

	while (!(instream.eof())) {

		nextLine = instream.getline; 
		nameObj temp(nextLine);
		list.push_back(temp);
		nameScores[temp] = temp.computeScore();


	}

}
