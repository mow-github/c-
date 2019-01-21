#pragma once

#include <iostream>
#include <string>

class Player
{
private:
	std::string name;
	int health;
	int xp;
public:
	Player();
	Player(std::string name_val);
	Player(std::string name_val, int health_val);
	Player(std::string name_val, int health_val, int xp);

	void set_name(std::string name_val);
	void set_health(int health_val);
	void set_xp(int xp_val);
	void output_playerData();


	~Player();
};

