#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>

class ATarget;

class ASpell {
	protected:
		std::string _name;
		std::string _effects;
	public:
		ASpell(const std::string &name, const std::string &effect);
		ASpell();
		ASpell(ASpell const &);
		ASpell &operator=(ASpell const&);
		virtual ~ASpell();

		const std::string &getName() const;
		const std::string &getEffets() const;
		void launch(const ATarget &target) const ;

		virtual ASpell *clone() const = 0;
};

#include "ATarget.hpp"

#endif