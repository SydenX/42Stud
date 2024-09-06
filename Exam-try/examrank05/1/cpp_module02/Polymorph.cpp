#include "Polymorph.hpp"

Polymorph::Polymorph(): ASpell("Polymorph", "turned into a critter"){}
Polymorph::Polymorph(const std::string &name, const std::string &effects): ASpell(name, effects){
}

Polymorph::~Polymorph(){}

Polymorph &Polymorph::operator=(const Polymorph&fw){
	if (this != &fw)
		*this = fw;
	return (*this);

}

Polymorph::Polymorph(const Polymorph &fw): ASpell(fw.getName(), fw.getEffets()){}

ASpell *Polymorph::clone() const {
	return (new Polymorph(*this));
}
