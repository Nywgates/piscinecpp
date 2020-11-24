/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:39:54 by user42            #+#    #+#             */
/*   Updated: 2020/11/23 11:05:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <ostream>

class Fixed {
	private:
		int					_raw;
		static const int	_fractionalBitsNumber;
		static const int	_floatShifting;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &n);
		Fixed(const int &i);
		Fixed(const float &f);
		
		Fixed 	&operator=(const Fixed &n);

		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &n);

#endif