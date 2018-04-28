#include <stdlib.h>
#include <iostream>
#include "GameManager.h"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#define WINDOW_L 800
#define WINDOW_H 600


int main() {
	// construct the gameManager. There will only be this one instance during the execution of this program
	GameManager gameManager = GameManager();
	
	sf::RenderWindow window(sf::VideoMode(WINDOW_L, WINDOW_H), "GAMEEEE");

	// game loop: the program runs as long as the window is open
	while (window.isOpen()) {
		sf::Event event;
		// check all the window's events
		while (window.pollEvent(event)) {
			// close the window on close request
			if (event.type == sf::Event::Closed) window.close();
		}
		
		// clear the window with black color
		window.clear(sf::Color::Black);
		
		// here we will draw everything
		// gameManager.loop(&window);
		
		window.display();

	}
	return 0;
}
