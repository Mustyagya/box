#pragma once
#include<iostream>
#include<string>
class parameter
{
	public:
		parameter() {}
		parameter(int damage,);
		~parameter();
		
		int damage;
		
		void set_damage(int damage);
		int get_damage;
protected:
	int n_damage;
};

