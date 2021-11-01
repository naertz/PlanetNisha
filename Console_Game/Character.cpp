#include "Character.h"

// Character Class =============================================================================================
// Constructor(s) ----------------------------------------------------------------------------------------------
// Default
Character::Character() {
	this->characterName = {"", ""};
	this->title = "";
	this->healthValue = 100;
}

// Name Only
Character::Character(std::string firstName, std::string lastName) {
	this->characterName = {firstName, lastName};
	this->title = "";
	this->healthValue = 100;
}

// Main
Character::Character(std::string firstName, std::string lastName, std::string title, unsigned int healthValue) {
	this->characterName = {firstName, lastName};
	this->title = title;
	this->healthValue = healthValue;
}
// -------------------------------------------------------------------------------------------------------------

// Mutator(s) --------------------------------------------
// First Name
void Character::setFirstName(std::string firstName) {
	this->characterName.firstName = firstName;
}

// Last Name
void Character::setLastName(std::string lastName) {
	this->characterName.lastName = lastName;
}

// Title
void Character::setTitle(std::string title) {
	this->title = title;
}

// Health Value
void Character::setHealthValue(unsigned int healthValue) {
	this->healthValue = healthValue;
}
// -------------------------------------------------------

// Accessor(s) ---------------------------------
// First Name
std::string Character::getFirstName() const {
	return characterName.firstName;
}
// Last Name
std::string Character::getLastName() const {
	return characterName.lastName;
}

// Title
std::string Character::getTitle() const {
	return title;
}

// Health Value
unsigned int Character::getHealthValue() const {
	return healthValue;
}
// ---------------------------------------------

// Function(s) -----------------------------------
// Health Loss Calculator
void Character::loseHealth(unsigned int damage) {
	this->healthValue -= damage;
}

// Health Recovery Calculator
void Character::recoverHealth(unsigned int heal) {
	this->healthValue += heal;
}
// -----------------------------------------------
// =============================================================================================================
