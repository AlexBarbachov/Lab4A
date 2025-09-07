#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib> // for random
#include <ctime> // for true randomness when seeding

using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    vector<Color> colors;

    // gen number between 25 n 50
    int num1 = 25 + rand() % 26;

    for (int i = 0; i < num1; i++) {
        Color temp;
        temp.red = rand() % 256;
        temp.green = rand() % 256;
        temp.blue = rand() % 256;
        colors.push_back(temp);
    }


    cout << left << setw(8) << "Color#" 
         << setw(8) << "R value" 
         << setw(8) << "G value"
         << setw(8) << "B value" << endl;
    
    // line of -------
    cout << "------  ------- ------- -------" << endl;

    for (int i = 0; i < colors.size(); i++) 
    {
        cout << left << setw(8) << (i + 1) 
             << setw(8) << colors[i].red
             << setw(8) << colors[i].green
             << setw(8) << colors[i].blue << endl;
    }
    

}
