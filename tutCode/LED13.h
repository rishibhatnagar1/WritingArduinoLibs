#ifndef LED13_H // enables the code to not include multiple header files. Only if it is not defined, it will be.
#define LED13_H

#include <WProgram.h> //It is very important to remember this! note that if you are using Arduino 1.0 IDE, change "WProgram.h" to "Arduino.h" 

class LED13 {
public:
	LED13(); //Constructor
	~LED13();//Destructor
	void on();
	void off();
	void blink(int time);
};
// IN C++ once can allocate memory manually. So when an object is created from a class, memory is allocated to the constructor. When the object is destroyed, the memory needs to be de-allocated, hence the constructor, destructor combo.
#endif
