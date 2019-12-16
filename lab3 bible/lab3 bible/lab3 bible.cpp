#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(640, 640), "SFMLworks");

	sf::Image m_image;
	m_image.loadFromFile("image.jpg");

	sf::Texture m_ge;
	m_ge.loadFromImage(m_image);

	sf::Sprite shape;
	shape.setTexture(m_ge);


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}