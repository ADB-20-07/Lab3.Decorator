#pragma once

#include "travel.h"

class HotelDecorator : public Travel {
public:
	HotelDecorator(Travel* travel, int hotelClass);
	double cost() const override;
protected:
	Travel* travel_;
	int hotelClass_;
	int days_;
};