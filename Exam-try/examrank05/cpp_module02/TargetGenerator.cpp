#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}
TargetGenerator::~TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget* target){
	for(int i = 0; i < (int)_targets.size(); i++){
		if (_targets[i] == target)
			return;
	}
	_targets.push_back(target->clone());
}

void TargetGenerator::forgetTargetType(std::string target){
	for(int i = 0; i < (int)_targets.size(); i++){
		if (_targets[i]->getType() == target){
			ATarget *target = _targets[i];
			_targets.erase(_targets.begin() + i);
			delete target;
			return;
		}
	}
}

ATarget *TargetGenerator::createTarget(const std::string &target){
	for(int i = 0; i < (int)_targets.size(); i++){
		if (_targets[i]->getType() == target){
			return (_targets[i]->clone());
		}
	}
	return NULL;
}
