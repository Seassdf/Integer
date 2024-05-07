#include <iostream>
#include "Integer.h"

using namespace std;

int main() {
	Integer i1{ 512 };
	Integer i2{ 4 };

	cout << i1.oop().getValue();

	return 0;
}