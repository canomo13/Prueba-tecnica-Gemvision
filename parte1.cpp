#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char cadena[128];
    ifstream fe("txt/Input.txt");
    while (!fe.eof()) {
        fe >> cadena;
        cout << cadena << endl;
    }
    fe.close();

}