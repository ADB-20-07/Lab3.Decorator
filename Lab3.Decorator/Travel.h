#pragma once
#include <iostream>
class Travel {
public:
	virtual double cost() const = 0;
	virtual int days() const = 0; // новое поле - количество дней
	virtual ~Travel() = default
};