/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:17:14 by msalim            #+#    #+#             */
/*   Updated: 2025/07/26 17:17:25 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>

class contacts
{
	//cant have empty fields;
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;
	public:
		void	Add_Contact();
		void	Display();

};

void	contacts::Add_Contact()
{
	std::cout << "Enter Your FirstName" << std::endl;
	std::getline(std::cin , FirstName);

	std::cout << "Enter Your LastName" << std::endl;
	std::getline(std::cin , LastName);

	std::cout << "Enter Your PhoneNumber" << std::endl;
	std::getline(std::cin , PhoneNumber);

	std::cout << "Enter Your DarkestSecret" << std::endl;
	std::getline(std::cin ,DarkestSecret);
}

void	contacts::Display()
{
	std::cout << " FirstName : " << FirstName <<  std::endl;
	std::cout << " LastName  : " << LastName <<  std::endl;
	std::cout << " PhoneNumber : " << PhoneNumber <<  std::endl;
}


class PhoneBook {
};


int	main(void)
{
	std::string input; 

	std::cout << "Enter Command (add, 2:Display)" << std::endl;
	std::getline(std::cin, input);
	if (input == "add")
	{
		contacts con1;
		con1.Add_Contact();
		con1.Display();
	}
	return (0);

}
