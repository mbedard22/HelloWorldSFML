//Name: Matthew Bedard
#include <SFML/Graphics.hpp>

int main()	
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Red);

    sf::Texture texture;
    if(!texture.loadFromFile("sprite.png"))
	 return EXIT_FAILURE;
    
    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setPosition(0,0);
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
	    if (event.type == sf::Event::KeyPressed){
		    sprite.move(100, 50);
	    	    sprite.setColor(sf::Color::Red);
	    }
	
        window.clear();
        window.draw(shape);
	window.draw(sprite);
	window.display();
    }
    }

    return 0;
}
