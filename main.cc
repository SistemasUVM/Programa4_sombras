#include <stdlib.h>
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float x,est;
    cout << "Ingresa la altura de la persona" << endl;
    cin >> est;
    x=(est * 7)/14;
    cout << "Tu sombra mide " << x << endl;
    return 0;
}
