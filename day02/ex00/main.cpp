/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 05:07:40 by absela            #+#    #+#             */
/*   Updated: 2023/01/06 09:47:31 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"
// class A{
//     public :
//     A() {std::cout << "1";} //cuns
//     A(const A&) {std::cout << "2";} //copy
//     A& operator=(A const &A) {std::cout << "3"; return *this;} // copy ass
// };

// int main()
// {
//     A objt1;
//     A objt2 = objt1;
//     objt1 = objt2;
// }


/*
In C++, a default constructor is a constructor that is automatically generated by the compiler if no other constructors are explicitly defined in the class. It initializes member variables to their default values.
 A default constructor is called when an object of the class is declared without any arguments.

A copy constructor is a constructor that takes an object of the same class as an argument and creates a new object that is a copy of the argument.
 It is used to create a copy of an object when the object is passed by value or when an object is returned from a function by value.

The copy assignment operator is a member function that is automatically called when an object of a class is assigned to another object of the same class. It is used to copy the values of one object to another.

The destructor is a member function that is automatically called when an object of a class goes out of scope or is deleted. It is used to deallocate memory and perform other clean-up tasks.
*/

/*
In C++, a class in Orthodox Canonical Form (OCF) is a class that follows a set of rules for its construction and implementation.
 The main purpose of OCF is to make it easier to write correct and efficient code when working with objects of the class.

To create a class in OCF, you need to follow these rules:

1 Declare all member variables as private.
2 Declare a default constructor, a copy constructor, a copy assignment operator, and a destructor.
3 Define all member functions as either const or pure virtual.
4 Define all member functions in the class definition.
5 Define all member functions inline.
Here is an example of a simple class in OCF:
*/
// 

// class MyClass
// {
// public:
//     MyClass();              // Default constructor
//     MyClass(const MyClass &value); // Copy constructor
//     MyClass& operator=(const MyClass&); // Copy assignment operator ad-hoc poly
//     virtual ~MyClass();     // Destructor

//     int getValue() const;   // Member function declared const

// private:
//     int value;              // Member variable
// };

// // Definition of member functions

//  MyClass::MyClass() : value(0) {}

//  MyClass::MyClass(const MyClass& other) : value(other.value) {}

//  MyClass& MyClass::operator=(const MyClass& other)
// {
//     value = other.value;
//     return *this;
// }

//  MyClass::~MyClass() {}

//  int MyClass::getValue() const
// {
//     return value;
// }



//

int main(void)
{
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return (0);
}
