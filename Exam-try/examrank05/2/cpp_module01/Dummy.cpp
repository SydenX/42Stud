#include "Dummy.hpp"

Dummy::Dummy(): ATarget("Target Practice Dummy") {}
Dummy::Dummy(std::string const &type): ATarget(type){}

Dummy::~Dummy(){
	
}

Dummy::Dummy(const Dummy &target):ATarget(target.getType()){}

Dummy &Dummy::operator=(const Dummy &target){
	if (&target != this){
		this->_type = target.getType();
	}
	return (*this);
}

ATarget *Dummy::clone() const {
	return (new Dummy(*this));
}
