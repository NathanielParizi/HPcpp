/*
 * Cat.cpp
 *
 *  Created on: Jul 9, 2018
 *      Author: Nathaniel-Joel Parizi
 */

#include <iostream>  // allows insertion operations and extraction operations
#include "Cat.h"
using namespace std;

Cat::Cat() {

	cout << "Cat created!" << endl;

	alive = true;

}

void Cat::speak() {

	cout << "Meow!" << endl;



}

void Cat::jump() {

	cout << "Jumping on top of book shelf" << endl;

}

void Cat::qubits() {

	cout << "Schrodinger's cat is alive or dead in this box" << endl;
}

void Cat::openBox() {

	box = true;
	if (box) {
		alive = true;
	}

	if (alive) {

			cout << "Schordinger's cat might be alive!" << endl;

		} else {
			cout << "Schrodinger's cat might be dead" << endl;
		}

}

