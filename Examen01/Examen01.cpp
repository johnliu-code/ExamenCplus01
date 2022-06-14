// Examen01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

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

int main()
{
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
}
