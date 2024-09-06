#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class Fwoosh: public ASpell {
	public:
		Fwoosh(Fwoosh const &);
		Fwoosh &operator=(Fwoosh const&);
		Fwoosh();
		Fwoosh(const std::string &name, const std::string &effect);
		virtual ~Fwoosh();
		virtual ASpell *clone() const;
};

#endif