#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <vector>

class ASpell;
class ATarget;

class Warlock {
	private:
		std::string _name;
		std::string _title;
		std::vector<ASpell *> _spells;

		Warlock();
		Warlock(Warlock const &);
		Warlock &operator=(Warlock const&);
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();
		const std::string &getName() const;
		const std::string &getTitle() const;
		void setTitle(const std::string &title);
		void introduce() const;
		void learnSpell(ASpell* spell);
		void forgetSpell(std::string spell);
		void launchSpell(std::string spell, const ATarget &target);
};

# include "ATarget.hpp"
# include "ASpell.hpp"

#endif