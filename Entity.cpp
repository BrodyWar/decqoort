#include "Entity.h"

Entity::Entity(sf::Image& image, float X, float Y, float WIDTH, float HEIGHT, std::string Name)
	: x(X), y(Y), width(WIDTH), height(HEIGHT), name(Name), moverTimer(0), speed(0), health(100),
	dx(0), dy(0), life(true) {
	texture.loadFromImage(image);
	sprite.setTexture(texture);
	sprite.setOrigin(width / 2, height / 2);
}
