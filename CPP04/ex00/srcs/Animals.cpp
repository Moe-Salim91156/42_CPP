/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:21:39 by msalim            #+#    #+#             */
/*   Updated: 2025/09/10 16:38:08 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animals.hpp"


Animal::Animal() : type("Animal") {
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) {
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &other) {
	this->type = other.type;
    }
    return *this;
}

std::string Animal::getType() {
    return this->type;
}

void Animal::makeSound() const {
    std::cout << "Animal sound" << std::endl;
}


Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}
