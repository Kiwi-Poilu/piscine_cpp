#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone;
        std::string secret;
    public:
        Contact(void);
        ~Contact(void);
        void    fill_contact(void);
        void    display_contact(int i);
        void    display_infos();
};

#endif