#include <stdio.h>

int main()
{
    int messageLength, keyLength;

    scanf("%d ", &keyLength);
    int key[keyLength];

    for(int i = 0; i < keyLength; i++) {
        scanf("%d", &key[i]);

    }

    scanf("%d ", &messageLength);
    char message[messageLength];
    for(int i = 0; i < messageLength; i++) {
        char c = getchar();
        int encryptedChar = c + (key[i % keyLength] % 26);
        if(encryptedChar > 122)
            encryptedChar = 96 + (encryptedChar % 122);
        message[i] = encryptedChar;
    }

    for(int i = 0; i < messageLength; i++) {
        printf("%c", message[i]);
    }

    return 0;
}
