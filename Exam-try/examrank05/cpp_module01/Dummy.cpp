#include "Dummy.hpp"

Dummy::Dummy(): ATarget("Target Practice Dummy"){}
Dummy::Dummy(const std::string &type): ATarget(type){}
Dummy::~Dummy(){}

Dummy &Dummy::operator=(const Dummy&fw){
	if (this != &fw)
		*this = fw;
	return (*this);
}

Dummy::Dummy(const Dummy &fw):ATarget(fw.getType()){}

ATarget *Dummy::clone() const {
	return (new Dummy(*this));
}
