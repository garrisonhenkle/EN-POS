/*
 * Account.h
 *
 *  Created on: Feb 20, 2018
 *      Author: garrison
 */

#include <string>;
#include <vector>;
#include "Screen.cpp";
#include "Engine.cpp";

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

using namespace std;

class Account {
public:

	Account();
	Account(string, string, string, string, string, string, string, int);
	virtual ~Account();

	void addEngine();
	void removeEngine();
	void addScreen();
	void removeScreen();

	string getFirst();
	string getLast();
	string getAdd();
	string getCity();
	string getState();
	string getEmail();
	string getProv();
	int getPhone();

	void setFirst(string);
	void setLast(string);
	void setAdd(string);
	void setCity(string);
	void setState(string);
	void setProv(string);
	void setPhone(int);
private:
	string first;
	string last;
	string address;
	string city;
	string state;
	string email;
	string provider;
	int phone;
	vector<Screen> screens;
	vector<Engine> engines;

};

#endif /* ACCOUNT_H_ */
