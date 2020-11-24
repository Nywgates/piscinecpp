/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:39:54 by user42            #+#    #+#             */
/*   Updated: 2020/11/23 10:39:56 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed {
	private:
		int					_raw;
		static const int	_fractionalBitsNumber;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &n);
		
		Fixed 	&operator=(const Fixed &n);

		int		getRawBits() const;
		void	setRawBits(int const raw);
};

#endif