/*
 * Account.cpp
 *
 *  Created on: Feb 20, 2018
 *      Author: garrison
 */

#include "Account.h"

Account::Account() {
	first = nullptr;
	last = nullptr;
	address = nullptr;
	city = nullptr;
	state = nullptr;
	email = nullptr;
	provider = nullptr;
	phone = 0;
	screens = nullptr;
	engines = nullptr;
} //end default constructor Account()

Account::Account(string first, string last, string address, string city,
		string state, string email, string provider, int phone) {
	this->first = first;
	this->last = last;
	this->address = address;
	this->city = city;
	this->state = state;
	this->email = email;
	this->provider = provider;
	this->phone = phone;
	this->screens = screens;
	this->engines = engines;
}

Account::~Account() {
} //end deconstructor ~Account()




/*
 * All getters and setters are below
*/

string Account::getFirst() {
	return first;
}

string Account::getLast() {
	return last;
}

string Account::getAdd() {
	return address;
}

string Account::getCity() {
	return city;
}

string Account::getState() {
	return state;
}

string Account::getProv() {
	return provider;
}

int Account::getPhone() {
	return phone;
}

void Account::setFirst(string first) {
	this->first = first;
}

void Account::setLast(string last) {
	this->last = last;
}

void Account::setAdd(string address) {
	this->address = address;
}

void Account::setCity(string city) {
	this->city = city;
}

void Account::setState(string state) {
	this->state = state;
}

void Account::setProv(string provider) {
	this->provider = provider;
}
