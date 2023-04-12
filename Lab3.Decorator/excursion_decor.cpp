#include "excursion_decor.h"

ExcursionDecorator::ExcursionDecorator(Travel* travel, int numExcursions)
	: travel_(travel), numExcursions_(numExcursions) {}

double ExcursionDecorator::cost() const {
	double cost = travel_->cost();
	// Добавляем стоимость экскурсий
	cost += 30.0 * numExcursions_;
	return cost;
}

int ExcursionDecorator::days() const {
	return travel_->days();
}
