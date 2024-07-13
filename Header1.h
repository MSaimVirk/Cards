//#pragma once
//#include<SFML\Graphics.hpp>
//#include<iostream>
//using namespace std;
//
//sf::Texture *img;
//
//void loadTextures()
//{
//    img = new sf::Texture[52];
//    string path = "00.png";
//    img[0].loadFromFile(path);
//    for (int i = 1; i < 52; i++)
//    {
//        if (i < 10)
//        {
//            path[0] = '0';
//            path[1] = static_cast<char>(i + '0');
//            img[i].loadFromFile(path);
//        }
//        else if (i < 20)
//        {
//            path[0] = '1';
//            path[1] = static_cast<char>(i - 10 + '0');
//            img[i].loadFromFile(path);
//        }
//        else if (i < 30)
//        {
//            path[0] = '2';
//            path[1] = static_cast<char>(i - 20 + '0');
//            img[i].loadFromFile(path);
//        }
//        else if (i < 40)
//        {
//            path[0] = '3';
//            path[1] = static_cast<char>(i - 30 + '0');
//            img[i].loadFromFile(path);
//        }
//        else if (i < 50)
//        {
//            path[0] = '4';
//            path[1] = static_cast<char>(i - 40 + '0');
//            img[i].loadFromFile(path);
//        }
//        else if (i < 52)
//        {
//            path[0] = '5';
//            path[1] = static_cast<char>(i - 50 + '0');
//            img[i].loadFromFile(path);
//        }
//    }
//}
//
//void disp(int x, int y, int r, int s, sf::RenderWindow& window, bool fu)
//{
//    if (fu == 1)
//    {
//        sf::Sprite spr[52];
//        for (int i = 0; i < 52; i++)
//        {
//            spr[i].setTexture(img[i]);
//            spr[i].setScale(.3, .3);
//        }
//        int cad = (s * 13) + r - 1;
//
//        spr[cad].setPosition(x + 6, y);
//
//        window.draw(spr[cad]);
//    }
//    else if (r == 0)
//    {
//        sf::Texture img;
//        img.loadFromFile("54.png");
//        sf::Sprite spr;
//        spr.setTexture(img);
//        spr.setScale(.185, .154);
//        spr.setPosition(x, y);
//        window.draw(spr);
//    }
//    else 
//    {
//        sf::Texture img;
//        img.loadFromFile("53.png");
//        sf::Sprite spr;
//        spr.setTexture(img);
//        spr.setScale(.277, .266);
//        spr.setPosition(x, y);
//        window.draw(spr);
//    }
//}
//
//
////void disp(int x, int y, int r, int s, sf::RenderWindow& window, bool fu)
////{
////    if (fu)
////    {
////        std::string path = "00.png";
////        sf::Texture img[52];
////        img[0].loadFromFile(path);
////        for (int i = 1; i < 52; i++)
////        {
////            if (i < 10)
////                path[1] = static_cast<char>(i + '0');
////            else if (i < 20)
////                path[0] = '1';
////            else if (i < 30)
////                path[0] = '2';
////            else if (i < 40)
////                path[0] = '3';
////            else if (i < 50)
////                path[0] = '4';
////            else if (i < 52)
////                path[0] = '5';
////
////            img[i].loadFromFile(path);
////        }
////
////        sf::Sprite spr[52];
////        for (int i = 0; i < 52; i++)
////        {
////            spr[i].setTexture(img[i]);
////            spr[i].setScale(0.3, 0.3);
////        }
////
////        int cad = (r - 1) * 4 + s;
////        spr[cad].setPosition(x, y);
////        window.draw(spr[cad]);
////    }
////    else
////    {
////        sf::Texture img;
////        img.loadFromFile("53.png");
////        sf::Sprite spr;
////        spr.setTexture(img);
////        spr.setScale(0.277, 0.266);
////        spr.setPosition(x, y);
////        window.draw(spr);
////    }
////}
//
//
////int main()
////{
////    sf::RenderWindow window(sf::VideoMode(1900, 1000), "Soliture");
////    while (window.isOpen())
////    {
////        sf::Event event;
////        while (window.pollEvent(event))
////        {
////            if (event.type == sf::Event::Closed)
////            {
////                window.close();
////            }
////        }
////        //window.clear(sf::Color::White);
////        window.clear();
////        sf::Texture im;
////        sf::Sprite bck;
////        im.loadFromFile("52.png");
////        bck.setTexture(im);
////        bck.setScale(7, 7);
////        window.draw(bck);
////
////        disp(100, 100, 13, 1, window, 1);
////        disp(94.5, 290, 13, 0, window, 0);
////
////        window.display();
////    }
////}