/*
 * Screen.cpp
 *
 *  Created on: Feb 20, 2018
 *      Author: garrison
 */

#include "Screen.h"

Screen::Screen() {
	id = 0;
	date = ctime(
			&(chrono::system_clock::to_time_t(chrono::system_clock::now())));
	height = nullptr;
	width = nullptr;
	material = nullptr;
	notes = nullptr;
}

Screen::Screen(int identifier, int h, int w, string mat, string note) {
	id = identifier;
	date = ctime(
			&(chrono::system_clock::to_time_t(chrono::system_clock::now())));
	height = h;
	width = w;
	material = mat;
	notes = note;
}

Screen::~Screen() {
}

/*
 * All getters and setters are below
 */

int Screen::getID() {
	return id;
}

string Screen::getDate() {
	return date;
}

int Screen::getHeight() {
	return height;
}

int Screen::getWidth() {
	return width;
}

string Screen::getMaterial() {
	return material;
}

string Screen::getNotes() {
	return notes;
}

void Screen::overrideID(int override) {
	id = override;
}

void Screen::overrideDate(string override) {
	date = override;
}

void Screen::setHeight(int h) {
	height = h;
}

void Screen::setWidth(int w) {
	width = w;
}

void Screen::setMaterial(string newMaterial) {
	material = newMaterial;
}

void Screen::setNotes(string newNotes) {
	notes = newNotes;
}

void Screen::appendNotes(string addition) {
	notes = notes + '\n' + addition;
}

