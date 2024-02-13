#include "Workstation.h"

Workstation::Workstation(int building, int floor, int desc)
{
	this->building = building;
	this->floor = floor;
	this->desc = desc;
}

Workstation *Workstation::parseWorkstation(pugi::xml_node workStationNode)
{
	int b = workStationNode.attribute("Building").as_int();
	int f = workStationNode.attribute("Floor").as_int();
	int d = workStationNode.attribute("Desc").as_int();

	return new Workstation(b, f, d);
}

std::ostream &operator<<(std::ostream &os, const Workstation &workstation) {
    os << "building: " << workstation.building << " floor: " << workstation.floor << " desc: " << workstation.desc;
    return os;
}
