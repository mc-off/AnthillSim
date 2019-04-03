#pragma once
#include "Warrior.h"
#include "Hunter.h"
#include "vector"
#include "pch.h"

class Role
{
public:
	Role();
	~Role();
	
	Warrior* warrior;
	Hunter* hunter;
};

