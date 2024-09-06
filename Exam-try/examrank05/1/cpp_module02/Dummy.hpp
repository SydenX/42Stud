#ifndef DUMMY_HPP
# define DUMMY_HPP

# include <iostream>
# include <string>
# include "ATarget.hpp"

class Dummy: public ATarget {
	public:
		Dummy(Dummy const &);
		Dummy &operator=(Dummy const&);
		Dummy();
		Dummy(const std::string &type);
		virtual ~Dummy();
		virtual ATarget *clone() const;
};

#endif