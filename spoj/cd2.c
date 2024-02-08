#include "list-functions.c"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PRIME 31
#define SIZE 1000

struct node *hashTable[SIZE];
int totalSymbols = 0; // Counter for total symbols

int hashpjw(char *s)
{
    char *p;
    unsigned h = 0, g;
    for (p = s; *p != '\0'; p = p + 1)
    {
        h = (h << 4) + (*p);
        if (g = h & 0xf0000000)
        {
            h = h ^ (g << 24);
            h = h ^ g;
        }
    }
    return h % PRIME;
}

void insertHashTable(char *s)
{
    int index = hashpjw(s);
    append(&hashTable[index], s);
    totalSymbols++; // Increment the counter when a symbol is inserted
}

void displayHashTable()
{
    printf("Total no. of symbols encountered = %d\n", totalSymbols); // Display total symbols
    for (int i = 0; i < SIZE; i++)
    {
        if (!isempty(hashTable[i]))
        {
            printf("*************************************** %d\n", i);
            printf("No of elements at index %d = %d\n", i, length(hashTable[i]));
            printf("At index %d ", i);
            display(hashTable[i]);
        }
    }
}

void initializeHashTable()
{
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = NULL;
}

int main()
{
    // Initialize hash table
    initializeHashTable();

    // Input processing
    char line[256];
    while (fgets(line, sizeof(line), stdin))
    {
        // Remove newline character
        line[strcspn(line, "\n")] = 0;

        // Tokenize line into words
        char *word = strtok(line, " ");
        while (word != NULL)
        {
            // Insert word into hash table
            insertHashTable(word);

            // Get next word
            word = strtok(NULL, " ");
        }
    }

    // Display hash table
    displayHashTable();

    return 0;
}
