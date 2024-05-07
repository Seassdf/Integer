#include "Integer.h"
#include <cmath>
#include <string>
#include <iostream>
using namespace std;

int Integer::getValue() {
	return value;
}
void Integer::setValue(int v) {
	value = v;
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
	return value;
}
Integer Integer::mod(Integer integer) {
	Integer temp = (value % integer.value);
	return temp;
}
Integer Integer::oop() {
	int temp = 0;
	int num = getValue();
	while (num > 0)
	{
		temp = temp * 10 + num % 10;
		num /= 10;
	}
	setValue(temp);
	return value;
}