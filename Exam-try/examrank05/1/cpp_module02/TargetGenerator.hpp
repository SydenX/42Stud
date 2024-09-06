#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include <string>
# include <vector>
# include "ATarget.hpp"
# include "ASpell.hpp"

class TargetGenerator {
	private:
		std::vector<ATarget *> _targets;
		TargetGenerator &operator=(TargetGenerator const&);
		TargetGenerator(TargetGenerator const &);
	public:
		TargetGenerator();
		~TargetGenerator();
		void learnTargetType(ATarget *target);
		void forgetTargetType(std::string target);
		ATarget *createTarget(std::string const &target);
};

#endif