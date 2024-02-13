#pragma once
#include "pugixml.h"
#include <iostream>

class Workstation {
private:
	int building;
	int floor;
	int desc;


public:
	Workstation(int, int, int);

	static Workstation *parseWorkstation(pugi::xml_node);

	void printInfo();

	friend std::ostream& operator<<(std::ostream& os, const Workstation& workstation);

};

