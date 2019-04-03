#pragma once
#include "Object.h"
#include "vector"
#include "pch.h"
class Warrior
{
public:
	Warrior();
	~Warrior();

	static const int speed = 2;
	static const int health = 4;

	void findEnemy();
	std::vector<Object*> *objects;

};

