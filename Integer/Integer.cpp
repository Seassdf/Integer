#include "Integer.h"
#include <cmath>
#include <string>
#include <iostream>
using namespace std;

int Integer::getValue() {
	return value;
}
void Integer::setValue(int value) {
	this->value = value;
}
Integer Integer::add(Integer integer) {
	Integer temp = (value + integer.value);
	return temp;
}
Integer Integer::sub(Integer integer) {
	Integer temp = (value - integer.value);
	return temp;
}
Integer Integer::mul(Integer integer) {
	Integer temp = (value * integer.value);
	return temp;
}
Integer Integer::div(Integer integer) {
	Integer temp = (value / integer.value);
	return temp;
}
Integer Integer::pow(int n) {
	int res = 1;
	for (int i = 0; i < n; i++)
	{
		res *= value;
	}
	res = value;
	return Integer(value);
}
Integer Integer::mod(Integer integer) {
	Integer temp = (value % integer.value);
	return temp;
}
Integer Integer::oop() {
	Integer temp = getValue() *(-1);
	return temp;
}