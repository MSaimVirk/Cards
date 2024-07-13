//#pragma once
//#include <SFML/Graphics.hpp>
//#include<string>
//
//void disp(int x, int y, int no, int suit, sf::RenderWindow& window)
//{
//    sf::Font font;
//    font.loadFromFile("C:\\Windows\\Fonts\\arial.ttf"); // Replace "arial.ttf" with the path to your desired font file
//    sf::Text spade, club, diamond, heart, ih, is, ic, id, spade1, club1, diamond1, heart1, is1, ic1, id1, ih1;
//    std::u32string S = U"\u2660";
//    std::u32string D = U"\u2666";
//    std::u32string H = U"\u2665";
//    std::u32string C = U"\u2663";
//
//    sf::Text No, ino;
//    No.setFont(font);
//    ino.setFont(font);
//    ino.rotate(180);
//    No.setCharacterSize(30);
//    ino.setCharacterSize(30);
//    if (no == 1)
//    {
//        No.setString("A");
//        ino.setString("A");
//    }
//    else if (no == 2)
//    {
//        No.setString("2");
//        ino.setString("2");
//    }
//    else if (no == 3)
//    {
//        No.setString("3");
//        ino.setString("3");
//    }
//    else if (no == 4)
//    {
//        No.setString("4");
//        ino.setString("4");
//    }
//    else if (no == 5)
//    {
//        No.setString("5");
//        ino.setString("5");
//    }
//    else if (no == 6)
//    {
//        No.setString("6");
//        ino.setString("6");
//    }
//    else if (no == 7)
//    {
//        No.setString("7");
//        ino.setString("7");
//    }
//    else if (no == 8)
//    {
//        No.setString("8");
//        ino.setString("8");
//    }
//    else if (no == 9)
//    {
//        No.setString("9");
//        ino.setString("9");
//    }
//    else if (no == 10)
//    {
//        No.setString("10");
//        ino.setString("10");
//    }
//    else if (no == 11)
//    {
//        No.setString("J");
//        ino.setString("J");
//    }
//    else if (no == 12)
//    {
//        No.setString("Q");
//        ino.setString("Q");
//    }
//    else if (no == 13)
//    {
//        No.setString("K");
//        ino.setString("K");
//    }
//    No.setFillColor(sf::Color::Black);
//    ino.setFillColor(sf::Color::Black);
//
//    spade.setFont(font);
//    spade.setCharacterSize(40);
//    spade.setFillColor(sf::Color::Black);
//    spade.setString(sf::String::fromUtf32(S.begin(), S.end())); // Unicode code point for spade symbol
//    spade1.setFont(font);
//    spade1.setCharacterSize(90);
//    spade1.setFillColor(sf::Color::Black);
//    spade1.setString(sf::String::fromUtf32(S.begin(), S.end())); // Unicode code point for spade symbol
//    is.setFont(font);
//    is.setCharacterSize(90);
//    is.setFillColor(sf::Color::Black);
//    is.setString(sf::String::fromUtf32(S.begin(), S.end())); // Unicode code point for spade symbol
//    is.rotate(180);
//    is1.setFont(font);
//    is1.setCharacterSize(40);
//    is1.setFillColor(sf::Color::Black);
//    is1.setString(sf::String::fromUtf32(S.begin(), S.end())); // Unicode code point for spade symbol
//    is1.rotate(180);
//
//    club.setFont(font);
//    club.setCharacterSize(40);
//    club.setFillColor(sf::Color::Black);
//    club.setString(sf::String::fromUtf32(C.begin(), C.end())); // Unicode code point for club symbol
//    club1.setFont(font);
//    club1.setCharacterSize(90);
//    club1.setFillColor(sf::Color::Black);
//    club1.setString(sf::String::fromUtf32(C.begin(), C.end())); // Unicode code point for club symbol
//    ic.setFont(font);
//    ic.setCharacterSize(90);
//    ic.setFillColor(sf::Color::Black);
//    ic.setString(sf::String::fromUtf32(C.begin(), C.end())); // Unicode code point for club symbol
//    ic.rotate(180);
//    ic1.setFont(font);
//    ic1.setCharacterSize(40);
//    ic1.setFillColor(sf::Color::Black);
//    ic1.setString(sf::String::fromUtf32(C.begin(), C.end())); // Unicode code point for club symbol
//    ic1.rotate(180);
//
//    diamond.setFont(font);
//    diamond.setCharacterSize(40);
//    diamond.setFillColor(sf::Color::Red);
//    diamond.setString(sf::String::fromUtf32(D.begin(), D.end())); // Unicode code point for diamond symbol
//    diamond1.setFont(font);
//    diamond1.setCharacterSize(90);
//    diamond1.setFillColor(sf::Color::Red);
//    diamond1.setString(sf::String::fromUtf32(D.begin(), D.end())); // Unicode code point for diamond symbol
//    id.setFont(font);
//    id.setCharacterSize(90);
//    id.setFillColor(sf::Color::Red);
//    id.setString(sf::String::fromUtf32(D.begin(), D.end())); // Unicode code point for diamond symbol
//    id.rotate(180);
//    id1.setFont(font);
//    id1.setCharacterSize(40);
//    id1.setFillColor(sf::Color::Red);
//    id1.setString(sf::String::fromUtf32(D.begin(), D.end())); // Unicode code point for diamond symbol
//    id1.rotate(180);
//
//    heart.setFont(font);
//    heart.setCharacterSize(40);
//    heart.setFillColor(sf::Color::Red);
//    heart.setString(sf::String::fromUtf32(H.begin(), H.end())); // Unicode code point for heart symbol`f
//    heart1.setFont(font);
//    heart1.setCharacterSize(90);
//    heart1.setFillColor(sf::Color::Red);
//    heart1.setString(sf::String::fromUtf32(H.begin(), H.end())); // Unicode code point for heart symbol`f
//    ih.setFont(font);
//    ih.setCharacterSize(90);
//    ih.setFillColor(sf::Color::Red);
//    ih.setString(sf::String::fromUtf32(H.begin(), H.end())); // Unicode code point for heart symbol`f
//    ih.rotate(180);
//    ih1.setFont(font);
//    ih1.setCharacterSize(40);
//    ih1.setFillColor(sf::Color::Red);
//    ih1.setString(sf::String::fromUtf32(H.begin(), H.end())); // Unicode code point for heart symbol`f
//    ih1.rotate(180);
//
//    sf::Vector2f v(200, 300);
//    sf::RectangleShape shape(v);
//    shape.setFillColor(sf::Color::White);
//
//
//    if (suit == 0)
//    {
//        shape.setPosition(x + 100, 90);
//        window.draw(shape);
//        No.setPosition(x + 107, 90);
//        window.draw(No);
//        diamond.setPosition(x + 105, 108);
//        window.draw(diamond);
//        diamond1.setPosition(x + 166, 135);
//        window.draw(diamond1);
//        id.setPosition(x + 220, 335);
//        window.draw(id);
//        id1.setPosition(x + 293, 373);
//        window.draw(id1);
//        ino.setPosition(x + 291, 390);
//        window.draw(ino);
//    }
//    else if (suit == 1)
//    {
//        shape.setPosition(x + 100, 90);
//        window.draw(shape);
//        No.setPosition(x + 107, 90);
//        window.draw(No);
//        heart.setPosition(x + 105, 108);
//        window.draw(heart);
//        heart1.setPosition(x + 166, 135);
//        window.draw(heart1);
//        ih.setPosition(x + 220, 335);
//        window.draw(ih);
//        ih1.setPosition(x + 293, 373);
//        window.draw(ih1);
//        ino.setPosition(x + 291, 390);
//        window.draw(ino);
//    }
//    else if (suit == 2)
//    {
//        shape.setPosition(x + 100, 90);
//        window.draw(shape);
//        No.setPosition(x + 107, 90);
//        window.draw(No);
//        spade.setPosition(x + 105, 108);
//        window.draw(spade);
//        spade1.setPosition(x + 166, 135);
//        window.draw(spade1);
//        is.setPosition(x + 220, 335);
//        window.draw(is);
//        is1.setPosition(x + 293, 373);
//        window.draw(is1);
//        ino.setPosition(x + 291, 390);
//        window.draw(ino);
//    }
//    else if (suit == 3)
//    {
//        shape.setPosition(x + 100, 90);
//        window.draw(shape);
//        No.setPosition(x + 107, 90);
//        window.draw(No);
//        club.setPosition(x + 105, 108);
//        window.draw(club);
//        club1.setPosition(x + 166, 135);
//        window.draw(club1);
//        ic.setPosition(x + 220, 335);
//        window.draw(ic);
//        ic1.setPosition(x + 293, 373);
//        window.draw(ic1);
//        ino.setPosition(x + 291, 390);
//        window.draw(ino);
//    }
//}
//
////int main()
////{
////    disp(12, 12, 1, 1);
////    disp(12, 12, 1, 2);
////
////    return 0;
////}
