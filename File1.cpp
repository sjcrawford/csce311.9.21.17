/*
 * File1.cpp
 *
 *  Created on: Sep 21, 2017
 *      Author: matthew
 */

#include "File1.h"
#include "FileA.h"
#include <iostream>

void FooZ(const std::string &str)
{
	std::cout << FooA(FooZInternal(str)) << std::endl;
}

std::string FooZInternal(const std::string &str)
{
	if(str.length() == 0) return "";

	return str[0] + std::string("?") + FooZ(str.substr(1));
}
