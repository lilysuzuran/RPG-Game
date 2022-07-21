#include <iostream>
using namespace std;

int main()
{

    string playerFirstName = "Not";
    string playerLastName = "Sure";
    int playerHealth = 100;
    int weaponType = 1;
    int armorType = 1;
    string inventory[6] = { "Empty", "Empty", "Empty", "Empty", "Empty", "Empty" };

    cout << "Please input your first name: ";
    cin >> playerFirstName;
    cout << "Please input your last name: ";
    cin >> playerLastName;

    cout << endl << "Please enter a number to pick your weapon type: " << endl << "1) Sword" << endl << "2) Axe" << endl;
    cin >> weaponType;
    cout << endl << "Please enter a number to pick your armor type: " << endl << "1) Light" << endl << "2) Medium" << endl << "3) Heavy" << endl;
    cin >> armorType;
    
    system("cls");

    cout << endl << "Name: " << playerFirstName << " " << playerLastName << endl;
    
    if (weaponType == 1)
    {
        cout << "Weapon: Sword" << endl;

    }
    else 
    {
        cout << "Weapon: Axe" << endl;
    }

    if (armorType == 1)
    {
        cout << "Armor: Light" << endl;
    }
    else if (armorType == 2)
    {
        cout << "Armor: Medium" << endl;
    }
    else
    {
        cout << "Armor: Heavy" << endl;
    }
    
    for (int x = 0;x < 6;x++)
    {
        cout << "Inventory Slot " << (x + 1) << ": " << inventory[x] << endl;
    }

}

