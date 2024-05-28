#pragma once
class Car: public Transport
{
public:
	Car() {}
	Car(int tank) : Transport(tank) {}
};

