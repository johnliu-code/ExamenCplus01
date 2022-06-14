// Examen02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

//02
void SymetriqueInt(int table[], int n) {
    int estsymtriqueInt;
    vector<int> compareNote = {};
    for (int i = 0; i < n; i++) {
        if (i < (n / 2)) {
            if (table[i] != table[n-i-1]) {
                estsymtriqueInt = 0;
                break;
            }
            else 
                estsymtriqueInt = 1;
        }
    }

    if (estsymtriqueInt == 1)
        cout << "C'est un Symetrique! \n";
    else
        cout << "C'est pas un Symetrique! \n";
}


void SymetriqueChar(char table[], int n) {
    int estsymtriqueChar;
    for (int i = 0; i < n; i++) {
        if (i < (n / 2)) {
            if (table[i] != table[n-i-1]) {
                estsymtriqueChar = 0;
                break;
            }
            else estsymtriqueChar = 1;
        }
    }
    if (estsymtriqueChar == 1)
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

int main()
{
    //02
    char ville[20] = "laval";
    char ville2[20] = "motreal";
    int age[15] = { 5, 25, 12, 12, 25, 5 };
    int age0[15] = { 5, 25, 12, 12, 25, 5, 38 };
    int age6[15] = { 10, 5, 25, 12, 12, 25, 5, 10 };

    int n_age = GetItemNumInt(age, 15);
    SymetriqueInt(age, n_age);

    int n_age0 = GetItemNumInt(age0, 15);
    SymetriqueInt(age0, n_age0);

    int n_age6 = GetItemNumInt(age6, 15);
    SymetriqueInt(age6, n_age6);

    int n_ville = GetItemNumChar(ville, 20);
    SymetriqueChar(ville, 5);

    int n_ville2 = GetItemNumChar(ville2, 20);
    SymetriqueChar(ville2, 7);
}


