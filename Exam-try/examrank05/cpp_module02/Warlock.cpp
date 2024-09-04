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
	_book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string spell){
	_book.forgetSpell(spell);
}

void Warlock::launchSpell(std::string spell, const ATarget &target){
	ASpell *rspell = _book.createSpell(spell);
	if (rspell != NULL)
		target.getHitBySpell(*rspell);
}

