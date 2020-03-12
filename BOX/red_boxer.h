#pragma once
#include"parameter.h"
#include<string>
#include<iostream>

class red_boxer:parameter
{

public:


	std::string player;
	red_boxer();
	void SpecialAttack()const;
	~red_boxer();
	friend class blu_boxer;
private:
	int HP1;

};

