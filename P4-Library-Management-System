#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 100  

typedef struct {
    char title[50];
    char author[50];
    int id;
}

Book;
Book books[MAX_BOOKS];
int bookCount = 0;
void addBook();
void displayBooks();
void searchBook();
void deleteBook();
void addBook() {
    char confirm;
    do {
        if (bookCount < MAX_BOOKS) {
            printf("Enter Book Title: ");
            scanf("%s", books[bookCount].title);
            printf("Enter Author: ");
            scanf("%s", books[bookCount].author);
            printf("Enter Book ID: ");
            scanf("%d", &books[bookCount].id);
            bookCount++;
            printf("Book added successfully!\n");
        }
        else {
            printf("Library is full!\n");
        }

        printf("Do you want to add another book? (y/n): ");
        scanf(" %c", &confirm);
    } while (confirm == 'y' || confirm == 'Y');
}

void displayBooks() {
    int subChoice;
    if (bookCount == 0) {
        printf("No books to display!\n");
        return;
    }
    do {
        printf("\n1. Show All Books\n2. Show a Specific Book\n3. Go Back\n");
        printf("Enter your choice: ");
        scanf("%d", &subChoice);

        switch (subChoice) {
            case 1:
                for (int i = 0; i < bookCount; i++) {
                    printf("Title: %s | Author: %s | ID: %d\n", books[i].title, books[i].author, books[i].id);
                }
                break;
            case 2:
                searchBook();
                break;
            case 3:
                return;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (subChoice != 3);
}

void searchBook() {
    int id, found = 0;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id) {
            printf("Book Found!\nTitle: %s | Author: %s | ID: %d\n", books[i].title, books[i].author, books[i].id);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book with ID %d not found!\n", id);
    }
}

void deleteBook() {
    int id, found = 0;
    char confirm;
    printf("Enter Book ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < bookCount; i++) {
        if (books[i].id == id) {
            printf("Are you sure you want to delete this book? (y/n): ");
            scanf(" %c", &confirm);
            if (confirm == 'y' || confirm == 'Y') {
                for (int j = i; j < bookCount - 1; j++) {
                    books[j] = books[j + 1];
                }
                bookCount--;
                printf("Book deleted successfully!\n");
            }
            else {
                printf("Deletion cancelled.\n");
            }
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book with ID %d not found!\n", id);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add Book\n2. Display Books\n3. Search Book\n4. Delete Book\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: deleteBook(); break;
            case 5: return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }
}
