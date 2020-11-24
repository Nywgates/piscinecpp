/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:39:31 by user42            #+#    #+#             */
/*   Updated: 2020/11/23 11:16:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

const int	Fixed::_fractionalBitsNumber = 8;
const int	Fixed::_floatShifting = 256;

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_raw = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int &i) {
	std::cout << "Int constructor called" << std::endl;
	_raw = i << _fractionalBitsNumber;
}

Fixed::Fixed(const float &f) {
	std::cout << "Float constructor called" << std::endl;
	_raw = (std::roundf(f * _floatShifting));
}

Fixed::Fixed(const Fixed &n) {
	std::cout << "Copy constructor called" << std::endl;
	_raw = n._raw;
	*this = n;
}

Fixed	&Fixed::operator=(const Fixed &n) {
	std::cout << "Assignation operator called" << std::endl;
	_raw = n.getRawBits();
	return *this;
}

float	Fixed::toFloat() const {
	return float(_raw) / _floatShifting; 
}

int		Fixed::toInt() const {
	return _raw >> _fractionalBitsNumber;
}

int		Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _raw;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_raw = raw;
}

std::ostream &operator<<(std::ostream &out, const Fixed &n) {
	return out << n.toFloat();
}

bool Fixed::operator>(const Fixed &b) const
{
    return _raw > b._raw;
}

bool Fixed::operator<(const Fixed &b) const
{
    return _raw < b._raw;
}

bool Fixed::operator>=(const Fixed &b) const
{
    return _raw >= b._raw;
}

bool Fixed::operator<=(const Fixed &b) const
{
    return _raw <= b._raw;
}

bool Fixed::operator==(const Fixed &b) const
{
    return _raw == b._raw;
}

bool Fixed::operator!=(const Fixed &b) const
{
    return _raw != b._raw;
}

Fixed Fixed::operator+(const Fixed &b) const
{
    return _raw + b._raw;
}

Fixed Fixed::operator-(const Fixed &b) const
{
    return _raw - b._raw;
}

Fixed Fixed::operator*(const Fixed &b) const
{
    return Fixed(toFloat() * b.toFloat());
}

Fixed Fixed::operator/(const Fixed &b) const
{
    return Fixed(toFloat() / b.toFloat());
}

Fixed &Fixed::operator++()
{
    _raw++;
    return *this;
}

Fixed &Fixed::operator--()
{
    _raw--;
    return *this;
}

Fixed Fixed::operator++(int _dummy)
{
    (void)_dummy;
    Fixed f = *this;
    _raw++;
    return f;
}

Fixed Fixed::operator--(int _dummy)
{
    (void)_dummy;
    Fixed f = *this;
    _raw--;
    return f;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return a._raw < b._raw ? a : b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return a._raw < b._raw ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return a._raw > b._raw ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return a._raw > b._raw ? a : b;
}
