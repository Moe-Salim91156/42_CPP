/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:35:06 by msalim            #+#    #+#             */
/*   Updated: 2025/09/15 17:52:06 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animals.hpp"
#include "includes/Cat.hpp"
#include "includes/Dog.hpp"
#include "includes/Brain.hpp"

int main() {
    const int N = 4;
    Animal* animals[N];

    std::cout << "---- Creating Animals ----" << std::endl;
    // Fill half with Dogs, half with Cats
    for (int i = 0; i < N / 2; i++)
        animals[i] = new Dog();
    for (int i = N / 2; i < N; i++)
        animals[i] = new Cat();

    std::cout << "\n---- Making sounds ----" << std::endl;
    for (int i = 0; i < N; i++)
        animals[i]->makeSound();

    std::cout << "\n---- Deep copy test ----" << std::endl;
    Dog* originalDog = new Dog();
    originalDog->getBrain()->setIdea(0, "Chase the cat");
    originalDog->getBrain()->setIdea(1, "Dig a hole");

    Dog* copiedDog = new Dog(*originalDog);  // Copy constructor
    originalDog->getBrain()->setIdea(0, "Eat food");

    std::cout << "Original Dog idea[0]: " << originalDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog idea[0]:   " << copiedDog->getBrain()->getIdea(0) << std::endl;

    delete originalDog;
    delete copiedDog;

    std::cout << "\n---- Deleting Animals ----" << std::endl;
    for (int i = 0; i < N; i++)
        delete animals[i];

    return 0;
}

