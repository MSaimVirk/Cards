//#include <SFML/Graphics.hpp>
//
//int main()
//{
//    sf::RenderWindow window(sf::VideoMode(1600, 900), "SFML works!");
//    sf::Vector2f v(100, 150);
//    sf::RectangleShape shape(v);
//    shape.setFillColor(sf::Color::White);
//
//    while (window.isOpen())
//    {
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//        window.clear();
//        window.draw(shape);
//        window.display();
//    }
//
//    return 0;
//}