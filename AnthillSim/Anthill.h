#pragma once
#include "Object.h"
#include "pch.h"

class Anthill : public Object
{
public:
	Anthill();
	~Anthill();
	void Update();
	sf::CircleShape shape;

};

