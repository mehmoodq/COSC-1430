#include "nameObj.h"
using namespace std;


nameObj::nameObj() {

	name = "";
	score = 0;
}

nameObj::nameObj(string newname) {
	name = newname;
	computeScore();
}

nameObj::~nameObj() {


}


int nameObj::computeScore() {

	score = 0;
	for (int i = 0; i < name.size(); i++) {

		for (int count = 0; count < 26; count++) {
			if (name[i] == scorer[count]) {

				score = score + (count + 1);
			}

		}

	}

	cout << scorer[26];
	return score;
	
}

string nameObj::getName()
{

	return name;
}

int nameObj::getScore() {

	
	return score;
	
}

void nameObj::setScore(int _score) {
	score = _score;
}

void nameObj::setName(string _name) {

	name = _name;
}