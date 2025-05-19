#include <stdio.h>

int main() 
{
    char ch;
    char s[100];     // To hold a word
    char sen[200];   // To hold a full sentence

    // Read a character
    scanf("%c", &ch);
    // Read a word (string without spaces)
    scanf("%s", s);
    // Clear newline left by previous scanf
    getchar();
    // Read a sentence (string with spaces)
    fgets(sen, sizeof(sen), stdin);

    // Print the inputs
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);  // No extra \n needed; fgets captures it

    return 0;
}

