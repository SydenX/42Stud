#ifndef WARLOCK
# define WARLOCK

#include <iostream>

class Warlock {
	private:
		std::string _name;
		std::string _title;
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
};

#endif