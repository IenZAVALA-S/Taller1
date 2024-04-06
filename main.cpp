#include <iostream>
#include <fstream>
#include <string>
#include "Event.h"
#include "Attendant.h"
#include <list>
using namespace std;
void openEventFile(); // This function is meant to open an event file and gather all the data within it
void menuEvent(list<Event> eventList); // This will give the users the options to modify the events and attendees

int main() {
	
	list<Event> eventList; //this list will contain all the events, from the file and ones added by users
	menuEvent(eventList);
	
}
void openEventFile(list<Event> eventList) {
	string fileline;
	ifstream file("Events.txt");
	while (getline(file, fileline)) {

	}

}
void menuEvent(list<Event> eventList) {
	int option;
	do {
		cout << "Select an option to proceed."<<endl;
		cout << "1) Create event.";
		cout << "2) Add attendee to event.";

		cin >> option;
		string id, 
			location;
		int length;

		switch (option) {
		case 1:
			//In this first option we'll ask the user to individually list the elements that will compose the new event

			cout << "Please insert Event data" << endl;

			cout << "Event iD: " << endl;
			cin >> id;
			cout << "Event's location: " << endl;
			cin >> location;

			cout << "Event's duration (in hours): " << endl;
			cin >> length;
			Event ev(id, location, length);
			eventList.push_back(ev);
			//After it's created, it gets added to the general list of events
			
			break;
		case 2:
			cout << "Input ID for the event. " << endl;
			cin >> id;
			for (int i = 0; i < eventList.size(); i++) {
				if (eventList[i].getID() == id) {
					cout << "Event found." << endl;

				}
			}

			break;
		default:
			cout << "Error";
		}
	} while (option != 5);
}