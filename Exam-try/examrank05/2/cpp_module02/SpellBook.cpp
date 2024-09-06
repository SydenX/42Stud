#include "SpellBook.hpp"

SpellBook::SpellBook(){
}
SpellBook::~SpellBook(){
}

void SpellBook::learnSpell(ASpell *spell){
	for(int i = 0; i < (int)this->_spells.size(); i++){
		if (this->_spells[i] == spell)
			return;
	}
	this->_spells.push_back(spell);
}

void SpellBook::forgetSpell(const std::string &spell) {
	for(int i = 0; i < (int)this->_spells.size(); i++){
		if (this->_spells[i]->getName() == spell){
			this->_spells.erase(this->_spells.begin() + i);
			return;
		}
	}
}

ASpell *SpellBook::createSpell(const std::string &spell) {
	for(int i = 0; i < (int)this->_spells.size(); i++){
		if (this->_spells[i]->getName() == spell){
			return (this->_spells[i]->clone());
		}
	}
	return NULL;
}
