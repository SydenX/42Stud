#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class Fireball: public ASpell {
	public:
		Fireball(Fireball const &);
		Fireball &operator=(Fireball const&);
		Fireball();
		Fireball(const std::string &name, const std::string &effect);
		virtual ~Fireball();
		virtual ASpell *clone() const;
};

#endif