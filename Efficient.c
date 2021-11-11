#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    srand(time(NULL));  //Sends a random seed according to time
    int len = 18;
    char password[len];
    char charecters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@$%%^&*()#_+=-{}][|\":;'\\/.,?><`~";// String of all possibles charecters
    for (int i = 0; i < len - 1; i++) 
    {
        strncat(password, &charecters[rand() % 96], 1);
    }
    memmove(password, password+3, strlen(password) - 2);
    printf("%s\n", password);
    return 0;
} 