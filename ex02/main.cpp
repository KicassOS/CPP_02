/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 22:41:51 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/23 16:32:10 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	a = 5;
	Fixed c(2);
	std::cout << "\nMy extra tests:\na is " << a.toInt() << " and c is " << c.toInt() <<std::endl;
	std::cout << "a > c = " << (a > c) << std::endl;
	std::cout << "a < c = " << (a < c) << std::endl;
	std::cout << "a >= c = " << (a >= c) << std::endl;
	std::cout << "a <= c = " << (a <= c) << std::endl;
	std::cout << "a == c = " << (a == c) << std::endl;
	std::cout << "a != c = " << (a != c) << std::endl;
	std::cout << "a + c = " << (a + c) << std::endl;
	std::cout << "a - c = " << (a - c) << std::endl;
	std::cout << "a * c = " << (a * c) << std::endl;
	std::cout << "a / c = " << (a / c) << std::endl;
	return 0;
}
