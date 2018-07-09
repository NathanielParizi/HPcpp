/*
 * HeadersPrototypes.cpp
 *
 *  Created on: Jul 9, 2018
 *      Author: Nathaniel-Joel Parizi
 */

//**********************************
// Naming conventions with preprocessor macros:
// <iostream> ">>" are normally used for items that are in a standard location. A location that
// the compiler will know about, some special locaiton on the disk.
// " doublequotes " will be used for files in the project.
// They can be used interchangably nevertheless.
//***************************************
//*****************************
//preprocessor directive
#include <iostream>  //used to be called iostream.h
#include "utils.h"   //preprocessor goes and finds this file and applies it to source code
#include "Cat.h"
//****************************

//The preprocessor looks for statements with these # symbols. We don't need ;  because they
//are statements that are separate from C++ statements of the source code for the compiler.
//They are statements to separate software that runs called the preprocessor which will run
//before compilation (transformation of text file into binary code).

using namespace std;

//void Run(); // This is the prototype (returns void)

void learn();  //prototype

int main() {

	run();
	run();

	learn();

	Cat cat;
	Cat schrodingersCat;

	cout << "****************" << endl;

	cat.speak();
	cat.jump();
	schrodingersCat.qubits();

	schrodingersCat.alive = false;
	schrodingersCat.speak();

	cout << endl << "opening the box! " << endl;
	schrodingersCat.openBox();

	if (schrodingersCat.alive) {

		cout << "Schordinger's cat is alive: " << schrodingersCat.alive << endl;
	}

	schrodingersCat.openBox();


	cout << endl << "**************" << endl;
	Cat felix;
	felix.speak();

	return 0;
}

//C++ prototypes

void run() {

	cout << "Running" << endl;
}

void learn() {

	cout << "Learning" << endl;

}

