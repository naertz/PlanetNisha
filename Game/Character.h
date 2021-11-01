#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

// Character Name Structure ============
struct name
{
    std::string firstName; // First Name
    std::string lastName;  // Last Name
};
// =====================================

// Character Class =======================================================================================================================
class Character
{
    private:
        struct name characterName;                                                                           // Character Name
        std::string title;                                                                                   // Title
        unsigned int healthValue;                                                                            // Health Value
    public:
        Character();                                                                                         // Default Constructor
        Character(std::string firstName, std::string lastName);                                              // Name Only Constructor
        Character(std::string firstName, std::string lastName, std::string title, unsigned int healthValue); // Main Constructor
        void setFirstName(std::string firstName);                                                            // First Name Mutator
        void setLastName(std::string lastName);                                                              // Last Name Mutator
        void setTitle(std::string title);                                                                    // Title Mutator
        void setHealthValue(unsigned int healthValue);                                                       // Health Value Mutator
        std::string getFirstName() const;                                                                    // First Name Accessor
        std::string getLastName() const;                                                                     // Last Name Accessor
        std::string getTitle() const;                                                                        // Title Accessor
        unsigned int getHealthValue() const;                                                                 // Health Value Accessor
        void loseHealth(unsigned int damage);                                                                // Health Loss Calculator
        void recoverHealth(unsigned int heal);                                                               // Health Recovery Calculator
};
// =======================================================================================================================================

#endif // CHARACTER_H
