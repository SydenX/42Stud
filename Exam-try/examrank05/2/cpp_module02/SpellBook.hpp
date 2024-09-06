#ifndef BOOK
# define BOOK

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook {
	private:
		std::vector<ASpell *> _spells;
		SpellBook(const SpellBook &ref);
		SpellBook &operator=(const SpellBook &ref);
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell *spell);
		void forgetSpell(const std::string &spell);
		ASpell *createSpell(const std::string &spell);
};

#endif