#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class Polymorph: public ASpell {
	public:
		Polymorph(Polymorph const &);
		Polymorph &operator=(Polymorph const&);
		Polymorph();
		Polymorph(const std::string &name, const std::string &effect);
		virtual ~Polymorph();
		virtual ASpell *clone() const;
};

#endif