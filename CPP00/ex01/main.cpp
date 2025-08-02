/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:17:14 by msalim            #+#    #+#             */
/*   Updated: 2025/07/26 19:42:03 by msalim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include "PhoneBook.hpp"

int main() {
    PhoneBook book;
    std::string input;

    while (true) {
        std::cout << "Enter command (add, search, exit): ";
        if (!std::getline(std::cin, input))
		return (1);
        if (input == "add")
            book.add_contact();
        else if (input == "search")
            book.search_contact();
        else if (input == "exit")
            break;
    }
    return 0;
}

