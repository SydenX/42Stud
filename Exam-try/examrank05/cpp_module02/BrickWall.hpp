#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include <iostream>
# include <string>
# include "ATarget.hpp"

class BrickWall: public ATarget {
	public:
		BrickWall(BrickWall const &);
		BrickWall &operator=(BrickWall const&);
		BrickWall();
		BrickWall(const std::string &type);
		virtual ~BrickWall();
		virtual ATarget *clone() const;
};

#endif