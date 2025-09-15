/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:28:41 by msalim            #+#    #+#             */
/*   Updated: 2025/09/15 17:45:45 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"


Cat::Cat() : Animal()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	this->brain = new Brain(*other.brain);
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat Copy assignment operator called" << std::endl;
    if (this != &other)
	    Animal::operator=(other);
    if (this->brain)
	    delete this->brain;
    this->brain = new Brain(*other.brain);
    return (*this);
}

Cat::~Cat()
{
	delete brain;
    	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow " << std::endl;
}

Brain	*Cat::getBrain()
{
	return brain;
}
