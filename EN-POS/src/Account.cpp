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

Account::Account(string firstName, string lastName, string mailingAddress,
		string cityName, string stateCode, string emailAddress,
		string serviceProvider, int phoneNumber) {
	first = firstName;
	last = lastName;
	address = mailingAddress;
	city = cityName;
	state = stateCode;
	email = emailAddress;
	provider = serviceProvider;
	phone = phoneNumber;
}

Account::~Account() {
	screens.clear();
	engines.clear();
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

void Account::setPhone(int phone) {
	this->phone = phone;
}
