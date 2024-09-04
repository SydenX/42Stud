#include "ASpell.hpp"

ASpell::ASpell(){}
ASpell::ASpell(const std::string &name, const std::string &effects): _name(name), _effects(effects){}

ASpell::~ASpell(){}

ASpell::ASpell(const ASpell &aspell){
	this->_name = aspell.getName();
	this->_effects = aspell.getEffets();
}

ASpell &ASpell::operator=(const ASpell &aspell){
	this->_name = aspell.getName();
	this->_effects = aspell.getEffets();
	return (*this);
}

const std::string& ASpell::getName() const {
	return this->_name;
}

const std::string& ASpell::getEffets() const {
	return this->_effects;
}

void ASpell::launch(const ATarget &target) const {
	target.getHitBySpell(*this);
}