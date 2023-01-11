/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 03:22:28 by absela            #+#    #+#             */
/*   Updated: 2023/01/11 23:46:54 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal{

    public:
        Cat(void);
        Cat(Cat const & src);
        ~Cat(void);

        Cat &		operator=(Cat const & rhs);

        void makeSound() ;
};

#endif