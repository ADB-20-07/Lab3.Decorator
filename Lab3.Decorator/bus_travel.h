#pragma once

#include "Travel.h"

class BusTravel : public Travel {
public:
	//BusTravel(int days, int hotelClass, const std::string& view);
	BusTravel(int days);

	double cost() const override;
	int days() const override;
private:
	int days_;
	int hotelClass_;
	std::string view_;
};
