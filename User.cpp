#include "User.h"

#include <iostream>

User::User() : username("None"), email("None") {}

User::User(const std::string& _username, const std::string& _email)
    : username(_username), email(_email) {}


const std::string& User::getUsername() const {return username;}
const std::string& User::getEmail() const {return email;}

void User::setUsername(const std::string& _username) {username = _username;}
void User::setEmail(const std::string& _email) {email = _email;}

std::string User::displayProfile() const
{
    return "Username: " + username + "\nEmail: " + email;
}