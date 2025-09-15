/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:33:01 by msalim            #+#    #+#             */
/*   Updated: 2025/09/15 17:00:22 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) 
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other) 
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &other) 
	{
	this->type = other.type;
    }
    return *this;
}

Dog::~Dog() 
{
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "Woof Woof!" << std::endl;
}
