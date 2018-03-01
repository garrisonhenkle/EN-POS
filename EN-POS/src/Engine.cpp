/*
 * Engine.cpp
 *
 *  Created on: Feb 20, 2018
 *      Author: garrison
 */

#include "Engine.h"

Engine::Engine() {
	id = 0;
	date = ctime(
			&(chrono::system_clock::to_time_t(chrono::system_clock::now())));
	model = nullptr;
	serial = nullptr;
	repair = nullptr;
	notes = nullptr;
}

Engine::Engine(int id, string model, int serial, string repair, string notes) {
	this->id = id;
	date = ctime(
			&(chrono::system_clock::to_time_t(chrono::system_clock::now())));
	this->model = model;
	this->serial = serial;
	this->repair = repair;
	this->notes = notes;
}

Engine::~Engine() {
}

/*
 * All getters and setters are below
 */

int Engine::getID(){
	return id;
}

string Engine::getDate(){
	return date;
}

string Engine::getModel(){
	return model;
}

int Engine::getSerial(){
	return serial;
}

string Engine::getRepair(){
	return repair;
}

string Engine::getNotes(){
	return notes;
}

void Engine::overrideID(int id){
	this->id = id;
}

void Engine::overrideDate(string date){
	this->date = date;
}

void Engine::setModel(string model){
	this-> model = model;
}

void Engine::setSerial(int serial){
	this->serial = serial;
}

