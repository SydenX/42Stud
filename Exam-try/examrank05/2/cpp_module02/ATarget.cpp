#include "ATarget.hpp"

ATarget::ATarget(const std::string &type): _type(type) {
	
}

ATarget::ATarget(const ATarget &target){
	this->_type = target.getType();
}

ATarget &ATarget::operator=(const ATarget &target){
	if (&target != this){
		this->_type = target.getType();
	}
	return (*this);
}

ATarget::~ATarget(){
	
}

std::string const &ATarget::getType() const{
	return (this->_type);
}

void ATarget::getHitBySpell(const ASpell &spell) const {
	std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl;
}
