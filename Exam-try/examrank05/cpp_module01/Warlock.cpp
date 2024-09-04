#include "Warlock.hpp"

Warlock::Warlock(){}
Warlock::Warlock(const std::string &name, const std::string &title): _name(name), _title(title){
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(){
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName() const {
	return this->_name;
}

const std::string& Warlock::getTitle() const {
	return this->_title;
}

void Warlock::setTitle(const std::string &title){
	this->_title = title;
}

void Warlock::introduce() const{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell){
	for(int i = 0; i < (int)_spells.size(); i++){
		if (_spells[i] == spell)
			return;
	}
	_spells.push_back(spell);
}

void Warlock::forgetSpell(std::string spell){
	for(int i = 0; i < (int)_spells.size(); i++){
		if (_spells[i]->getName() == spell){
			_spells.erase(_spells.begin() + i);
			return;
		}
	}
}

void Warlock::launchSpell(std::string spell, const ATarget &target){
	for(int i = 0; i < (int)_spells.size(); i++){
		if (_spells[i]->getName() == spell){
			target.getHitBySpell(*_spells[i]);
			return;
		}
	}
}

