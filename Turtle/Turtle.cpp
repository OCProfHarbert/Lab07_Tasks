#include <iostream>
#include <SFML/Graphics.hpp>
#include "Turtle.h"
using namespace std;
using namespace sf;

// Use this file to implement the member functions for class Turtle
// drawLine() is a utility function to draw a line from 
// the start to the end point.
// You can use it within your Turtle's forward() function. You will *call*
// this function, but you don't need to modify it.
void drawLine(RenderWindow& window, Vector2f start, Vector2f end)
{
	sf::Vertex p1;
	sf::Vertex p2;

	p1.position.x = start.x;
	p1.position.y = start.y;

	p2.position.x = end.x;
	p2.position.y = end.y;

	sf::Vertex line[] = { p1, p2 };

	window.draw(line, 2, sf::Lines);
}

