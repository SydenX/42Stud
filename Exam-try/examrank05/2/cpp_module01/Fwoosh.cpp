#include "Fwoosh.hpp"

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed") {}
Fwoosh::Fwoosh(std::string const &name, std::string const &effects): ASpell(name, effects){}

Fwoosh::~Fwoosh(){
	
}

Fwoosh::Fwoosh(const Fwoosh &fwoosh): ASpell(fwoosh.getName(), fwoosh.getEffects()){}

Fwoosh &Fwoosh::operator=(const Fwoosh &fwoosh){
	if (&fwoosh != this){
		this->_name = fwoosh.getName();
		this->_effects = fwoosh.getEffects();
	}
	return (*this);
}


ASpell *Fwoosh::clone() const {
	return (new Fwoosh(*this));
}
