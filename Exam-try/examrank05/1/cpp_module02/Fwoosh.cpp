#include "Fwoosh.hpp"

Fwoosh::Fwoosh(): ASpell("Fwoosh", "fwooshed"){}
Fwoosh::Fwoosh(const std::string &name, const std::string &effects): ASpell(name, effects){
}

Fwoosh::~Fwoosh(){}

Fwoosh &Fwoosh::operator=(const Fwoosh&fw){
	if (this != &fw)
		*this = fw;
	return (*this);

}

Fwoosh::Fwoosh(const Fwoosh &fw): ASpell(fw.getName(), fw.getEffets()){}

ASpell *Fwoosh::clone() const {
	return (new Fwoosh(*this));
}
