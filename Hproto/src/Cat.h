/*
 * Cat.h
 *
 *  Created on: Jul 9, 2018
 *      Author: Nathaniel Parizi
 */

#ifndef CAT_H_
#define CAT_H_

class Cat {
//instance variables
private:
	bool box = true;
public:
	bool alive;

	Cat();   //constructors don't have a return type

	//methods are functions within classes
	void speak();
	void jump();
	void qubits();
	void openBox();

};

#endif /* CAT_H_ */
