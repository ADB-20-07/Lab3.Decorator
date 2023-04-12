#pragma once

#include "travel.h"

class ExcursionDecorator : public Travel {
public:
	ExcursionDecorator(Travel* travel, int numExcursions);
	double cost() const override;
	int days() const override;
private:
	Travel* travel_;
	int numExcursions_;
};