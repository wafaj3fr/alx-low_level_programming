#include "your_header_containing_structs.h"

/**
 * key_index - Calculates the index for a key in the hash table array
 * @key: The key string
 * @size: The size of the array of the hash table
 * Return: the index at which the key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    if (key == NULL || size <= 0)
        return 0; // Return 0 or any suitable value for error handling

    unsigned long int hash_val = hash_djb2(key);
    unsigned long int index = hash_val % size;

    return index;
}
