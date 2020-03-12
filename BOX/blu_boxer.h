#pragma once

#include"parameter.h"
#include<string>
#include<iostream>

class blu_boxer:parameter
{
public:
	
	
	std::string player ;
	blu_boxer();
	void SpecialAttack()const;
	~blu_boxer();
	friend class red_boxer;
private:
	int HP;

};

