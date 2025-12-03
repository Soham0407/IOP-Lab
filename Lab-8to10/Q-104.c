//AN ENUMERATION WITH COLOR NAMES CAN BE USED IN A SWITCH STATEMENT TO DISPLAY THE HEXADECIMAL COLOR CODE. 
#include<stdio.h>
enum COLOUR {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE
};
int main() {
    enum COLOUR colour;
    int choice;

    printf("Select a color:\n");
    printf("0. RED\n");
    printf("1. GREEN\n");
    printf("2. BLUE\n");
    printf("3. YELLOW\n");
    printf("4. ORANGE\n");
    printf("Enter your choice (0-4): ");
    scanf("%d", &choice);

    colour = (enum COLOUR)choice;

    switch (colour) {
        case RED:
            printf("Hexadecimal code for RED: #FF0000\n");
            break;
        case GREEN:
            printf("Hexadecimal code for GREEN: #00FF00\n");
            break;
        case BLUE:
            printf("Hexadecimal code for BLUE: #0000FF\n");
            break;
        case YELLOW:
            printf("Hexadecimal code for YELLOW: #FFFF00\n");
            break;
        case ORANGE:
            printf("Hexadecimal code for ORANGE: #FFA500\n");
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
    return 0;
}