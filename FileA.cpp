#include "FileA.h"

using namespace std;

string FooAInternal(string input){
	return input.at[0] + "!" + ((string.length() > 1) ? FooAInternal(string.substr(1));
}

string FooA(string input){
	return FooZ(FooAInternal(input));