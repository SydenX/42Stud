#include "ATarget.hpp"

ATarget::ATarget(){}
ATarget::ATarget(const std::string &type): _type(type){}

ATarget::~ATarget(){}

const std::string& ATarget::getType() const {
	return this->_type;
}

void ATarget::getHitBySpell(const ASpell &spell) const {
	std::cout << this->_type << " has been " << spell.getEffets() << "!" << std::endl;
}