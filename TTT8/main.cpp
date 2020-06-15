#include <iostream>
using namespace std;

// Checks to see if player X won
bool XWin(int A, int B, int C, int X){
    return (A == B) && (B == C) && (C == X);
}
// Checks to see if player O won
bool OWin(int A, int B, int C, int O){
    return (A == B) && (B == C) && (C == O);
}

//Checks to see if Win condition exists
bool Win(int A, int B, int C){
    return (A == B) && (B == C);
}

int main() {

    //Variables for win condition.
    int A = 3;
    int B = 4;
    int C = 5;
    int D = 6;
    int E = 7;
    int F = 8;
    int G = 9;
    int H = 10;
    int I = 11;
    int X = 12;
    int O = 13;
    int index = 0;
    int source = 0;

    //Simplifing the win condition function
   bool one = !Win(A, B, C);
   bool two = !Win(D, E, F);
   bool three = !Win(G, H, I);
   bool four = !Win(A, D, G);
   bool five = !Win(B, E, H);
   bool six = !Win(C, F, I);
   bool seven = !Win(A, E, I);
   bool eight = !Win(C, E, G);

     //variables used for setting up the game board for the viewer
    string a, b, c, d, e, f, g, h, i, x, o, player1, player2;
    a = "1";
    b = "2";
    c = "3";
    d = "4";
    e = "5";
    f = "6";
    g = "7";
    h = "8";
    i = "9";
    x = "o";
    o = "10";

    //Game begins
    cout << "Welcome to Tic-Tac-Toe!" << endl;

    cout << endl;

    cout << "Player 1, what is your name?" << endl;

    cin >> player1;

    cout << "Player 2, what is your name?" << endl;

    cin >> player2;

    cout << endl;

    //Tic-Tac-Toe board.
    cout << " " << a << " | " << b << " | " << c << endl;
    cout << "-----------" << endl;
    cout << " " << d << " | " << e << " | " << f << endl;
    cout << "-----------" << endl;
    cout << " " << g << " | " << h << " | " << i << endl;

    cout << endl;

    //Checks every valid play to see if a win or draw condition exists.
    do
    {
        //Determines which player goes next. Player one is 'index' and Player 2 is 'source'.
        if (index > source) {

            //Prevents player from making an invalid play.
            do {
                cout << " " << player2 << ", please select a location to place an O on the board: ";

                cout << endl;

                cin >> x;

                cout << endl;

                //Places an O where the player selected on game board
                if (x == "1") {

                    //Prevents player O from playing where player X already has.
                    if (A == 12){
                        cout << "Try again.";
                    }
                    else {
                        a = "O";
                        A = 13;
                        break;
                    }
                }
                else if (x == "2") {
                    if (B == 12){
                        cout << "Try again.";
                    }
                    else {
                        b = "O";
                        B = 13;
                        break;
                    }
                }
                else if (x == "3") {
                    if(C == 12){
                        cout << "Try again.";
                    }
                    else {
                        c = "O";
                        C = 13;
                        break;
                    }
                }
                else if (x == "4") {
                    if (D == 12) {
                        cout << "Try again.";
                    } else {
                        d = "O";
                        D = 13;
                        break;
                    }
                }
                else if (x == "5") {
                    if (E == 12) {
                        cout << "Try again.";
                    } else {
                        e = "O";
                        E = 13;
                        break;
                    }
                }
                else if (x == "6") {
                    if (F == 12) {
                        cout << "Try again.";
                    } else {
                        f = "O";
                        F = 13;
                        break;
                    }
                }
                else if (x == "7") {
                    if (G == 12) {
                        cout << "Try again.";
                    } else {
                        g = "O";
                        G = 13;
                        break;
                    }
                }
                else if (x == "8") {
                    if (H == 12) {
                        cout << "Try again.";
                    } else {
                        h = "O";
                        H = 13;
                        break;
                    }
                }
                else if (x == "9") {
                    if (I == 12) {
                        cout << "Try again.";
                    } else {
                        i = "O";
                        I = 13;
                        break;
                    }
                }

                cout << "Invalid selection.";

                cout << endl;
                cout << endl;

                cout << " " << a << " | " << b << " | " << c << endl;
                cout << "-----------" << endl;
                cout << " " << d << " | " << e << " | " << f << endl;
                cout << "-----------" << endl;
                cout << " " << g << " | " << h << " | " << i << endl;

                cout << endl;

            } while (true);

            cout << endl;

            cout << " " << a << " | " << b << " | " << c << endl;
            cout << "-----------" << endl;
            cout << " " << d << " | " << e << " | " << f << endl;
            cout << "-----------" << endl;
            cout << " " << g << " | " << h << " | " << i << endl;

            cout << endl;

            //increments source by 1 allowing playing X to go next.
            source++;

            cout << endl;
        }

        else {

            //Prevents player from making an invalid play.
            do {
                cout << " " << player1 << ", please select a location to place an X on the board: ";

                cout << endl;

                cin >> x;

                cout << endl;

                //Places an X where the player selected on game board
                if (x == "1") {

                    //Prevents player X from playing where player O already has.
                    if(A == 13){
                        cout << "Try again.";
                    }
                    else {
                        a = "X";
                        A = 12;
                        break;
                    }
                }
                else if (x == "2") {
                    if(B == 13){
                        cout << "Try again.";
                    }
                    else {
                        b = "X";
                        B = 12;
                        break;
                    }
                }
                else if (x == "3") {
                    if(C == 13) {
                        cout << "Try again.";
                    }
                    else {
                        c = "X";
                        C = 12;
                        break;
                    }
                }
                else if (x == "4") {
                    if(D == 13){
                        cout << "Try again.";
                    }
                    else {
                        d = "X";
                        D = 12;
                        break;
                    }
                }
                else if (x == "5") {
                    if(E == 13){
                        cout << "Try again.";
                    }
                    else {
                        e = "X";
                        E = 12;
                        break;
                    }
                }
                else if (x == "6") {
                    if(F == 13){
                        cout << "Try again.";
                    }
                    else {
                        f = "X";
                        F = 12;
                        break;
                    }
                }
                else if (x == "7") {
                    if(G == 13){
                        cout << "Try again.";
                    }
                    else {
                        g = "X";
                        G = 12;
                        break;
                    }
                }
                else if (x == "8") {
                    if(H == 13){
                        cout << "Try again.";
                    }
                    else {
                        h = "X";
                        H = 12;
                        break;
                    }
                }
                else if (x == "9") {
                    if (I == 13) {
                        cout << "Try again.";
                    } else {
                        i = "X";
                        I = 12;
                        break;
                    }
                }

                cout << "Invalid selection.";

                cout << endl;
                cout << endl;

                cout << " " << a << " | " << b << " | " << c << endl;
                cout << "-----------" << endl;
                cout << " " << d << " | " << e << " | " << f << endl;
                cout << "-----------" << endl;
                cout << " " << g << " | " << h << " | " << i << endl;

                cout << endl;
            } while (true);

            cout << endl;

            cout << " " << a << " | " << b << " | " << c << endl;
            cout << "-----------" << endl;
            cout << " " << d << " | " << e << " | " << f << endl;
            cout << "-----------" << endl;
            cout << " " << g << " | " << h << " | " << i << endl;

            cout << endl;

            //increments index by 1 allowing player O to go next.
            index++;

            cout << endl;
        }

        // restating so values are updated inside loop
        one = !Win(A, B, C);
        two = !Win(D, E, F);
        three = !Win(G, H, I);
        four = !Win(A, D, G);
        five = !Win(B, E, H);
        six = !Win(C, F, I);
        seven = !Win(A, E, I);
        eight = !Win(C, E, G);

        //Loop condition checks whether a win condition exists or the maximum number of plays has been reached.
    } while((one
            && two
            && three
            && four
            && five
            && six
            && seven
            && eight)
            && (index < 5));

    //simplifying player X win condition and updating variable values.
    bool Xone = XWin(A, B, C, X);
    bool Xtwo = XWin(D, E, F, X);
    bool Xthree = XWin(G, H, I, X);
    bool Xfour = XWin(A, D, G, X);
    bool Xfive = XWin(B, E, H, X);
    bool Xsix = XWin(C, F, I, X);
    bool Xseven = XWin(A, E, I, X);
    bool Xeight = XWin(C, E, G, X);

    //simplifying player O win condition and updating variable values.
    bool Oone = OWin(A, B, C, O);
    bool Otwo = OWin(D, E, F, O);
    bool Othree = OWin(G, H, I, O);
    bool Ofour = OWin(A, D, G, O);
    bool Ofive = OWin(B, E, H, O);
    bool Osix = OWin(C, F, I, O);
    bool Oseven = OWin(A, E, I, O);
    bool Oeight = OWin(C, E, G, O);

    cout << endl;

    //Player X wins.
    if(Xone || Xtwo || Xthree || Xfour || Xfive || Xsix || Xseven || Xeight)
    {
        cout << player1 << ", you win!";
    }

    //Player O wins.
    else if(Oone || Otwo || Othree || Ofour || Ofive || Osix || Oseven || Oeight)
    {
        cout << player2 << ", you win!";
    }

    //No one wins.
    else
    {
        cout << "Draw!";
    }

    return 0;
}
