#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
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
	std::string getNickName()
	{
		return (_nickName);
	}
	std::string getDarkestSecret()
	{
		return (_darkestSecret);
	}
	void setFirstName(std::string x)
	{
		_firstName = x;
	}
	void setLastName(std::string x)
	{
		_lastName = x;
	}
	void setphoneNumber(std::string x)
	{
		_phoneNumber = x;
	}
	void setNickName(std::string x)
	{
		_nickName = x;
	}
	void setDarkestSecret(std::string x)
	{
		_darkestSecret = x;
	}

  private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

class phonebook
{
  public:
	void add_contact()
	{
		std::string firstName, lastName, phoneNum, darkestSecret, nickName;
		std::cout << "NEW CONTACT:-" << std::endl;
		std::cout << "First Name:" << std::endl;
		std::cin >> firstName;
		std::cout << "Last Name:" << std::endl;
		std::cin >> lastName;
		std::cout << "NickName:" << std::endl;
		std::cin >> nickName;
		std::cout << "Phone Number:" << std::endl;
		std::cin >> phoneNum;
		std::cout << "Darkest Secret:" << std::endl;
		std::cin >> darkestSecret;
		int i = 0;
		while (i < 8 && !_contactList[i].getFirstName().empty())
			i++;
		if (i == 7)
			i = 0;
		if (i < 8)
		{
			_contactList[i].setFirstName(firstName);
			_contactList[i].setLastName(lastName);
			_contactList[i].setNickName(nickName);
			_contactList[i].setphoneNumber(phoneNum);
			_contactList[i].setDarkestSecret(darkestSecret);
		}
	}
	void search_contact()
	{
	}

  private:
	contacts _contactList[8];
};

#endif