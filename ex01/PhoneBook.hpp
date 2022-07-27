#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class Phonebook
{
public :
    Phonebook(void);
    ~Phonebook(void);
    Contact contacts[8];
    void    add(int i);
    void    search(void);
};

#endif