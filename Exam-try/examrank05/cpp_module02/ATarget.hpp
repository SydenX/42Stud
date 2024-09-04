#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>

class ASpell;

class ATarget {
	protected:
		std::string _type;
		ATarget();
		ATarget(ATarget const &);
		ATarget &operator=(ATarget const&);
	public:
		ATarget(const std::string &type);
		virtual ~ATarget();
		const std::string &getType() const;
		void getHitBySpell(const ASpell &spell) const ;

		virtual ATarget *clone() const = 0;
};

# include "ASpell.hpp"

#endif