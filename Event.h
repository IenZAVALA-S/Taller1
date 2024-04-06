#pragma once
#include <iostream>
#include <list>
#include "Attendant.h"
using namespace std;

class Event
{
public:
	Event(string id, string location, int length);
	int getNumOfAttendants();
	string getID();
	void addAttendant(Attendant att);
private:
	int length;
	string id;
	string location;
	list<Attendant> attList;

};

