#ifndef TGEN
# define TGEN

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class TargetGenerator {
	private:
		std::vector<ATarget *> _targets;
		TargetGenerator(const TargetGenerator &ref);
		TargetGenerator &operator=(const TargetGenerator &ref);
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget *target);
		void forgetTargetType(const std::string &target);
		ATarget *createTarget(const std::string &target);
};

#endif