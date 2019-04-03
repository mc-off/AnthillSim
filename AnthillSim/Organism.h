#pragma once
#include "Object.h"
#include "iostream"
#include "pch.h"
class Organism : public Object
{
protected:
	int age;
	int health;
	int speed;
public:
	Organism();
	~Organism();
	virtual void Update() = 0;
	void DecreaseHP();
	int GetHp();
};

