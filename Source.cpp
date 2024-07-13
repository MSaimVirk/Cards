//#include<iostream>
//#include"Header.h"
//using namespace std;
//
//class PlayingCard
//
//{
//    int rank;
//    int suit;
//    char color;
//public:
//    PlayingCard(int r = 0, int s = 0)
//    {
//        rank = r;
//        suit = s;
//        if (suit == 0 || suit == 1)
//        {
//            color = 'R';
//        }
//        else
//        {
//            color = 'B';
//        }
//    }
//    const static int Diamond = 0;
//    const static int Heart = 1;
//    const static int Spade = 2;
//    const static int Club = 3;
//
//    void display(int x, int y, sf::RenderWindow& window)
//    {
//        disp(x, y, rank, suit, window);
//    }
//};
//
//class PileOfCards
//{
//    int top;
//    int size;
//    PlayingCard* pile;
//public:
//    PileOfCards(int s)
//    {
//        top = -1;
//        size = s;
//        pile = new PlayingCard[size];
//    }
//    ~PileOfCards()
//    {
//        delete[]pile;
//    }
//    void add(PlayingCard card)
//    {
//        top++;
//        if (top < size)
//        {
//            pile[top] = card;
//        }
//        else
//        {
//            top--;
//            cout << "Pile of Cards is full.\n";
//        }
//    }
//    PlayingCard remove()
//    {
//        top--;
//        return pile[top + 1];
//    }
//    PlayingCard peek()
//    {
//        return pile[top];
//    }
//    bool isEmpty()
//    {
//        if (top == -1)
//        {
//            cout << "The Pile is empty.\n";
//            return 1;
//        }
//        else
//        {
//            return 0;
//        }
//    }
//    bool isFull()
//    {
//        if (top == (size - 1))
//        {
//            return 1;
//        }
//        else
//        {
//            return 0;
//        }
//    }
//};
//
//class Deck
//{
//private:
//    PlayingCard* deck[52];
//    int size;
//public:
//    Deck()
//    {
//        size = 52;
//        int j = 0;
//        for (int i = 0; i < 13; i++)
//        {
//            deck[j] = new PlayingCard(i + 1, 0);
//            j++;
//        }
//        for (int i = 0; i < 13; i++)
//        {
//            deck[j] = new PlayingCard(i + 1, 1);
//            j++;
//        }
//        for (int i = 0; i < 13; i++)
//        {
//            deck[j] = new PlayingCard(i + 1, 2);
//            j++;
//        }
//        for (int i = 0; i < 13; i++)
//        {
//            deck[j] = new PlayingCard(i + 1, 3);
//            j++;
//        }
//    }
//    ~Deck()
//    {
//        for (int i = 0; i < size; i++)
//        {
//            delete deck[i];
//        }
//    }
//    int getSize()
//    {
//        return size;
//    }
//    bool IsEmpty()
//    {
//        if (size <= 0)
//        {
//            cout << "The deck is now Empty.\n";
//            return 1;
//        }
//        else
//        {
//            return 0;
//        }
//    }
//    PlayingCard Remove(int i)
//    {
//        PlayingCard temp = *(deck[i]);
//        for (int k = i; k < size - 1; k++)
//        {
//            deck[k] = deck[k + 1];
//        }
//        size--;
//        return temp;
//    }
//};
//
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
//    ///****** Removing Cards from pile *****/
//    //temp = pile1.remove();
//    ///* Here you will need to see which card is removed from the pile.
//    //For this you need to write display function for class PlayingCard to
//    //view a card. */
//    //temp.display(0, 0);
//
//    ///* According to this scenario, the above statement should display the card
//    //3 of Diamond, as this is the card removed from the top of the pile*/
//    //temp = pile1.remove(); //5 of Club should be removed
//    //temp.display(0, 10);
//    //temp = pile1.remove(); //4 of Heart should be removed
//    //temp.display(0, 20);
//    //temp = pile1.remove(); //2 of Spade should be removed
//    //temp.display(0, 30);
//    //temp = pile1.remove(); //3 of Spade should be removed
//    //temp.display(0, 40);
//    //temp = pile1.remove(); //Now the pile is empty
//    ///*Write a print statement in IsEmpty funtion to display an error message when
//    //pile is empty*/
//
//
//    Deck D1;
//    PlayingCard A(0, 0);
//
//    sf::RenderWindow window(sf::VideoMode(1600, 900), "Card Suit Example");
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
//        //window.clear(sf::Color::White);
//        window.clear();
//        int y = 0;
//        A = D1.Remove(0);
//        A.display(0, y, window);
//        y = y + 220;
//
//        A = D1.Remove(0);
//        A.display(0, 10, window);
//        y = y + 220;
//        A = D1.Remove(0);
//        A.display(0, 20, window); // three cards removed
//        y = y + 220;
//        while (!D1.IsEmpty())
//        {
//            A = D1.Remove(0);
//            A.display(0, y, window);
//            y = y + 220;
//        }
//        window.display();
//    }
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
////
////
////
////
////#include<iostream>
////using namespace std;
////
////struct  point
////{
////    int x;
////    int y;
////};
////
////class PlayingCard
////{
////    int rank;
////    int suit;
////    char color;
////    bool faceUp;
////    bool top;
////public:
////    PlayingCard(int r = 0, int s = 0)
////    {
////        rank = r;
////        suit = s;
////        if (suit == 0 || suit == 1)
////        {
////            color = 'R';
////        }
////        else
////        {
////            color = 'B';
////        }
////    }
////    const static int Diamond = 0;
////    const static int Heart = 1;
////    const static int Spade = 2;
////    const static int Club = 3;
////
////    void display(int x, int y)
////    {
////        cout << rank << " of " << suit << endl;
////    }
////
////    bool isFaceUp()
////    {
////        return faceUp;
////    }
////    void setFaceUp(bool a)
////    {
////        faceUp = a;
////    }
////    bool isTop()
////    {
////        return top;
////    }
////    void setTop(bool a)
////    {
////        top = a;
////    }
////    int getSuit()
////    {
////        return suit;
////    }
////    char getColor()
////    {
////        return color;
////    }
////    int getRank()
////    {
////        return rank;
////    }
////};
////
////class PileOfCards
////{
////    point startPt;
////    point endPt;
////    int top;
////    int size;
////    PlayingCard* pile;
////public:
////    PileOfCards(int s)
////    {
////        top = -1;
////        size = s;
////        pile = new PlayingCard[size];
////    }
////    ~PileOfCards()
////    {
////        delete[] pile;
////    }
////    void add(PlayingCard card)
////    {
////        if (top > -1)
////        {
////            pile[top].setTop(0);
////        }
////        top++;
////        if (top < size)
////        {
////            pile[top] = card;
////            pile[top].setTop(1);
////        }
////        else
////        {
////            top--;
////            cout << "Pile of Cards is full.\n";
////        }
////    }
////    int getTop()
////    {
////        return top;
////    }
////    void setStartPt(int x, int y)
////    {
////        startPt.x = x;
////        startPt.y = y;
////    }
////    void setEndPt(int x, int y)
////    {
////        endPt.x = x;
////        endPt.y = y;
////    }
////    point getStartPt()
////    {
////        return startPt;
////    }
////    point getEndPt()
////    {
////        return endPt;
////    }
////    PlayingCard remove()
////    {
////        top--;
////        return pile[top + 1];
////    }
////    PileOfCards& operator = (const PileOfCards& poc)
////    {
////        delete[]pile;
////        top = poc.top;
////        size = poc.size;
////        startPt = poc.startPt;
////        endPt = poc.endPt;
////        pile = new PlayingCard[size];
////        for (int i = 0; i < size; i++)
////        {
////            pile[i] = poc.pile[i];
////        }
////        return *this;
////    }
////    PlayingCard viewCard(int i)
////    {
////        return pile[i];
////    }
////    void simpleDisplay()
////    {
////        pile[top].display(startPt.x, startPt.y);
////    }
////    void cascadingDisplay()
////    {
////        int z = 0;
////        for (int i = 0; i < size - 1; i++)
////        {
////            pile[i].display(startPt.x + z, startPt.y + z);
////            z = z + 50;
////        }
////    }
////    PlayingCard peek()
////    {
////        return pile[top];
////    }
////    bool isEmpty()
////    {
////        if (top == -1)
////        {
////            cout << "The Pile is empty.\n";
////            return 1;
////        }
////        else
////        {
////            return 0;
////        }
////    }
////    bool isFull()
////    {
////        if (top == (size - 1))
////        {
////            return 1;
////        }
////        else
////        {
////            return 0;
////        }
////    }
////};
////
////class Deck
////{
////private:
////    PlayingCard* deck[52];
////    int size;
////public:
////    Deck()
////    {
////        size = 52;
////        int j = 0;
////        for (int i = 0; i < 13; i++)
////        {
////            deck[j] = new PlayingCard(i + 1, 0);
////            j++;
////        }
////        for (int i = 0; i < 13; i++)
////        {
////            deck[j] = new PlayingCard(i + 1, 1);
////            j++;
////        }
////        for (int i = 0; i < 13; i++)
////        {
////            deck[j] = new PlayingCard(i + 1, 2);
////            j++;
////        }
////        for (int i = 0; i < 13; i++)
////        {
////            deck[j] = new PlayingCard(i + 1, 3);
////            j++;
////        }
////    }
////    ~Deck()
////    {
////        for (int i = 0; i < size; i++)
////        {
////            delete deck[i];
////        }
////    }
////    int getSize()
////    {
////        return size;
////    }
////    bool IsEmpty()
////    {
////        if (size <= 0)
////        {
////            cout << "The deck is now Empty.\n";
////            return 1;
////        }
////        else
////        {
////            return 0;
////        }
////    }
////    PlayingCard Remove(int i)
////    {
////        PlayingCard temp = *(deck[i]);
////        for (int k = i; k < size - 1; k++)
////        {
////            deck[k] = deck[k + 1];
////        }
////        size--;
////        return temp;
////    }
////};
////
////class Solitaire
////{
////private:
////    Deck deckofCards;
////    PileOfCards stock;
////    PileOfCards waste;
////    PileOfCards home[4];
////    PileOfCards playingPile[7];
////    //ConsoleFunctions cf;
////public:
////    Solitaire();                //////////////////////////////////////////////
////    void Shuffle();             //////////////////////////////////////////////
////    void dealToPlayingPiles();  //////////////////////////////////////////////
////    void DisplayGame();         //////////////////////////////////////////////
////    ~Solitaire();               //////////////////////////////////////////////
////};
////
////int main()
////{
////    //PlayingCard A(3, PlayingCard::Spade);
////    //PlayingCard B(2, PlayingCard::Spade);
////    //PlayingCard C(4, PlayingCard::Heart);
////    //PlayingCard D(5, PlayingCard::Club);
////    //PlayingCard E(3, PlayingCard::Diamond);
////    //PlayingCard temp(3, PlayingCard::Heart);
////    //PileOfCards pile1(5);
////    ///****** Adding cards in pile ********/
////    //pile1.add(A);
////    //pile1.add(B);
////    //pile1.add(C);
////    //pile1.add(D);
////    //pile1.add(E);
////    ///*Note for Testing:
////    //The 6th card temp, in the statement below, should not be added to the
////    //pile, as at this point pile is full.
////    //Write a statement in IsFull function to display an error message if pile is
////    //full.
////    //*/
////    //pile1.add(temp);
////    ///****** Removing Cards from pile *****/
////    //temp = pile1.remove();
////    ///* Here you will need to see which card is removed from the pile.
////    //For this you need to write display function for class PlayingCard to
////    //view a card. */
////    //temp.display(0, 0);
////
////    ///* According to this scenario, the above statement should display the card
////    //3 of Diamond, as this is the card removed from the top of the pile*/
////    //temp = pile1.remove(); //5 of Club should be removed
////    //temp.display(0, 10);
////    //temp = pile1.remove(); //4 of Heart should be removed
////    //temp.display(0, 20);
////    //temp = pile1.remove(); //2 of Spade should be removed
////    //temp.display(0, 30);
////    //temp = pile1.remove(); //3 of Spade should be removed
////    //temp.display(0, 40);
////    //temp = pile1.remove(); //Now the pile is empty
////    ///*Write a print statement in IsEmpty funtion to display an error message when
////    //pile is empty*/
////
////
////    Deck D1;
////    PlayingCard A(0, 0);
////
////        int y = 0;
////        A = D1.Remove(0);
////        A.display(0, y);
////        y = y + 220;
////
////        A = D1.Remove(0);
////        A.display(0, 10);
////        y = y + 220;
////        A = D1.Remove(0);
////        A.display(0, 20); // three cards removed
////        y = y + 220;
////        while (!D1.IsEmpty())
////        {
////            A = D1.Remove(0);
////            A.display(0, y);
////            y = y + 220;
////        }
////
////    return 0;
////}