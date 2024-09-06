#ifndef WARLOCK
# define WARLOCK

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
	private:
		std::string _name;
		std::string _title;
		SpellBook _book;
		Warlock();
		Warlock(const Warlock &ref);
		Warlock &operator=(const Warlock &ref);
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(std::string const &title);
		void introduce() const;

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spell);
		void launchSpell(std::string spell, const ATarget &target);
};

#endif