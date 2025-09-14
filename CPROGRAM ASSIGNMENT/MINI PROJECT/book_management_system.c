#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct {
    int bookID;
    char name[100];
    char author[100];
    char category[50];
    float price;
    float rating;
} Book;

Book books[MAX_BOOKS];
int count = 0;

// Function prototypes
void addBook();
void removeBook();
void searchBookByID();
void searchBookByName();
void showBooksByAuthor();
void showBooksByCategory();
void updateBook();
void displaySortedBooks();
void displayAllBooks();
void top3Books();

int main() {
    int choice;
    do {
        printf("\n===== Book Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Remove Book\n");
        printf("3. Search Book by ID\n");
        printf("4. Search Book by Name\n");
        printf("5. Show Books by Author\n");
        printf("6. Show Books by Category\n");
        printf("7. Update Book Price & Rating\n");
        printf("8. Display All Books\n");
        printf("9. Display Sorted Books (by Price & Rating)\n");
        printf("10. Display Top 3 Books (Price & Rating)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // consume newline

        switch(choice) {
            case 1: addBook(); break;
            case 2: removeBook(); break;
            case 3: searchBookByID(); break;
            case 4: searchBookByName(); break;
            case 5: showBooksByAuthor(); break;
            case 6: showBooksByCategory(); break;
            case 7: updateBook(); break;
            case 8: displayAllBooks(); break;
            case 9: displaySortedBooks(); break;
            case 10: top3Books(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while(choice != 0);

    return 0;
}

void addBook() {
    if (count >= MAX_BOOKS) {
        printf("Book storage is full!\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &books[count].bookID);
    getchar();
    printf("Enter Book Name: ");
    fgets(books[count].name, 100, stdin);
    books[count].name[strcspn(books[count].name, "\n")] = '\0';
    printf("Enter Author Name: ");
    fgets(books[count].author, 100, stdin);
    books[count].author[strcspn(books[count].author, "\n")] = '\0';
    printf("Enter Category: ");
    fgets(books[count].category, 50, stdin);
    books[count].category[strcspn(books[count].category, "\n")] = '\0';
    printf("Enter Price: ");
    scanf("%f", &books[count].price);
    printf("Enter Rating (out of 5): ");
    scanf("%f", &books[count].rating);

    count++;
    printf("Book added successfully!\n");
}

void removeBook() {
    int id, i, found = 0;
    printf("Enter Book ID to remove: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (books[i].bookID == id) {
            found = 1;
            for (int j = i; j < count - 1; j++)
                books[j] = books[j + 1];
            count--;
            printf("Book removed successfully.\n");
            break;
        }
    }

    if (!found)
        printf("Book ID not found.\n");
}

void searchBookByID() {
    int id, found = 0;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (books[i].bookID == id) {
            printf("Book Found: ID: %d, Name: %s, Author: %s, Category: %s, Price: %.2f, Rating: %.1f\n",
                books[i].bookID, books[i].name, books[i].author, books[i].category, books[i].price, books[i].rating);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book not found.\n");
}

void searchBookByName() {
    char name[100];
    int found = 0;
    getchar();
    printf("Enter Book Name to search: ");
    fgets(name, 100, stdin);
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].name, name) == 0) {
            printf("Book Found: ID: %d, Name: %s, Author: %s, Category: %s, Price: %.2f, Rating: %.1f\n",
                books[i].bookID, books[i].name, books[i].author, books[i].category, books[i].price, books[i].rating);
            found = 1;
        }
    }

    if (!found)
        printf("Book not found.\n");
}

void showBooksByAuthor() {
    char author[100];
    int found = 0;
    getchar();
    printf("Enter Author Name: ");
    fgets(author, 100, stdin);
    author[strcspn(author, "\n")] = '\0';

    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].author, author) == 0) {
            printf("ID: %d, Name: %s, Category: %s, Price: %.2f, Rating: %.1f\n",
                books[i].bookID, books[i].name, books[i].category, books[i].price, books[i].rating);
            found = 1;
        }
    }

    if (!found)
        printf("No books found by this author.\n");
}

void showBooksByCategory() {
    char category[50];
    int found = 0;
    getchar();
    printf("Enter Category: ");
    fgets(category, 50, stdin);
    category[strcspn(category, "\n")] = '\0';

    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].category, category) == 0) {
            printf("ID: %d, Name: %s, Author: %s, Price: %.2f, Rating: %.1f\n",
                books[i].bookID, books[i].name, books[i].author, books[i].price, books[i].rating);
            found = 1;
        }
    }

    if (!found)
        printf("No books found in this category.\n");
}

void updateBook() {
    int id, found = 0;
    float newPrice, newRating;
    printf("Enter Book ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (books[i].bookID == id) {
            printf("Enter new Price: ");
            scanf("%f", &newPrice);
            printf("Enter new Rating: ");
            scanf("%f", &newRating);
            books[i].price = newPrice;
            books[i].rating = newRating;
            printf("Book updated successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book not found.\n");
}

void displayAllBooks() {
    if (count == 0) {
        printf("No books in database.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Author: %s, Category: %s, Price: %.2f, Rating: %.1f\n",
            books[i].bookID, books[i].name, books[i].author, books[i].category,
            books[i].price, books[i].rating);
    }
}

void displaySortedBooks() {
    Book temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (books[j].price < books[j+1].price || 
               (books[j].price == books[j+1].price && books[j].rating < books[j+1].rating)) {
                temp = books[j];
                books[j] = books[j+1];
                books[j+1] = temp;
            }
        }
    }

    printf("Books sorted by Price & Rating:\n");
    displayAllBooks();
}

void top3Books() {
    displaySortedBooks();
    int top = count < 3 ? count : 3;

    printf("Top %d Books:\n", top);
    for (int i = 0; i < top; i++) {
        printf("ID: %d, Name: %s, Price: %.2f, Rating: %.1f\n",
            books[i].bookID, books[i].name, books[i].price, books[i].rating);
    }
}
