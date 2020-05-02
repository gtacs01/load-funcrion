// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    // TODO

    // Open dictionary
    FILE* file_0 = fopen(dictionary, "r");
    if (file_0 == NULL)
    {
        return false;
    }

    // Create variable new_node
    node *new_node;

    // CHARACTER ARRAY FOR STORING WORDS READ FROM DICTIONARY. REMEMBER TO FREE LATER
    char WORD = [LENGTH + 1];
    if (WORD == NULL)
    {
        return false;
    }

    // Scan through files until reached EOF
    while (fscanf(file_0, "%s", WORD) == !EOF)
    {
        // Create new node REMEMBER TO FREE LATER
        new_node = malloc(sizeof(node));
        if (new_node == NULL)
        {
            return false;
        }

        // Copy string to new_node
        strcpy(new_node->word, WORD);
        new_node->next = NULL;

        // Implement hash function
        unsigned int x =  hash(new_node->word);

        // Point new_node's next to starting of link list
        new_node->next = table[x];

        // Point/Insert node to link list
        new_node->next = table[t];
        table[t] = n;

        a++; //number of words in the dictionary

    }
    fclose(file_0);
    return true;
}
