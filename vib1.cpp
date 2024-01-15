#include <iostream>

using namespace std;

// Escape character
const char ESC = 0x7D;

// Function to stuff characters
void stuffCharacters(char *data, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (data[i] == ESC || data[i] == 'F')
        {
            // Stuff an ESC character
            data[i] = ESC;
            i++;
        }
    }
}

// Function to destaff characters
void destaffCharacters(char *data, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (data[i] == ESC && data[i + 1] == ESC)
        {
            // Remove the stuffed ESC character
            data[i] = 0;
            i++;
        }
    }
}

int main()
{
    // Data to be stuffed
    char data[] = "This is a test message with F.";

    // Stuff the characters
    stuffCharacters(data, sizeof(data));

    // Print the stuffed data
    cout << "Stuffed data: ";
    for (int i = 0; i < sizeof(data); i++)
    {
        cout << data[i];
    }
    cout << endl;

    // Destaff the characters
    destaffCharacters(data, sizeof(data));

    // Print the destaffed data
    cout << "Desstuffed data: " << data << endl;

    return 0;
}
