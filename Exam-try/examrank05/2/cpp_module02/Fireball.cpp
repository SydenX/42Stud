#include "Fireball.hpp"

Fireball::Fireball(): ASpell("Fireball", "burnt to a crisp") {}
Fireball::Fireball(std::string const &name, std::string const &effects): ASpell(name, effects){}

Fireball::~Fireball(){
	
}

Fireball::Fireball(const Fireball &Fireball): ASpell(Fireball.getName(), Fireball.getEffects()){}

Fireball &Fireball::operator=(const Fireball &Fireball){
	if (&Fireball != this){
		this->_name = Fireball.getName();
		this->_effects = Fireball.getEffects();
	}
	return (*this);
}


ASpell *Fireball::clone() const {
	return (new Fireball(*this));
}
