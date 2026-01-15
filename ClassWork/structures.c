#include <stdio.h>

typedef struct {
    char title[30];
    char author[30];
    float price;
}Book;

int main() {

    Book books[3];
    Book highestPricedBook;

    for( int i = 0; i < 3; i ++){
        Book book;

        printf("---Book %d---", i+1);

        printf("Enter the title of the Book: ");
        fgets(book.title, 30 , stdin);

        printf("Enter the author of the Book: ");
        fgets(book.author, 30 , stdin);

        printf("Enter the price of the Book: ");
        scanf(" %f", &book.price);
        getchar();

        books[i] = book;
        printf("\n\n\n");
    }

    highestPricedBook = books[0];

    for( int i = 1; i < 3; i++){
        if(books[i].price > highestPricedBook.price){
            highestPricedBook = books[i];
        }
    }

    printf("The highest Priced Book is:\n Title: %s \t Author: %s \t Price: %.2f", highestPricedBook.title, highestPricedBook.author, highestPricedBook.price);


    return 0;
}
