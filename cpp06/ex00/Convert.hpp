/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 10:38:57 by user42            #+#    #+#             */
/*   Updated: 2021/02/01 10:07:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
# include <iomanip>
# include <cmath>
# include <climits>
# include <cfloat>

class Convert {
	public:
		Convert(char *arg);
        ~Convert();

        typedef union   u_data
		{
			char    charData;
			int intData;
			float   floatData;
			double  doubleData;
		}   t_data;


        class   ImpossibleConversionException : public std::exception
		{
			public:
				const char  *what(void) const throw();

		};

        class   UnPrintableChar : public std::exception
		{
			public:
				const char  *what(void) const throw();

		};
		char *_arg;
        int _dataType;
        t_data  _data;

        int     detectType();
        bool    charType();
        bool    intType();
        bool    floatType();
        bool    doubleType();

        t_data    setData();

        char  _convertChar() const throw(ImpossibleConversionException, UnPrintableChar);
        int  _convertInt() const throw(ImpossibleConversionException);
        float  _convertFloat() const throw(ImpossibleConversionException);
        double  _convertDouble() const throw(ImpossibleConversionException);

        void    displayChar(std::ostream &flux) const;
        void    displayInt(std::ostream &flux) const;
        void    displayFloat(std::ostream &flux) const;
        void    displayDouble(std::ostream &flux) const;

};

std::ostream	&operator<<(std::ostream &flux, const Convert &convert);

#endif