#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {
}
TargetGenerator::~TargetGenerator(){
}

void TargetGenerator::learnTargetType(ATarget *target){
	for(int i = 0; i < (int)this->_targets.size(); i++){
		if (this->_targets[i] == target)
			return;
	}
	this->_targets.push_back(target);
}

void TargetGenerator::forgetTargetType(const std::string &target) {
	for(int i = 0; i < (int)this->_targets.size(); i++){
		if (this->_targets[i]->getType() == target){
			this->_targets.erase(this->_targets.begin() + i);
			return;
		}
	}
}

ATarget *TargetGenerator::createTarget(const std::string &target) {
	for(int i = 0; i < (int)this->_targets.size(); i++){
		if (this->_targets[i]->getType() == target){
			return (this->_targets[i]->clone());
		}
	}
	return NULL;
}
