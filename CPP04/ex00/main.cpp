/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:35:06 by msalim            #+#    #+#             */
/*   Updated: 2025/09/10 16:48:50 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animals.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"
int main()
{
    const Animal* meta = new Animal();
     Animal* j = new Dog();
     Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); // Meow
    j->makeSound(); // Woof
    meta->makeSound(); // generic Animal sound

    delete meta;
    delete j;
    delete i;

    // WrongAnimal test
    const WrongAnimal* wa = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    wa->makeSound(); // WrongAnimal sound
    wc->makeSound(); // Still WrongAnimal sound (no virtual)

    delete wa;
    delete wc;

    return 0;
}
