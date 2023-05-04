/**
 * rot13 - Encodes a string using ROT13 cipher
 * @str: Pointer to the string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
    int i, j;
    char c;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Rotate lowercase letters by 13 positions
            c = str[i] + 13;
            if (c > 'z')
                c -= 26;
            str[i] = c;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            // Rotate uppercase letters by 13 positions
            c = str[i] + 13;
            if (c > 'Z')
                c -= 26;
            str[i] = c;
        }
    }

    return str;
}

