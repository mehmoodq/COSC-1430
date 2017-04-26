
#ifndef NAMEOBJ_H
#define NAMEOBJ_H

#include <iostream>
using namespace std;


class nameObj
{
private:

	const char scorer[27] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	string name;
	int score;

public:

	nameObj();
	nameObj(string newname);
	~nameObj();
	int computeScore();
	int getScore();
	string getName();
	void setName(string _name);
	void setScore(int _score);

};



#endif