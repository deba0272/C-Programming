#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char y, char c) {
    if (y == c)
        return -1;
    if (y == 's' && c == 'p')
        return 0;
    else if (y == 'p' && c == 's')
        return 1;
    if (y == 's' && c == 'z')
        return 1;
    else if (y == 'z' && c == 's')
        return 0;
    if (y == 'p' && c == 'z')
        return 0;
    else if (y == 'z' && c == 'p')
        return 1;
    return -1;
}
int main() {
    int n;
    char y, c;
    int result;
    srand(time(NULL));
    n = rand() % 100;

    if (n < 33)
        c = 's';
    else if (n < 66)
        c = 'p';
    else
        c = 'z';
    printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");
    scanf(" %c", &y);
    result = game(y, c);
    if (result == -1) {
        printf("\n\n\t\t\t\tGame Draw!\n");
    } else if (result == 1) {
        printf("\n\n\t\t\t\tWow! You have won the game!\n");
    } else { 
        printf("\n\n\t\t\t\tOh! You have lost the game!\n");
    }
    printf("\t\t\t\tYou chose: %c and Computer chose: %c\n", y, c);
    return 0;
}
