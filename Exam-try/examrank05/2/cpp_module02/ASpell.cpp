#include "ASpell.hpp"

ASpell::ASpell(const std::string &name, const std::string &effects): _name(name), _effects(effects) {
	
}

ASpell::ASpell(const ASpell &spell){
	this->_effects = spell.getEffects();
	this->_name = spell.getName();
}

ASpell &ASpell::operator=(const ASpell &spell){
	if (&spell != this){
		this->_effects = spell.getEffects();
		this->_name = spell.getName();
	}
	return (*this);
}

ASpell::~ASpell(){
	
}

std::string const &ASpell::getName() const{
	return (this->_name);
}
std::string const &ASpell::getEffects() const{
	return (this->_effects);
}

void ASpell::launch(const ATarget &target) const {
	target.getHitBySpell(*this);
}
