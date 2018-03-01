/*
 * Screen.h
 *
 *  Created on: Feb 20, 2018
 *      Author: garrison
 */

#include <ctime>;
#include <chrono>;

#ifndef SCREEN_H_
#define SCREEN_H_

using namespace std;

class Screen {
public:
	Screen();
	Screen(int, int, int, string, string);
	virtual ~Screen();

	int getID();
	string getDate();
	int getHeight();
	int getWidth();
	string getMaterial();
	string getNotes();

	void overrideID(int);
	void overrideDate(string);
	void setHeight(int);
	void setWidth(int);
	void setMaterial(string);
	void setNotes(string);
	void appendNotes(string);

private:
	long int id;
	string date;
	int height;
	int width;
	string material;
	string notes;

};

#endif /* SCREEN_H_ */
