// Examen_YongjiangLiu803.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

//01

int estIdentiqueAge(int* p1, int n1, int* p2, int n2)
{
    int i;

    if (n1 != n2)
        return 0;
    else
    {
        for (i = 0; i < n1; i++)
            if (*(p1 + i) != *(p2 + i)) 
                return 0;               
        return 1;
    }
}

int estIdentiqueSexe(char* p1, int n1, char* p2, int n2)
{
    int i;

    if (n1 != n2)
        return 0;
    else
    {
        for (i = 0; i < n1; i++)
            if (*(p1 + i) != *(p2 + i))
                return 0;
        return 1;
    }
}

void AfficherIsSame(int issame) {
    if (issame == 1)
        cout << "Les deux elements sont La meme! \n";
    else 
        cout << "Les deux elements sont pas meme! \n";
 }



//02
void SymetriqueInt(int* p, int n) {
    int estsymtrique;
    for (int i = 0; i < n; i++) {
        if (i <=  (n / 2)) {
            if (*(p + i) == *(p + (n - (i + 0)))) {
                estsymtrique = 1;
            }
            else estsymtrique = 0;
        }
    }
    if (estsymtrique == 1)
        cout << "C'est un Symetrique! \n";
    else 
        cout << "C'est pas un Symetrique! \n";
}

void SymetriqueChar(char* p, int n) {
    int estsymtrique;
    for (int i = 0; i < n; i++) {
        if (i <= (n / 2)) {
            if (*(p + i) == *(p + (n - (i + 0)))) {
                estsymtrique = 1;
            }
            else estsymtrique = 0;
        }
    }
    if (estsymtrique == 1)
        cout << "C'est un Symetrique! \n";
    else
        cout << "C'est pas un Symetrique! \n";
}

//Get table item number
int GetItemNumInt(int table[], int n) {
    int itemNum = 0;
    for (int i = 0; i < n; i++) {
        if (table[i] != 0)
            itemNum++;
    }
    return itemNum;
}

int GetItemNumChar(char table[], int n) {
    int itemNum = 0;
    for (int i = 0; i < n; i++) {
        if (table[i] != 0)
            itemNum++;
    }
    return itemNum;
}

//03
struct Immeuble {
    int year;
    char type;
    double price;
};

Immeuble immeuble;
vector<Immeuble> immeubles = {};


//03-1
void getinfo(Immeuble immeuble)
{
    int year;
    char type;
    double price;

    cout << "Year: ";
    cin >> year;
    immeuble.year = year;

    cout << "Type: ";
    cin >> type;
    immeuble.type = type;

    cout << "Price: ";
    cin >> price;
    immeuble.price = price;
}

//03-2
void AfficherIm(Immeuble immeuble) {
    cout << "Immeuble year: " << immeuble.year << ",  Immeuble type: " << immeuble.type << ", Immeuble price: " << immeuble.price << endl;
}

//03-3

void AfficherIm(vector<Immeuble> immeubles, char type) {

    for (int i = 0; i < immeubles.size(); i++) {
        if (immeubles[i].type == type)
            cout << "Immeuble year: " << immeubles[i].year << ",  Immeuble type: " << immeubles[i].type << ", Immeuble price: " << immeubles[i].price << endl;
    }
}

//04 
int Moyenne(int num[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += num[i];
    }
    return (float)total / n;
}

int MoyennePointer(int* p, int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += *(p + i);
    }
    return (float)total / n;
}

int main()
{
    cout << "Examen c ++ Yongjiang Liu 803\n";

    //01
    cout << "Excercice 1: \n";
    int age1[10] = { 50, 27, 62, 14, 58, 40 },
        age2[15] = { 50, 27, 62, 14, 58, 40, 70 },
        age3[10] = { 50, 72, 62, 14, 58, 40 };

    int numage1 = sizeof(age1) / sizeof(age1[0]);
    int numage2 = sizeof(age2) / sizeof(age2[0]);
    int numage3 = sizeof(age3) / sizeof(age3[0]);

    int issame = estIdentiqueAge(age1, numage1, age2, numage2);
    AfficherIsSame(issame);
    int issame1 = estIdentiqueAge(age1, numage1, age3, numage3);
    AfficherIsSame(issame1);


    char sexe1[5] = { 'F', 'F', 'M', 'M', 'M' },
         sexe2[7] = { 'F', 'F', 'M', 'M', 'M' };
    int numsexe1 = sizeof(sexe1) / sizeof(sexe1[0]);
    int numsexe2 = sizeof(sexe2) / sizeof(sexe2[0]);

    int issame2 = estIdentiqueSexe(sexe1, numsexe1, sexe2, numsexe2);
    AfficherIsSame(issame2);

    //02
    char ville[20] = "laval";
    char ville2[20] = "motreal";
    int age[15] = { 5, 25, 12, 12, 25, 5 };
    int age0[15] = { 5, 25, 12, 12, 25, 5, 38};

    int n_age = GetItemNumInt(age, 15);
    SymetriqueInt(age, n_age);

    int n_age0 = GetItemNumInt(age0, 15);
    SymetriqueInt(age0, n_age0);

    int n_ville = GetItemNumChar(ville, 20);
    SymetriqueChar(ville, n_ville);

    int n_ville2 = GetItemNumChar(ville2, 20);
    SymetriqueChar(ville2, n_ville2);

    //03

    Immeuble immeuble1;
    Immeuble immeuble2;
    Immeuble immeuble3;
    Immeuble immeuble4;
    Immeuble immeuble5;

   // getinfo(immeuble1);
    //getinfo(immeuble2);
    //getinfo(immeuble3);
    //getinfo(immeuble4);
    //getinfo(immeuble5);

    //immeubles.push_back(immeuble1);
    //immeubles.push_back(immeuble2);
    //immeubles.push_back(immeuble3);
    //immeubles.push_back(immeuble4);
    //immeubles.push_back(immeuble5);


    //AfficherIm(immeuble1);
    //AfficherIm(immeuble2);
    //AfficherIm(immeuble3);
    //AfficherIm(immeuble4);
    //AfficherIm(immeuble5);

    char type = 'B';
   // AfficherIm(immeubles, type);

    //04
    int num[10];
    int inputvalue;
    for (int i = 0; i < 10; i++) {
        cout << "Donnez un int numero: ";
        cin >> inputvalue;
        num[i] = inputvalue;
    }

    float moyenne = Moyenne(num, 10);
    cout << "Moyenne est : " << moyenne << endl;

    float moyenne2 = MoyennePointer(num, 10);
    cout << "Moyenne est : " << moyenne2 << endl;
}

