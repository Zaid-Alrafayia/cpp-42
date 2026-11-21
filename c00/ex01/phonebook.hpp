#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string.h>
class contacts
{
  public:
	std::string getFirstName()
	{
		return (_firstName);
	}
	std::string getLastName()
	{
		return (_lastName);
	}
	std::string getphoneNumber()
	{
		return (_phoneNumber);
	}

  private:
	std::string _firstName;
	std::string _lastName;
	std::string _phoneNumber;
};

class phonebook
{
  public:
  private:
	contacts _contactList[8];
};

#endif