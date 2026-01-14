#include <stdio.h>

int main(void) {
    printf("Welcome, gamer!\n");
    int score = 0;
    int lives = 3;
    float speed = 1.5f;
    char name[20] = "NoName";

    printf("Player: %s\n", name);
    printf("Score: %d | Lives: %d | Speed %.1f\n", score, lives, speed);

    return 0;
}
