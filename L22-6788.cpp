#include<SFML\Graphics.hpp>
#include<iostream>
using namespace std;

sf::Texture* img;

void loadTextures()
{
    img = new sf::Texture[52];
    string path = "00.png";
    img[0].loadFromFile(path);
    for (int i = 1; i < 52; i++)
    {
        if (i < 10)
        {
            path[0] = '0';
            path[1] = static_cast<char>(i + '0');
            img[i].loadFromFile(path);
        }
        else if (i < 20)
        {
            path[0] = '1';
            path[1] = static_cast<char>(i - 10 + '0');
            img[i].loadFromFile(path);
        }
        else if (i < 30)
        {
            path[0] = '2';
            path[1] = static_cast<char>(i - 20 + '0');
            img[i].loadFromFile(path);
        }
        else if (i < 40)
        {
            path[0] = '3';
            path[1] = static_cast<char>(i - 30 + '0');
            img[i].loadFromFile(path);
        }
        else if (i < 50)
        {
            path[0] = '4';
            path[1] = static_cast<char>(i - 40 + '0');
            img[i].loadFromFile(path);
        }
        else if (i < 52)
        {
            path[0] = '5';
            path[1] = static_cast<char>(i - 50 + '0');
            img[i].loadFromFile(path);
        }
    }
}

void disp(int x, int y, int r, int s, sf::RenderWindow& window, bool fu)
{
    if (fu == 1)
    {
        sf::Sprite spr[52];
        for (int i = 0; i < 52; i++)
        {
            spr[i].setTexture(img[i]);
            spr[i].setScale(.3, .3);
        }
        int cad = (s * 13) + r - 1;

        spr[cad].setPosition(x + 6, y);

        window.draw(spr[cad]);
    }
    else if (r == 0)
    {
        sf::Texture img;
        img.loadFromFile("54.png");
        sf::Sprite spr;
        spr.setTexture(img);
        spr.setScale(.185, .154);
        spr.setPosition(x, y);
        window.draw(spr);
    }
    else
    {
        sf::Texture img;
        img.loadFromFile("53.png");
        sf::Sprite spr;
        spr.setTexture(img);
        spr.setScale(.277, .266);
        spr.setPosition(x, y);
        window.draw(spr);
    }
}

struct  point
{
    int x;
    int y;
};

class PlayingCard
{
    int rank;
    int suit;
    char color;
    bool faceUp;
    bool top;
public:
    PlayingCard(int r = 0, int s = 0, bool f = 0)
    {
        rank = r;
        suit = s;
        if (suit == 0 || suit == 1)
        {
            color = 'R';
        }
        else
        {
            color = 'B';
        }
        faceUp = f;
    }
    const static int Diamond = 0;
    const static int Heart = 1;
    const static int Spade = 2;
    const static int Club = 3;

    void display(int x, int y, sf::RenderWindow& window)
    {
        /*if (faceUp)
        {
            cout << rank << " of " << suit << endl;
        }
        else
        {
            cout << "--- of ---" << endl;
        }*/
        disp(x, y, rank, suit, window, faceUp);
    }

    bool isFaceUp()
    {
        return faceUp;
    }
    void setFaceUp(bool a)
    {
        faceUp = a;
    }
    bool isTop()
    {
        return top;
    }
    void setTop(bool a)
    {
        top = a;
    }
    int getSuit()
    {
        return suit;
    }
    char getColor()
    {
        return color;
    }
    int getRank()
    {
        return rank;
    }
};

class PileOfCards
{
    point startPt;
    point endPt;
    int top;
    int size;
    PlayingCard* pile;
public:
    PileOfCards(int s)
    {
        top = -1;
        size = s;
        pile = new PlayingCard[size];
    }
    ~PileOfCards()
    {
        delete[] pile;
    }
    void add(PlayingCard card)
    {
        if (top > -1)
        {
            pile[top].setTop(0);
            pile[top].setFaceUp(0);
        }
        top++;
        if (top < size)
        {
            pile[top] = card;
            pile[top].setTop(1);
            pile[top].setFaceUp(1);
        }
        else
        {
            top--;
            cout << "Pile of Cards is full.\n";
        }
    }
    int getTop()
    {
        return top;
    }
    void setStartPt(int x, int y)
    {
        startPt.x = x;
        startPt.y = y;
    }
    void setEndPt(int x, int y)
    {
        endPt.x = x;
        endPt.y = y;
    }
    point getStartPt()
    {
        return startPt;
    }
    point getEndPt()
    {
        return endPt;
    }
    PlayingCard remove()
    {
        top--;
        return pile[top + 1];
    }
    PileOfCards& operator = (const PileOfCards& poc)
    {
        delete[]pile;
        top = poc.top;
        size = poc.size;
        startPt = poc.startPt;
        endPt = poc.endPt;
        pile = new PlayingCard[size];
        for (int i = 0; i < size; i++)
        {
            pile[i] = poc.pile[i];
        }
        return *this;
    }
    PlayingCard viewCard(int i)
    {
        return pile[i];
    }
    void simpleDisplay(int x, int y, sf::RenderWindow& window)
    {
        startPt.x = x;
        startPt.y = y;
        if (isEmpty() == 1)
        {
            disp(x, y, 0, 0, window, 0);
        }
        pile[top].display(startPt.x, startPt.y, window);
    }
    void cascadingDisplay(int x, int y, sf::RenderWindow& window)
    {
        startPt.x = x;
        startPt.y = y;
        int z = 0;
        for (int i = 0; i < top; i++)
        {
            pile[i].display(startPt.x, startPt.y + z, window);
            z = z + 38;
        }
        pile[top].display(startPt.x, startPt.y + z, window);
    }
    PlayingCard peek()
    {
        return pile[top];
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            cout << "The Pile is empty.\n";
            return 1;
        }
        else
        {
            return 0;
        }
    }
    bool isFull()
    {
        if (top == (size - 1))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

class Deck
{
private:
    PlayingCard* deck[52];
    int size;
public:
    Deck()
    {
        size = 52;
        int j = 0;
        for (int i = 0; i < 13; i++)
        {
            deck[j] = new PlayingCard(i + 1, 0, 1);
            j++;
        }
        for (int i = 0; i < 13; i++)
        {
            deck[j] = new PlayingCard(i + 1, 1, 1);
            j++;
        }
        for (int i = 0; i < 13; i++)
        {
            deck[j] = new PlayingCard(i + 1, 2, 1);
            j++;
        }
        for (int i = 0; i < 13; i++)
        {
            deck[j] = new PlayingCard(i + 1, 3, 1);
            j++;
        }
    }
    ~Deck()
    {
        for (int i = 0; i < size; i++)
        {
            delete deck[i];
        }
    }
    int getSize()
    {
        return size;
    }
    bool IsEmpty()
    {
        if (size <= 0)
        {
            cout << "The deck is now Empty.\n";
            return 1;
        }
        else
        {
            return 0;
        }
    }
    PlayingCard Remove(int i)
    {
        PlayingCard temp = *(deck[i]);
        for (int k = i; k < size - 1; k++)
        {
            deck[k] = deck[k + 1];
        }
        size--;
        return temp;
    }
};

class Solitaire
{
private:
    Deck deckofCards;
    PileOfCards stock;
    PileOfCards waste;
    PileOfCards home[4];
    PileOfCards playingPile[7];
    //ConsoleFunctions cf;
public:

    Solitaire() :deckofCards(), stock(52), waste(52), home{ 13,13,13,13 }, playingPile{ 28,28,28,28,28,28,28 } {}

    void Shuffle()
    {
        srand(time(0));
        int i;
        while (!deckofCards.IsEmpty())
        {
            i = rand() % deckofCards.getSize();
            PlayingCard c = deckofCards.Remove(i);
            c.setFaceUp(false);
            stock.add(c);
        }
    }
    void dealToPlayingPiles()
    {
        PlayingCard a = stock.remove();
        playingPile[0].add(a);
        for (int i = 0; i < 2; i++)
        {
            PlayingCard a = stock.remove();
            playingPile[1].add(a);
        }
        for (int i = 0; i < 3; i++)
        {
            PlayingCard a = stock.remove();
            playingPile[2].add(a);
        }
        for (int i = 0; i < 4; i++)
        {
            PlayingCard a = stock.remove();
            playingPile[3].add(a);
        }
        for (int i = 0; i < 5; i++)
        {
            PlayingCard a = stock.remove();
            playingPile[4].add(a);
        }
        for (int i = 0; i < 6; i++)
        {
            PlayingCard a = stock.remove();
            playingPile[5].add(a);
        }
        for (int i = 0; i < 7; i++)
        {
            PlayingCard a = stock.remove();
            playingPile[6].add(a);
        }
    }
    void DisplayGame(sf::RenderWindow& window)
    {
        stock.simpleDisplay(150, 50, window);
        waste.simpleDisplay(350, 50, window);
        int a = 0;
        for (int i = 0; i < 4; i++)
        {
            home[i].simpleDisplay(a + 750, 50, window);
            a = a + 200;
        }
        a = 0;
        for (int i = 0; i < 7; i++)
        {
            playingPile[i].cascadingDisplay(150 + a, 360, window);
            a = a + 200;
        }
    }
    ~Solitaire()
    {

    }
};


///////////////////////////////////////////////////////////////main of simple project///
//int main()
//{
//    //PlayingCard A(3, PlayingCard::Spade);
//    //PlayingCard B(2, PlayingCard::Spade);
//    //PlayingCard C(4, PlayingCard::Heart);
//    //PlayingCard D(5, PlayingCard::Club);
//    //PlayingCard E(3, PlayingCard::Diamond);
//    //PlayingCard temp(3, PlayingCard::Heart);
//    //PileOfCards pile1(5);
//    ///****** Adding cards in pile ********/
//    //pile1.add(A);
//    //pile1.add(B);
//    //pile1.add(C);
//    //pile1.add(D);
//    //pile1.add(E);
//    ///*Note for Testing:
//    //The 6th card temp, in the statement below, should not be added to the
//    //pile, as at this point pile is full.
//    //Write a statement in IsFull function to display an error message if pile is
//    //full.
//    //*/
//    //pile1.add(temp);
//    
//
//    Deck D1;
//    PlayingCard A(0, 0);
//    
//    sf::RenderWindow window(sf::VideoMode(1900, 1000), "Soliture");
//    loadTextures();
//        while (window.isOpen())
//        {
//            sf::Event event;
//            while (window.pollEvent(event))
//            {
//                if (event.type == sf::Event::Closed)
//                {
//                    window.close();
//                }
//            }
//            window.clear();
//            sf::Texture im;
//            sf::Sprite bck;
//            im.loadFromFile("52.png");
//            bck.setTexture(im);
//            bck.setScale(7, 7);
//            window.draw(bck);
//
//            ///****** Removing Cards from pile *****/
//            //temp = pile1.remove();
//            ///* Here you will need to see which card is removed from the pile.
//            //For this you need to write display function for class PlayingCard to
//            //view a card. */
//            //temp.display(0, 0, window);
//
//            ///* According to this scenario, the above statement should display the card
//            //3 of Diamond, as this is the card removed from the top of the pile*/
//            //temp = pile1.remove(); //5 of Club should be removed
//            //temp.display(0, 10, window);
//            //temp = pile1.remove(); //4 of Heart should be removed
//            //temp.display(0, 20, window);
//            //temp = pile1.remove(); //2 of Spade should be removed
//            //temp.display(0, 30, window);
//            //temp = pile1.remove(); //3 of Spade should be removed
//            //temp.display(0, 40, window);
//            //temp = pile1.remove(); //Now the pile is empty
//            ///*Write a print statement in IsEmpty funtion to display an error message when
//            //pile is empty*/
//
//            //int y = 0;
//            //A = D1.Remove(0);
//            //A.display(0, y, window);
//            //y = y + 500;
//
//            //A = D1.Remove(0);
//            //A.display(0, 10, window);
//            //y = y + 500;
//            //A = D1.Remove(0);
//            //A.display(0, 20, window); // three cards removed
//            //y = y + 500;
//            //while (!D1.IsEmpty())
//            //{
//            //    A = D1.Remove(0);
//            //    A.display(0, y, window);
//            //    y = y + 500;
//            //}
//
//            window.display();
//        }
//}

//int main()
//{
//    Solitaire S;
//    S.Shuffle();
//    S.dealToPlayingPiles();
//
//    sf::RenderWindow window(sf::VideoMode(1900, 1000), "Soliture");
//    loadTextures();
//    while (window.isOpen())
//    {
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//            {
//                window.close();
//            }
//        }
//        window.clear();
//        sf::Texture im;
//        sf::Sprite bck;
//        im.loadFromFile("52.png");
//        bck.setTexture(im);
//        bck.setScale(7, 7);
//        window.draw(bck);
//
//        S.DisplayGame(window);
//
//        window.display();
//    }
//
//    return 0;
//}