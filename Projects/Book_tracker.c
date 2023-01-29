#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_TITLE_LENGTH 100
#define MAX_AUTHOR_LENGTH 100
#define MAX_QUOTES 10
#define MAX_QUOTE_LENGTH 100
#define MAX_BOOKS 100

struct Book {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    char quotes[MAX_QUOTES][MAX_QUOTE_LENGTH];
    int numQuotes;
};

int getChoice();
void addBook(struct Book* books, int* numBooks);
void viewBooks(struct Book* books, int numBooks);
void getString(char* str, int maxLength);

int main() {
    struct Book books[MAX_BOOKS];
    int numBooks = 0;

    while (1) {
        int choice = getChoice();
        if (choice == 1) {
            addBook(books, &numBooks);
        } else if (choice == 2) {
            viewBooks(books, numBooks);
        } else if (choice == 3) {
            printf("Exiting program...\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

int getChoice() {
    printf("1. Add a book\n");
    printf("2. View books\n");
    printf("3. Exit\n");
    int choice;
    scanf("%d", &choice);
    return choice;
}

void addBook(struct Book* books, int* numBooks) {
    printf("Enter the title of the book: ");
    getString(books[*numBooks].title, MAX_TITLE_LENGTH);
    printf("Enter the author of the book: ");
    getString(books[*numBooks].author, MAX_AUTHOR_LENGTH);
    books[*numBooks].numQuotes = 0;
    char quote[MAX_QUOTE_LENGTH];
    while (1) {
        printf("Enter a quote (or 'q' to quit): ");
        getString(quote, MAX_QUOTE_LENGTH);
        if (strcmp(quote, "q") == 0) {
            break;
        }
        if(books[*numBooks].numQuotes < MAX_QUOTES){
            strcpy(books[*numBooks].quotes[books[*numBooks].numQuotes], quote);
            books[*numBooks].numQuotes++;
        }else{
            printf("Maximum quotes reached.");
            break;
        }
    }
    (*numBooks)++;
    printf("Book added successfully\n");
}

void viewBooks(struct Book* books, int numBooks) {
    if (numBooks == 0) {
        printf("No books to view.\n");
        return;
    }
    for (int i = 0; i < numBooks; i++) {
        printf("Title: %s\n", books[i].title);
printf("Quotes: \n");
for(int j =0; j< books[i].num_quotes; j++)
{
printf(" - %s\n", books[i].quotes[j]);
}
}

void getString(char* str, int maxLength) {
char* success = fgets(str, maxLength, stdin);
if (success) {
size_t lastChar = strlen(str) - 1;
if (str[lastChar] == '\n') {
str[lastChar] = '\0';
}
}
}
