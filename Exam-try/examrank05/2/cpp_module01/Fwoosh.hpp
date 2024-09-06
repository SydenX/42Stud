#ifndef FWOOSH
# define FWOOSH

#include <iostream>
#include "ASpell.hpp"

class Fwoosh: public ASpell {
	private:
	public:
		Fwoosh(const Fwoosh &ref);
		Fwoosh(std::string const &name, std::string const &effects);
		Fwoosh &operator=(const Fwoosh &ref);
		Fwoosh();
		~Fwoosh();
		virtual ASpell *clone() const;
};

#endif