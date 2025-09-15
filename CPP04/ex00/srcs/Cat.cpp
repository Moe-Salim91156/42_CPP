/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:28:41 by msalim            #+#    #+#             */
/*   Updated: 2025/09/15 17:00:35 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"


Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &other)
	this->type = other.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow " << std::endl;
}

