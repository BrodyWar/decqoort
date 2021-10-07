#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
class Entity
{
protected:
	float dx, dy, speed, x, y, moverTimer;
	int height, width, health;
	bool life;
public:
	sf::Texture texture;
	sf::Sprite sprite;
	std::string name;
public:
	Entity(sf::Image& image, float X, float Y, float WIDTH, float HEIGHT, std::string Name);
};

