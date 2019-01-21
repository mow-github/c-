#include "pch.h"
#include "Player.h"


Player::Player()
{
	std::cout << "no args ctor called" << std::endl;
}

Player::Player(std::string name_val)
{
	name = name_val;
	std::cout << "1 arg ctor called" << std::endl;
}

Player::Player(std::string name_val, int health_val)
{
	name = name_val;
	health = health_val;
	std::cout << "2 arg ctor called" << std::endl;
}

Player::Player(std::string name_val, int health_val, int xp_val)
	:name(name_val), health(health_val), xp(xp_val)
{
	//name = name_val;
	//health = health_val;
	//xp = xp_val;
	std::cout << "3 arg ctor called" << std::endl;
}

void Player::set_name(std::string name_val) {
	name = name_val;
}

void Player::set_health(int health_val) {
	health = health_val;
}

void Player::set_xp(int xp_val) {
	xp = xp_val;
}

void Player::output_playerData() {
	std::cout << "Player has health: " << health << " and Name: " << name << " and xp: " << xp << std::endl;
}

Player::~Player()
{
}
