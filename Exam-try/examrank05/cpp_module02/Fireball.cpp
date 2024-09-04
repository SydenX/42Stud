#include "Fireball.hpp"

Fireball::Fireball(): ASpell("Fireball", "burnt to a crisp"){}
Fireball::Fireball(const std::string &name, const std::string &effects): ASpell(name, effects){
}

Fireball::~Fireball(){}

Fireball &Fireball::operator=(const Fireball&fw){
	if (this != &fw)
		*this = fw;
	return (*this);

}

Fireball::Fireball(const Fireball &fw): ASpell(fw.getName(), fw.getEffets()){}

ASpell *Fireball::clone() const {
	return (new Fireball(*this));
}
