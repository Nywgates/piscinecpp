/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 10:41:05 by user42            #+#    #+#             */
/*   Updated: 2021/03/19 10:31:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


Convert::Convert(char *arg):
_arg(arg), _dataType(detectType()), _data(setData()){

}

Convert::~Convert(){  
}

bool    Convert::doubleType() {
    int i = 0;

    if (!strcmp(_arg, "-inf") || !strcmp(_arg, "+inf") || !strcmp(_arg, "nan"))
        return (true);
    if (_arg[0] == '-' || _arg[0] == '+')
        i++;
    while (i < (int)strlen(_arg) && _arg[i] != '.') {
        if (!isdigit(_arg[i++]))
            return (false);
    }
	if (_arg[i++] != '.')
    	return (false);
    while (i < (int)strlen(_arg)) {
        if (!isdigit(_arg[i++]))
            return (false);
    }
    return (true);
}

bool    Convert::floatType() {
    int i = 0;
	double tmp;
	
    if (!strcmp(_arg, "-inff") || !strcmp(_arg, "+inff") || !strcmp(_arg, "nanf"))
        return (true);
    if (_arg[0] == '-' || _arg[0] == '+')
        i++;
    while (i < (int)strlen(_arg) && _arg[i] != '.') {
        if (!isdigit(_arg[i++]))
            return (false);
    }
    i++;
    while (i < (int)strlen(_arg) && _arg[i] != 'f') {
        if (!isdigit(_arg[i++]))
            return (false);
    }
	tmp = std::atol(_arg);
	if (tmp < -FLT_MAX || tmp > FLT_MAX || _arg[++i] != '\0')
		return (false);
	else
		return (true);
}

bool    Convert::intType() {
    int i = 0;
	long tmp;
    
    if (_arg[0] == '-' || _arg[0] == '+')
        i++;
    while (i < (int)strlen(_arg)) {
        if (!isdigit(_arg[i++]))
            return (false);
    }
	tmp = std::atol(_arg);
	if (tmp < INT_MIN || tmp > INT_MAX)
    	return (false);
	else
		return (true);
}

bool    Convert::charType() {
    if (strlen(_arg) == 1 && !isdigit(_arg[0]))
        return (true);
    else
        return (false);
}

int     Convert::detectType() {
    if (charType()) {
        std::cout << "CHAR TYPE" << std::endl;
        return (0);
    }
    else if (intType()) {
        std::cout << "INT TYPE" << std::endl;
        return (1);
    }
    else if (floatType()) {
        std::cout << "FLOAT TYPE" << std::endl;
        return (2);
    }
    else if (doubleType()) {
        std::cout << "DOUBLE TYPE" << std::endl;
        return (3);
    }
    std::cout << "Not detected" << std::endl;
    return (-1);
}

Convert::t_data    Convert::setData() {
    t_data tmp;

	switch (_dataType)
	{
		case 0 :
			tmp.charData = _arg[0];
			break ;
		case 1 :
			tmp.intData = std::atoi(_arg);
			break ;
		case 2 :
			tmp.floatData = std::atof(_arg);
			break ;
		case 3 :
			tmp.doubleData = std::atof(_arg);
			break ;
		case -1 :
			break ;
	}
    return (tmp);
}

char  Convert::_convertChar() const throw(ImpossibleConversionException, UnPrintableChar)
{
	char tmp;

	tmp = '\0';
	switch (_dataType)
	{
		case 0 :
			tmp = (_data.charData);
			break ;
		case 1 :
			if ( _data.intData < 0 || _data.intData > 255)
				throw (ImpossibleConversionException());
			tmp = static_cast<char>(_data.intData);
			break ;
		case 2 :
			if ( _data.floatData < 0 || _data.floatData > 255)
				throw (ImpossibleConversionException());
			tmp = static_cast<char>(_data.floatData);
			break ;
		case 3 :
			if ( _data.doubleData < 0 || _data.doubleData > 255)
				throw (ImpossibleConversionException());
			tmp = static_cast<char>(_data.doubleData);
			break ;
		case -1 :
			throw (ImpossibleConversionException());
			break ;
	}
	if (!std::isprint(tmp))
		throw UnPrintableChar();
	return (tmp);
}

int  Convert::_convertInt() const throw(ImpossibleConversionException)
{
	switch (_dataType)
	{
		case 0 :
			return static_cast<int>(_data.charData);
		case 1 :
			return (_data.intData);
		case 2 :
			if ( _data.floatData < INT_MIN || _data.floatData > INT_MAX)
				throw (ImpossibleConversionException());
			return static_cast<int>(_data.floatData);
		case 3 :
			if ( _data.doubleData < INT_MIN || _data.doubleData > INT_MAX)
				throw (ImpossibleConversionException());
			return static_cast<int>(_data.doubleData);
		case -1 :
			throw (ImpossibleConversionException());
	}
	return (0);
}

float  Convert::_convertFloat() const throw(ImpossibleConversionException)
{
	switch (_dataType)
	{
		case 0 :
			return static_cast<float>(_data.charData);
		case 1 :
			return static_cast<float>(_data.intData);
		case 2 :
			return (_data.floatData);
		case 3 :
			if (_data.doubleData < -FLT_MAX || _data.doubleData > FLT_MAX)
				throw (ImpossibleConversionException());
			return static_cast<float>(_data.doubleData);
		case -1 :
			throw (ImpossibleConversionException());
	}
	return (0);
}

double  Convert::_convertDouble() const throw(ImpossibleConversionException)
{
	switch (_dataType)
	{
		case 0 :
			return static_cast<double>(_data.charData);
		case 1 :
			return static_cast<double>(_data.intData);
		case 2 :
			return static_cast<double>(_data.floatData);
		case 3 :
			return (_data.doubleData);
		case -1 :
			throw (ImpossibleConversionException());
	}
	return (0);
}

void									Convert::displayChar(std::ostream &flux) const
{
	flux << "Char: ";
	try
	{
		char	c(_convertChar());
		flux << '\'' << c << '\'' << std::endl;
	}
	catch (std::exception &e)
	{
		flux << e.what() << std::endl;
	}
}

void									Convert::displayInt(std::ostream &flux) const
{
	flux << "Int: ";
	try
	{
		flux << _convertInt() << std::endl;
	}
	catch (std::exception &e)
	{
		flux << e.what() << std::endl;
	}
}

void									Convert::displayFloat(std::ostream &flux) const
{
	flux << "float: ";
	try
	{
		flux << std::fixed;
		flux << std::setprecision(1);
		flux << _convertFloat() << 'f' << std::endl;
	}
	catch (std::exception &e)
	{
		flux << e.what() << std::endl;
	}
}

void									Convert::displayDouble(std::ostream &flux) const
{
	flux << "Double: ";
	try
	{
		flux << std::fixed;
		flux << std::setprecision(1);
		flux << _convertDouble();
	}
	catch (std::exception &e)
	{
		flux << e.what();
	}
}

std::ostream	&operator<<(std::ostream &flux, const Convert &convert)
{
	convert.displayChar(flux);
	convert.displayInt(flux);
	convert.displayFloat(flux);
	convert.displayDouble(flux);
	return (flux);
}

const char  *Convert::ImpossibleConversionException::what(void) const throw()
{
	return ("IMPOSSIBLE");
}

const char  *Convert::UnPrintableChar::what(void) const throw()
{
	return ("Unprintable");
}