/*
 * Engine.h
 *
 *  Created on: Feb 20, 2018
 *      Author: garrison
 */

#ifndef ENGINE_H_
#define ENGINE_H_

using namespace std;

class Engine {
public:
	Engine();
	Engine(int, string, int, string, string);
	virtual ~Engine();

	int getID();
	string getDate();
	string getModel();
	int getSerial();
	string getRepair();
	string getNotes();

	void overrideID(int);
	void overrideDate(string);
	void setModel(string);
	void setSerial(int);
	void setRepair(string);
	void setNotes(string);
	void appendNotes(string);
private:
	int id;
	string date;
	string model;
	int serial;
	string repair;
	string notes;
};

#endif /* ENGINE_H_ */
