#include "GasStation.h"
#include "Transport.h"

int GasStation::calcTotalGas(Transport* transport,int size) {
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += transport[i].getTank();
	}
	
	return total;
}