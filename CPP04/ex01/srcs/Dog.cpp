/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:33:01 by msalim            #+#    #+#             */
/*   Updated: 2025/09/15 17:45:51 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) 
{
    std::cout << "Dog Copy constructor called" << std::endl;
    this->brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other) 
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &other) 
	    Animal::operator=(other);
    if (this->brain)
	    delete this->brain;
    this->brain = new Brain(*other.brain);
    return *this;
}

Dog::~Dog() 
{
	delete brain;
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "Woof Woof!" << std::endl;
}
Brain	*Dog::getBrain()
{
	return brain;
}
