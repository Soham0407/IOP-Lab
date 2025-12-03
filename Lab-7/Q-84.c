//FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION USING POINTER TO STRUCTURE.
#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
    int year;
    float price;
};

// Function to read book information
void readBookInfo(struct Book *book) {
    printf("Enter book title: ");
    fgets(book->title, sizeof(book->title), stdin); // Read title

    printf("Enter author name: ");
    fgets(book->author, sizeof(book->author), stdin); // Read author

    printf("Enter publication year: ");
    scanf("%d", &book->year); // Read year

    printf("Enter book price: ");
    scanf("%f", &book->price); // Read price
}

// Function to display book information
void displayBookInfo(struct Book *book) {
    printf("\nBook Information:\n");
    printf("Title: %s", book->title);
    printf("Author: %s", book->author);
    printf("Year: %d\n", book->year);
    printf("Price: %.2f\n", book->price);
}

int main() {
    struct Book myBook; // Declare a book structure variable

    // Read and display book information using pointers to structure
    readBookInfo(&myBook);   // Pass the address of myBook
    displayBookInfo(&myBook); // Pass the address of myBook

    return 0;
}
