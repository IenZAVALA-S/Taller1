#include "Event.h"

Event::Event(string id, string location, int length) {
	this->length = length; //this is used to indicate the hours the event will last
	this->id = id; // This variable indicates an identifier for each event
	this->location = location; //This indicates where the event will be held
	list<Attendant> attList; //The list contains all of the attendants to the event
}
void Event::addAttendant(Attendant att) {
	attList.push_back(att); //This function will add an attendant to it's event's attendant list
}
int Event::getNumOfAttendants() {
	return attList.size(); //Returns the number of total attendants for the event
}
string Event::getID() {
	return id; //Returns the identifier for the event
}