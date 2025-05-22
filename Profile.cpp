#include "Profile.h"

#include <iostream>

Profile::Profile() : username("None"), email("None") {}

Profile::Profile(const std::string& _username, const std::string& _email)
    : username(_username), email(_email) {}

const std::string& Profile::getUsername() const {return username;}
const std::string& Profile::getEmail() const {return email;}

void Profile::setUsername(const std::string& _username) {username = _username;}
void Profile::setEmail(const std::string& _email) {email = _email;}

std::string Profile::displayProfile() const
{
    return "Username: " + username + "\nEmail: " + email;
}