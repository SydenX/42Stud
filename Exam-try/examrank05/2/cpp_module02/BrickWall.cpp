#include "BrickWall.hpp"

BrickWall::BrickWall(): ATarget("Inconspicuous Red-brick Wall") {}
BrickWall::BrickWall(std::string const &type): ATarget(type){}

BrickWall::~BrickWall(){
	
}

BrickWall::BrickWall(const BrickWall &target):ATarget(target.getType()){}

BrickWall &BrickWall::operator=(const BrickWall &target){
	if (&target != this){
		this->_type = target.getType();
	}
	return (*this);
}

ATarget *BrickWall::clone() const {
	return (new BrickWall(*this));
}
