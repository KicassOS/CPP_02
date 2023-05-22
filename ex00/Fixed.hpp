/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pszleper < pszleper@student.42.fr >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 22:41:14 by pszleper          #+#    #+#             */
/*   Updated: 2023/05/22 23:28:28 by pszleper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	public:
			Fixed(void);
			Fixed(const Fixed& fixed_ref);
			Fixed& operator=(const Fixed& rhs);
			~Fixed(void);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	private:
		int					_value;
		static const int	_fract_bits;
};

#endif