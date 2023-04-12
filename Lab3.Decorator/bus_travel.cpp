#include "bus_travel.h"

BusTravel::BusTravel(int days, int hotelClass, const std::string& view)
	: days_(days), hotelClass_(hotelClass), view_(view) {}

double BusTravel::cost() const {
	double cost = 50.0 * days_; // —тоимость автобусного проезда
	// ƒобавл€ем стоимость гостиницы в зависимости от класса номера
	if (hotelClass_ == 1) {
		cost += 100.0 * days_;
	}
	else if (hotelClass_ == 2) {
		cost += 75.0 * days_;
	}
	else {
		cost += 50.0 * days_;
	}
	// ƒобавл€ем стоимость экскурсии в зависимости от выбранного вида из номера
	if (view_ == "море") {
		cost += 50.0;
	}
	else if (view_ == "горы") {
		cost += 75.0;
	}
	else {
		cost += 25.0;
	}
	return cost;
}