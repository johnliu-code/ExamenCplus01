// Examen03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

//03
struct Immeuble {
    int year;
    char type;
    double price;
};

Immeuble immeuble;
vector<Immeuble> immeubles = {};


//03-1
Immeuble getinfo()
{
    int year;
    char type;
    double price;
    Immeuble immeuble;

    cout << "Year: ";
    cin >> year;
    immeuble.year = year;

    cout << "Type: ";
    cin >> type;
    immeuble.type = type;

    cout << "Price: ";
    cin >> price;
    immeuble.price = price;

    return immeuble;
}

//03-2
void AfficherIm(Immeuble immeuble) {
    cout << "Immeuble year: " << immeuble.year << ",  Immeuble type: " << immeuble.type << ", Immeuble price: " << immeuble.price << endl;
}

//03-3

void AfficherIm(vector<Immeuble> immeubles, char type) {

    int findIM;
    for (int i = 0; i < immeubles.size(); i++) {
        if (immeubles[i].type == type) {
            cout << "Immeuble year: " << immeubles[i].year << ",  Immeuble type: " << immeubles[i].type << ", Immeuble price: " << immeubles[i].price << endl;
            findIM = 1;
        }
        else
            findIM = 0;
    }

    if (findIM == 0)
        cout << "Immeuble de type " << type << " pas trouver!! " << endl;
}

int main()
{
    //03
    Immeuble immeuble1;
    Immeuble immeuble2;
    Immeuble immeuble3;
    Immeuble immeuble4;
    Immeuble immeuble5;

    immeuble1 = getinfo();
    immeuble2 = getinfo();
    immeuble3 = getinfo(); 
    immeuble4 = getinfo();
    immeuble5 = getinfo();

    immeubles.push_back(immeuble1);
    immeubles.push_back(immeuble2);
    immeubles.push_back(immeuble3);
    immeubles.push_back(immeuble4);
    immeubles.push_back(immeuble5);


    AfficherIm(immeuble1);
    AfficherIm(immeuble2);
    AfficherIm(immeuble3);
    AfficherIm(immeuble4);
    AfficherIm(immeuble5);

    char type = 'A';
    AfficherIm(immeubles, type);
}




