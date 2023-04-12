#include <iostream>
#include "travel.h"
#include "bus_travel.h"
#include "hotel_decorator.h"
#include "excursion_decor.h"

using namespace std;

int main() {
	// создание объекта класса BusTravel с количеством дней, равным 7
	Travel* myTravel = new BusTravel(7);

	// добавление декораторов к объекту myTravel
	myTravel = new HotelDecorator(myTravel, "Suite");
	myTravel = new ExcursionDecorator(myTravel, "City Tour");

	// вывод стоимости путешествия
	cout << "Total cost: " << myTravel->cost() << endl;

	// освобождение памяти
	delete myTravel;

	return 0;
}