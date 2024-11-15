#include <SFML/Graphics.hpp>

int main(){

  unsigned int width = 1300;
  unsigned int height = 200;

  sf::RenderWindow window(sf::VideoMode({1280, 720}), "SFML works!");
  
  // Define the rectangle's size
  float rectWidth = 400.f;
  float rectHeight = 100.f;
  float spacing = 50.f;


  // Create three rectangle shapes with the same size
    sf::RectangleShape rectangle1(sf::Vector2f(rectWidth, rectHeight));
    rectangle1.setFillColor(sf::Color(100, 100, 100));  // Set color to a darker gray
    rectangle1.setPosition((width - rectWidth) / 2, (height - 3 * rectHeight - 2 * spacing) / 2);  // Top rectangle

    sf::RectangleShape rectangle2(sf::Vector2f(rectWidth, rectHeight));
    rectangle2.setFillColor(sf::Color(100, 100, 100));  // Set color to a darker gray
    rectangle2.setPosition((width - rectWidth) / 2, (height - 3 * rectHeight - 2 * spacing) / 2 + rectHeight + spacing);  // Middle rectangle

    sf::RectangleShape rectangle3(sf::Vector2f(rectWidth, rectHeight));
    rectangle3.setFillColor(sf::Color(100, 100, 100));  // Set color to a darker gray
    rectangle3.setPosition((width - rectWidth) / 2, (height - 3 * rectHeight - 2 * spacing) / 2 + 2 * (rectHeight + spacing));  // Bottom rectangle

  while (window.isOpen()){
      sf::Event event;
      while (window.pollEvent(event)){
      if (event.type == sf::Event::Closed){
        window.close();
      }
    }
      window.clear(sf::Color::Black);

      // Draw the rectangle
      window.draw(rectangle1);
      window.draw(rectangle2);
      window.draw(rectangle3);

      // Display the contents of the window
      window.display();
  }
  return 0;
}