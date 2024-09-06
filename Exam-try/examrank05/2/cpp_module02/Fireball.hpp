#ifndef FIREBALL
# define FIREBALL

#include <iostream>
#include "ASpell.hpp"

class Fireball: public ASpell {
	private:
	public:
		Fireball(const Fireball &ref);
		Fireball(std::string const &name, std::string const &effects);
		Fireball &operator=(const Fireball &ref);
		Fireball();
		~Fireball();
		virtual ASpell *clone() const;
};

#endif