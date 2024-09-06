#ifndef DUMMY
# define DUMMY

#include <iostream>
#include "ATarget.hpp"

class Dummy: public ATarget {
	public:
		Dummy(const Dummy &ref);
		Dummy(std::string const &type);
		Dummy &operator=(const Dummy &ref);
		Dummy();
		~Dummy();
		virtual ATarget *clone() const;
};

#endif