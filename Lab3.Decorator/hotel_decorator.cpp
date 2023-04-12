#include "hotel_decorator.h"

HotelDecorator::HotelDecorator(Travel* travel, int hotelClass)
	: travel_(travel), hotelClass_(hotelClass) {}

double HotelDecorator::cost() const {
	double cost = travel_->cost();
	// Добавляем стоимость гостиницы в зависимости от класса номера
	if (hotelClass_ == 1) {
		cost += 100.0 * travel_->days();
	}
	else if (hotelClass_ == 2) {
		cost += 75.0 * travel_->days();
	}
	else {
		cost += 50.0 * travel_->days();
	}
	return cost;
}
