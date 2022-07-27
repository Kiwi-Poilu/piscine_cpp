#include "Contact.hpp"

void    Contact::display_infos(void)
{
    if (this->first_name == "")
        std::cout << "No infos available for this index.\n";
    else
    {
    std::cout << "Displaying contact infos...\n";
    std::cout << "First name: "<< this->first_name << std::endl;
    std::cout << "Last name: " <<this->last_name << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Phone number: " << this->phone << std::endl;
    std::cout << "Darkest secret: " << this->secret << std::endl;
    std::cout << std::endl;
    }
}

void    Contact::display_contact(int i)
{
    if (this->first_name == "")
        return;
    std::cout << "|         " << i << "|";
    if (this->first_name.size() < 10)
    {
        for (size_t j = 0; j < 10 - this->first_name.size(); j++)
            std::cout << " ";
        std::cout << this->first_name;
    }
    else
        std::cout << first_name.substr(0, 9) << ".";
    std::cout << "|";
    if (this->last_name.size() < 10)
    {
        for (size_t j = 0; j < 10 - this->last_name.size(); j++)
            std::cout << " ";
        std::cout << this->last_name;
    }
    else
        std::cout << this->last_name.substr(0, 9) << ".";
    std::cout << "|";
    if (this->nickname.size() < 10)
    {
        for (size_t j = 0; j < 10 - this->nickname.size(); j++)
            std::cout << " ";
        std::cout << this->nickname << "|\n";
    }
    else
        std::cout << this->nickname.substr(0, 9) << ".|\n";
}

void    Contact::fill_contact(void)
{
    this->first_name = "";
    this->last_name = "";
    this->nickname = "";
    this->phone = "";
    this->secret = "";
    while (this->first_name == "")
    {
        std::cout << "Enter first name: ";
        std::getline(std::cin, this->first_name);
        if (this->first_name == "")
            std::cout << "Invalid input, try again\n";
    }
    while (this->last_name == "")
    {
        std::cout << "Enter last name: ";
        std::getline(std::cin, this->last_name);
        if (this->first_name == "")
            std::cout << "Invalid input, try again\n";
    }
    while (this->nickname == "")
    {
        std::cout << "Enter nickame: ";
        std::getline(std::cin, this->nickname);
        if (this->nickname == "")
            std::cout << "Invalid input, try agian\n";
    }
    while (this->phone == "")
    {
        std::cout << "Enter phone number: ";
        std::getline(std::cin, this->phone);
        if (this->nickname == "")
            std::cout << "Invalid input, try again\n";
    }
    while (this->secret == "" )
    {
        std::cout << "Enter darkest secret: ";
        std::getline(std::cin, this->secret);
        if (this->secret == "")
            std::cout << "Invalid input, try again\n";
    }
}

Contact::Contact(void)
{
    return;
};

Contact::~Contact(void)
{
    return;
};
