#ifndef BWALL
# define BWALL

#include <iostream>
#include "ATarget.hpp"

class BrickWall: public ATarget {
	public:
		BrickWall(const BrickWall &ref);
		BrickWall(std::string const &type);
		BrickWall &operator=(const BrickWall &ref);
		BrickWall();
		~BrickWall();
		virtual ATarget *clone() const;
};

#endif