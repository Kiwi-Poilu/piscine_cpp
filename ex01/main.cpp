#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
    Phonebook phonebook;
    std::string command;
    int i = 0;

    std::cout << "Welcome to the Phonebook, ";
    while (1)
    {
        std::cout << "the following commands are available:\n-ADD\n-SEARCH\n-EXIT\n\n";
        std::getline(std::cin, command);
        std::cout << "You chose the command: " << command << std::endl;
        if (command == "ADD")
        {
            phonebook.add(i);
            i++;
        }
        else if (command == "SEARCH")
            phonebook.search();
        else if (command == "EXIT")
        {
            std::cout << "exiting\n";
            return (0);
        }
        else
            std::cout << "\nInvalid command, please input a valid command\n";
    }     
}