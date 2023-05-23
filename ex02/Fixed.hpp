/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 22:41:14 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/23 15:46:05 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	public:
						Fixed(void);
						Fixed(const int n);
						Fixed(const float f);
						Fixed(const Fixed& fixed_ref);
						Fixed& operator=(const Fixed& rhs);
						~Fixed(void);

	bool				operator>(const Fixed &rhs) const;
	bool				operator<(const Fixed &rhs) const;
	bool				operator>=(const Fixed &rhs) const;
	bool				operator<=(const Fixed &rhs) const;
	bool				operator==(const Fixed &rhs) const;
	bool				operator!=(const Fixed &rhs) const;

	Fixed				operator+(const Fixed &rhs) const;
	Fixed				operator-(const Fixed &rhs) const;
	Fixed				operator*(const Fixed &rhs) const;
	Fixed				operator/(const Fixed &rhs) const;
	Fixed&				operator++(void);
	Fixed&				operator--(void);
	Fixed				operator++(int n);
	Fixed				operator--(int n);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;

	static Fixed&		min(Fixed &f1, Fixed &f2);
	static const Fixed&	min(const Fixed &f1, const Fixed &f2);

	static Fixed&		max(Fixed &f1, Fixed &f2);
	static const Fixed&	max(const Fixed &f1, const Fixed &f2);

	private:
		int					_value;
		static const int	_fract_bits;
};

std::ostream& operator<<(std::ostream& ostream, Fixed const & rhs);

#endif
