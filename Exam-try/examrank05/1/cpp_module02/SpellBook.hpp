#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <string>
# include <vector>
# include "ATarget.hpp"
# include "ASpell.hpp"

class SpellBook {
	private:
		std::vector<ASpell *> _spells;
		SpellBook &operator=(SpellBook const&);
		SpellBook(SpellBook const &);
	public:
		SpellBook();
		~SpellBook();
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string spell);
		ASpell *createSpell(std::string const &spell);
};

#endif