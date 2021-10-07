#pragma once
#include "Entity.h"
#include "map.h"

class Player :
    public Entity
{
private:
    int Score;
    Map map;
    enum {left, right, up, down, stay} state;
private:
    void control();
    void checkCollision(float Dx, float Dy);
public:
    Player(sf::Image& image, float X, float Y, float WIDTH, float HEIGHT, sf::String Name, Map &Map);
    void Update(float time);
};

