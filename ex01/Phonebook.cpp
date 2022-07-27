#include <iostream>
#include "PhoneBook.hpp"

void    Phonebook::search(void)
{
    int index = -1;
    
    std::cout << "---------------------------------------------\n";
    std::cout << "|   index  ";
    std::cout << "|first name";
    std::cout << "| last name";
    std::cout << "| nickname |\n";
    for (int i = 0; i < 8; i++)
        this->contacts[i].display_contact(i);
    std::cout << "---------------------------------------------\n";
    std::cout << "Input index to get infos on a contact\n";
    std::cin >> index;
    if (index < 0 || index > 7)
        std::cout << "Not a valid index\n";    
    else
        this->contacts[index].display_infos();
    std::cin.ignore();
}

void    Phonebook::add(int i)
{
    this->contacts[i % 8].fill_contact();
    std::cout << "\nContact succesfully saved\n";
}

Phonebook::Phonebook(void)
{
    return;
};

Phonebook::~Phonebook(void)
{
    return;
};