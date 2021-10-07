#include "Player.h"

Player::Player(sf::Image& image, float X, float Y, float WIDTH, float HEIGHT, sf::String Name, Map &Map) :Entity(image, X, Y, WIDTH, HEIGHT, Name) {
	state = stay;
	map = Map;
	Score = 0;
	if (name == "Player") {
		sprite.setTextureRect(sf::IntRect(30, 783, width, height));
	}
}

void Player::control() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		state = right;
		speed = 0.5;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		state = left;
		speed = 0.5;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		state = up;
		speed = 0.5;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		state = down;
		speed = 0.5;
	}
}

void Player::Update(float time) {
	control();
	if (state == right) {
		dx = speed;
	}
	if (state == left) {
		dx = -speed;
	}
	if (state == down) {
		dy = speed;
	}
	if (state == up) {
		dy = -speed;
	}
	
	x += dx * time;
	checkCollision(dx, 0);
	dx = 0;
	y += dy * time;
	checkCollision(0, dy);
	dy = 0;
	speed = 0;
	sprite.setPosition(x + width / 2, y + height / 2);
}

void Player::checkCollision(float Dx, float Dy) {
	for (int i = y/map.sizeY(); i < (y + height) / map.sizeY(); ++i)
		for (int j = x / map.sizeX(); j < (x + width) / map.sizeX(); ++j) {
			if (map.getInfo(i, j) == "Wall") {
				if (Dy > 0) { y = i * map.sizeY() - height; dy = 0; }
				if (Dy < 0) { y = i * map.sizeY() + map.sizeY(); dy = 0; }
				if (Dx > 0) { x = j * map.sizeX() - width; dx = 0; }
				if (Dx < 0) { x = j * map.sizeX() + map.sizeX(); dx = 0; }
			}
		}
}
