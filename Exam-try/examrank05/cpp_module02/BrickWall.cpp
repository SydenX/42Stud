#include "BrickWall.hpp"

BrickWall::BrickWall(): ATarget("Inconspicuous Red-brick Wall"){}
BrickWall::BrickWall(const std::string &type): ATarget(type){}
BrickWall::~BrickWall(){}

BrickWall &BrickWall::operator=(const BrickWall&fw){
	if (this != &fw)
		*this = fw;
	return (*this);
}

BrickWall::BrickWall(const BrickWall &fw):ATarget(fw.getType()){}

ATarget *BrickWall::clone() const {
	return (new BrickWall(*this));
}
