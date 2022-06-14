
#include <iostream>
using namespace std;

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

