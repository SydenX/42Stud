#include "Polymorph.hpp"

Polymorph::Polymorph(): ASpell("Polymorph", "turned into a critter") {}
Polymorph::Polymorph(std::string const &name, std::string const &effects): ASpell(name, effects){}

Polymorph::~Polymorph(){
	
}

Polymorph::Polymorph(const Polymorph &Polymorph): ASpell(Polymorph.getName(), Polymorph.getEffects()){}

Polymorph &Polymorph::operator=(const Polymorph &Polymorph){
	if (&Polymorph != this){
		this->_name = Polymorph.getName();
		this->_effects = Polymorph.getEffects();
	}
	return (*this);
}


ASpell *Polymorph::clone() const {
	return (new Polymorph(*this));
}
