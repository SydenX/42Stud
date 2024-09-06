#ifndef ASPELL
# define ASPELL

#include <iostream>

class ATarget;

class ASpell {
	protected:
		std::string _name;
		std::string _effects;
	public:
		ASpell();
		ASpell(const ASpell &ref);
		ASpell &operator=(const ASpell &ref);
		ASpell(const std::string &name, const std::string &effects);
		virtual ~ASpell();
		std::string const &getName() const;
		std::string const &getEffects() const;
		virtual ASpell *clone() const = 0;
		void launch(const ATarget &target) const ;
};

#include "ATarget.hpp"

#endif