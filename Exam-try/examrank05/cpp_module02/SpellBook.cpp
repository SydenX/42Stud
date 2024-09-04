#include "SpellBook.hpp"

SpellBook::SpellBook(){}
SpellBook::~SpellBook(){}

void SpellBook::learnSpell(ASpell* spell){
	for(int i = 0; i < (int)_spells.size(); i++){
		if (_spells[i] == spell)
			return;
	}
	_spells.push_back(spell->clone());
}

void SpellBook::forgetSpell(std::string spell){
	for(int i = 0; i < (int)_spells.size(); i++){
		if (_spells[i]->getName() == spell){
			ASpell *spell = _spells[i];
			_spells.erase(_spells.begin() + i);
			delete spell;
			return;
		}
	}
}

ASpell *SpellBook::createSpell(const std::string &spell){
	for(int i = 0; i < (int)_spells.size(); i++){
		if (_spells[i]->getName() == spell){
			return (_spells[i]->clone());
		}
	}
	return NULL;
}
