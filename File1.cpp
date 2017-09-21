/*
 * File1.cpp
 *
 *  Created on: Sep 21, 2017
 *      Author: matthew
 */

#include "File1.h"
#include "FileA.h"
#include <iostream>

std::string FooZInternal(const std::string &str)
{
	return str[0] + std::string("?") + ((str.length() > 1) ? FooZInternal(str.substr(1)) : std::string(""));
}

std::string FooZ(const std::string &str)
{
	return FooA(FooZInternal(str));
}
