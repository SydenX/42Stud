#ifndef ATARGET
# define ATARGET

#include <iostream>

class ASpell;

class ATarget {
	protected:
		std::string _type;
	public:
		ATarget();
		ATarget(const ATarget &ref);
		ATarget &operator=(const ATarget &ref);
		ATarget(const std::string &type);
		virtual ~ATarget();
		std::string const &getType() const;
		virtual ATarget *clone() const = 0;
		void getHitBySpell(const ASpell &spell) const ;
};

#include "ASpell.hpp"

#endif