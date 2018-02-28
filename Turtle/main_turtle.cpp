#include <iostream>
#include <SFML/Graphics.hpp>
#include "Turtle.h"
using namespace std;
using namespace sf;

// THIS FILE WON'T BUILD/RUN UNTIL YOU DEFINE YOUR TURTLE CLASS
// DO NOT CHANGE ANY CODE IN THIS FILE UNTIL YOU GET TO PART B OF THE TASK

int main()
{
	const int WINDOW_WIDTH = 800;
	const int WINDOW_HEIGHT = 600;

	sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "polyspirals!");
	// Limit the framerate to 60 frames per second
	window.setFramerateLimit(60);

	
	float midX = window.getSize().x / 2.0f;
	float midY = window.getSize().y / 2.0f;
	Vector2f startPos = { midX, midY };
	Turtle turtle(startPos);	// <======= LOOK! calls your Turtle constructor
	

	const int NUM_ITERATIONS = 100;
	const int INCREMENT = 2;
	float length = 5;
	float angle = 45;			// <======= LOOK! change this value in part (B)
	for (int i = 0; i < NUM_ITERATIONS; i++)
	{
		turtle.forward(window, length);		// <======== LOOK! calls to forward, turn
		turtle.turn(angle);
		length += INCREMENT;
	}

	window.display();

	// since we're not animating, we just need the following loop to 
	// handle the 'close' event
	while (window.isOpen())
	{
		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (window.pollEvent(event))
		{
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				window.close();
		}

	}
	

	return 0;
}