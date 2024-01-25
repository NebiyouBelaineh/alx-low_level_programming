# #️⃣0x1A-hash_tables

- The repository contains a collection of C programs that demonstrate the implementation of hash tables. A hash table is a data structure that allows for efficient storage and retrieval of key-value pairs.

# 📂Files:
The repository contains the following 
- `0-hash_table_create.c`: This file contains a function that creates a hash table.
- `1-djb2.c`: This file contains an implementation of the djb2 hash function.
- `2-key_index.c`: This file contains a function that returns the index of a key.
- `3-hash_table_set.c`: This file contains a function that adds an element to a hash table.
- `4-hash_table_get.c`: This file contains a function that retrieves an element from a hash table.
- `5-hash_table_print.c`: This file contains a function that prints the contents of a hash table.
- `6-hash_table_delete.c`: This file contains a function that deletes a hash table.
- `100-sorted_hash_table.c`: This file contains a function that creates a sorted hash table.

The repository also contains a header file `hash_tables.h` that contains the function prototypes and data structures used in the C programs.

# 💾 Data Structure
* The following data structure is used in this project:
```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```
# How to Use
To use these programs, you will need to have the `gcc` compiler installed on your system. You can then compile the programs using the following command:
```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hash_table
```
This will create an executable file called hash_table. You can then run the program using the following command:
```
$ ./hash_table
```
# ✍🏽 Author
This repository was created by [Nebiyou Belaineh](https://github.com/NebiyouBelaineh).
# ✉️ Contact

Email: nebiyouseifu2@gmail.com

LinkedIn: [Nebiyou Belaineh](https://www.linkedin.com/in/nebiyou-belaineh-2a683415b/)

Twitter: [Nebiyou Seifu](https://twitter.com/SeifuNebiyou)