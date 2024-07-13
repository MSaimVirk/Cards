//#include<SFML\Graphics.hpp>
//#include<iostream>
//using namespace std;
//
//void disp(int x, int y, int r, int s, sf::RenderWindow& window, bool fu)
//{
//    if (fu == 1)
//    {
//        string path = "00.png";
//        sf::Texture img[52];
//        img[0].loadFromFile(path);
//        for (int i = 1; i < 52; i++)
//        {
//            if (i < 10)
//            {
//                path[0] = '0';
//                path[1] = static_cast<char>(i + '0');
//                img[i].loadFromFile(path);
//            }
//            else if (i < 20)
//            {
//                path[0] = '1';
//                path[1] = static_cast<char>(i - 10 + '0');
//                img[i].loadFromFile(path);
//            }
//            else if (i < 30)
//            {
//                path[0] = '2';
//                path[1] = static_cast<char>(i - 20 + '0');
//                img[i].loadFromFile(path);
//            }
//            else if (i < 40)
//            {
//                path[0] = '3';
//                path[1] = static_cast<char>(i - 30 + '0');
//                img[i].loadFromFile(path);
//            }
//            else if (i < 50)
//            {
//                path[0] = '4';
//                path[1] = static_cast<char>(i - 40 + '0');
//                img[i].loadFromFile(path);
//            }
//            else if (i < 52)
//            {
//                path[0] = '5';
//                path[1] = static_cast<char>(i - 50 + '0');
//                img[i].loadFromFile(path);
//            }
//        }
//
//        sf::Sprite spr[52];
//        for (int i = 0; i < 52; i++)
//        {
//            spr[i].setTexture(img[i]);
//            spr[i].setScale(.3, .3);
//        }
//        int cad;
//        if (r == 1 && s == 0)
//            cad = 0;
//        else if (r == 2 && s == 0)
//            cad = 1;
//        else if (r == 3 && s == 0)
//            cad = 2;
//        else if (r == 4 && s == 0)
//            cad = 3;
//        else if (r == 5 && s == 0)
//            cad = 4;
//        else if (r == 6 && s == 0)
//            cad = 5;
//        else if (r == 7 && s == 0)
//            cad = 6;
//        else if (r == 8 && s == 0)
//            cad = 7;
//        else if (r == 9 && s == 0)
//            cad = 8;
//        else if (r == 10 && s == 0)
//            cad = 9;
//        else if (r == 11 && s == 0)
//            cad = 10;
//        else if (r == 12 && s == 0)
//            cad = 11;
//        else if (r == 13 && s == 0)
//            cad = 12;
//        else if (r == 1 && s == 1)
//            cad = 13;
//        else if (r == 2 && s == 1)
//            cad = 14;
//        else if (r == 3 && s == 1)
//            cad = 15;
//        else if (r == 4 && s == 1)
//            cad = 16;
//        else if (r == 5 && s == 1)
//            cad = 17;
//        else if (r == 6 && s == 1)
//            cad = 18;
//        else if (r == 7 && s == 1)
//            cad = 19;
//        else if (r == 8 && s == 1)
//            cad = 20;
//        else if (r == 9 && s == 1)
//            cad = 21;
//        else if (r == 10 && s == 1)
//            cad = 22;
//        else if (r == 11 && s == 1)
//            cad = 23;
//        else if (r == 12 && s == 1)
//            cad = 24;
//        else if (r == 13 && s == 1)
//            cad = 25;
//        else if (r == 1 && s == 2)
//            cad = 26;
//        else if (r == 2 && s == 2)
//            cad = 27;
//        else if (r == 3 && s == 2)
//            cad = 28;
//        else if (r == 4 && s == 2)
//            cad = 29;
//        else if (r == 5 && s == 2)
//            cad = 30;
//        else if (r == 6 && s == 2)
//            cad = 31;
//        else if (r == 7 && s == 2)
//            cad = 32;
//        else if (r == 8 && s == 2)
//            cad = 33;
//        else if (r == 9 && s == 2)
//            cad = 34;
//        else if (r == 10 && s == 2)
//            cad = 35;
//        else if (r == 11 && s == 2)
//            cad = 36;
//        else if (r == 12 && s == 2)
//            cad = 37;
//        else if (r == 13 && s == 2)
//            cad = 38;
//        else if (r == 1 && s == 3)
//            cad = 39;
//        else if (r == 2 && s == 3)
//            cad = 40;
//        else if (r == 3 && s == 3)
//            cad = 41;
//        else if (r == 4 && s == 3)
//            cad = 42;
//        else if (r == 5 && s == 3)
//            cad = 43;
//        else if (r == 6 && s == 3)
//            cad = 44;
//        else if (r == 7 && s == 3)
//            cad = 45;
//        else if (r == 8 && s == 3)
//            cad = 46;
//        else if (r == 9 && s == 3)
//            cad = 47;
//        else if (r == 10 && s == 3)
//            cad = 48;
//        else if (r == 11 && s == 3)
//            cad = 49;
//        else if (r == 12 && s == 3)
//            cad = 50;
//        else if (r == 13 && s == 3)
//            cad = 51;
//
//
//        spr[cad].setPosition(x, y);
//
//        window.draw(spr[cad]);
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