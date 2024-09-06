#ifndef POLYM
# define POLYM

#include <iostream>
#include "ASpell.hpp"

class Polymorph: public ASpell {
	private:
	public:
		Polymorph(const Polymorph &ref);
		Polymorph(std::string const &name, std::string const &effects);
		Polymorph &operator=(const Polymorph &ref);
		Polymorph();
		~Polymorph();
		virtual ASpell *clone() const;
};

#endif