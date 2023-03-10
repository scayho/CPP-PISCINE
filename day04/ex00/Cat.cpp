/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:35:21 by absela            #+#    #+#             */
/*   Updated: 2023/01/11 23:47:11 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
    std::cout << "Cat created" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const &src)
{
    std::cout << "Cat created" << std::endl;
    *this = src;
}

Cat::~Cat(void) {
    std::cout << "Cat destroyed" << std::endl;
}

Cat &		Cat::operator=(Cat const & rhs) {
    this->type = rhs.type;
    return *this;
}

void Cat::makeSound(void)  {
    std::cout << "Meow" << std::endl;
}

