/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 22:41:14 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/23 13:50:24 by pszleper         ###   ########.fr       */
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
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	private:
		int					_value;
		static const int	_fract_bits;
};

std::ostream& operator<<(std::ostream& ostream, Fixed const & rhs);

#endif