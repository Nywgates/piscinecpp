/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 14:34:33 by laballea          #+#    #+#             */
/*   Updated: 2020/09/16 10:49:59 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "phonebook.hpp"

using namespace std;

Contact::Contact()
{
}

void    Contact::ADD()
{
    cout << "Enter your first name:" << endl;
    cin >> first_name;
    cout << "Enter your last name:" << endl;
    cin >> last_name;
    cout << "Enter your nickname:" << endl;
    cin >> nick_name;
    cout << "Enter your login:" << endl;
    cin >> login;
    cout << "Enter your postal address:" << endl;
    cin >> postal_add;
    cout << "Enter your email address:" << endl;
    cin >> email_add;
    cout << "Enter your birthday date:" << endl;
    cin >> birthday;
    cout << "Enter your favorite meal:" << endl;
    cin >> favorite_meal;
    cout << "Enter your underwear color..:" << endl;
    cin >> underwear_cl;
    cout << "Enter your darkest secret:" << endl;
    cin >> secret;
    cout << "Contact created." << endl;
}

void    feel(string str, int b)
{
    if (!b)
        cout << '|';
    if (str.length() > 10)
        cout << str.substr(0, 9) << '.';
    else
    {
        cout << str;
        for (unsigned long i = 0; i < 10 - str.length(); i++)
            cout << ' ';
    }
}

void    d_ligne(Contact contact, int i)
{
    feel(to_string(i), 1);
    feel(contact.first_name, 0);
    feel(contact.last_name, 0);
    feel(contact.login, 0);
}

void    Display_all(Contact contact)
{
    cout << "First name:" << contact.first_name << endl;
    cout << "Last name:" << contact.last_name << endl;
    cout << "Nickname:" << contact.nick_name << endl;
    cout << "Login:" << contact.login << endl;
    cout << "Postal address:" << contact.postal_add << endl;
    cout << "Email address:" << contact.email_add << endl;
    cout << "Phone number:" << contact.phone_n << endl;
    cout << "Birthday date:" << contact.birthday << endl;
    cout << "Favorite meal:" << contact.favorite_meal << endl;
    cout << "Underwear color:" << contact.underwear_cl << endl;
    cout << "Darkest secret:" << contact.secret << endl;
}

void    choose_ctc(Contact *Contact, int len)
{
    string str;
    
    cout << "Choose contact (0-7):" << endl;
    cin >> str;
    if (str.length() > 1 || str.length() < 0 || !isdigit(str[0]) || stoi(str) >= len)
    {
        cout << "Not valid index." << endl;
        choose_ctc(Contact, len);
    }
    Display_all(Contact[stoi(str)]);
}

void    Display(Contact *Contact, int len)
{
    cout << "INDEX.....|FIRST NAME|LAST NAME.|NICKNAME.." << endl;
    for (int i = 0; i < len; i++)
    {
        d_ligne(Contact[i], i);
        cout << endl;
    }
    choose_ctc(Contact, len);
}

void    replace_ctc(Contact *Anu, int len)
{
    string tmp;

    cout << "You already have 8 contacts, choose the one to replace (0-7):" << endl;
    cin >> tmp;
    if (tmp.length() > 1 || tmp.length() < 0 || !isdigit(tmp[0]) || stoi(tmp) >= len)
    {
        cout << "Not valid index." << endl;
        replace_ctc(Anu, len);
    }
    Anu[stoi(tmp)].ADD();
}

int main()
{
    int i;
    string str;
    Contact Anu[8];
    
    i = 0;
    while (1)
    {
        cout << ">";
        cin >> str;
        if (str == "EXIT")
            break ;
        else if (str == "ADD")
        {
            if (i == 8)
                replace_ctc(Anu, i);
            else
            {
                Anu[i] = Contact();
                Anu[i].ADD();
                i++;
            }
        }
        else if (str == "SEARCH")
        {
            Display(Anu, i);
        }
    }
}