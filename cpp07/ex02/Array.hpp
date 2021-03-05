/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 09:08:25 by laballea          #+#    #+#             */
/*   Updated: 2021/03/05 10:06:05 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template<typename T>
class Array {
	private:
		T *_array;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		~Array();
		Array(const Array &a);
		Array<T> &operator=(const Array &a);
		T &operator[](unsigned int idx);

		class IndexOutOfBound : public std::exception{
			public:
				virtual const char* what() const throw();
		};

		unsigned int size();

};

template <typename T>
Array<T>::~Array(){
	delete[] _array;
}

template <typename T>
Array<T>::Array():_array(new T[0]()), _size(0){
}

template <typename T>
Array<T>::Array(unsigned int n):_array(new T[n]()), _size(n){
}

template <typename T>
Array<T>::Array(const Array &a){
	_array = new T[a._size]();
	for (unsigned int i = 0; i < a._size; i++)
		_array[i] = a._array[i];
	_size = a._size;
}

template <typename T>
T &Array<T>::operator[](unsigned int idx){
	if (idx >= 0 && idx < _size)
		return (_array[idx]);
	else
		throw IndexOutOfBound();
}

template <typename T>
unsigned int Array<T>::size(){
	return _size;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &a){
	delete[] _array;
	_array = new T[a._size]();
	for (unsigned int i = 0; i < a._size; i++)
		_array[i] = a._array[i];
	_size = a._size;
	return *this;
}

template <typename T>
const char	*Array<T>::IndexOutOfBound::what() const throw() {
	return "Index out of bound !";
}
#endif