#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book {
	int Bookid;
	char Name[100];
	char Author[100];
	char Category[50];
	float Price;
	float Rating;
} Book;

// Function prototypes
void store(Book*, int);
void display(Book*, int);
int removebook(Book*, int*);
void searchbook(Book*, int);
Book* addbook(Book*, int*);

int main() {
	int n;
	printf("How many books do you want to store?\n");
	scanf("%d", &n);

	Book* b1 = (Book*) malloc(n * sizeof(Book));
	if (b1 == NULL) {
		printf("Memory allocation failed.\n");
		return 1;
	}

	store(b1, n);

	int choice;

	do {
		printf("\n Book Management Menu \n");
		printf("1. Display All Books\n");
		printf("2. Remove a Book by ID\n");
		printf("3. Search Book by ID or Name\n");
		printf("4. Add a Book\n");
		printf("5. Update a Book (Price/Rating)\n");
		printf("6. Show Author's Books\n");
		printf("7. Show Category's Books\n");
		printf("8. Display Top 3 Books by Price\n");
		printf("9. Display Top 3 Books by Rating\n");
		printf("10. Exit\n");


		scanf("%d", &choice);

		if (choice == 1) {
			display(b1, n);
		} else if (choice == 2) {
			removebook(b1, &n);
		} else if (choice == 3) {
			searchbook(b1, n);
		} else if (choice == 4) {
			b1 = addbook(b1, &n);
		} else if (choice == 5) {
			upgrade(b1, n);
		} else if (choice == 6) {
			showByAuthor(b1, n);
		}
//		 else if (choice == 7) {
//			showByCategory(b1, n);
//		} else if (choice == 8) {
//			top3Price(b1, n);
//		} else if (choice == 9) {
//			top3Rating(b1, n);
//		} 
		else if (choice == 10) {
			printf("Exiting program...\n");
			break;
		}

	} while (choice != 10);

	free(b1); // Free memory

}



void store(Book* b1, int n) {
	for (int i = 0; i < n; i++) {
		printf("\nEnter details for Book %d:\n", i + 1);
		printf("Book ID: ");
		scanf("%d", &b1[i].Bookid);
		printf("Name: ");
		scanf(" %[^\n]", b1[i].Name);
		printf("Author: ");
		scanf(" %[^\n]", b1[i].Author);
		printf("Category: ");
		scanf(" %[^\n]", b1[i].Category);
		printf("Price: ");
		scanf("%f", &b1[i].Price);
		printf("Rating: ");
		scanf("%f", &b1[i].Rating);
	}
}

void display(Book* b1, int n) {
	printf("\n Book Details \n");
	for (int i = 0; i < n; i++) {
		printf("\nBook %d:\n", i + 1);
		printf("ID: %d\n", b1[i].Bookid);
		printf("Name: %s\n", b1[i].Name);
		printf("Author: %s\n", b1[i].Author);
		printf("Category: %s\n", b1[i].Category);
		printf("Price: %.2f\n", b1[i].Price);
		printf("Rating: %.1f\n", b1[i].Rating);
	}
}

int removebook(Book* b1, int* n) {
	int m;
	printf("Enter the ID of the book you want to delete:\n");
	scanf("%d", &m);

	int index = -1;
	for (int i = 0; i < *n; i++) {
		if (b1[i].Bookid == m) {
			index = i;
			break;
		}
	}

	if (index == -1) {
		printf("Book with ID %d not found.\n", m);
		return 0;
	}

	for (int j = index; j < *n - 1; j++) {
		b1[j] = b1[j + 1];
	}

	(*n)--;

	printf("Book with ID %d deleted successfully.\n", m);

}

void searchbook(Book* b1, int n) {
	char choice;
	printf("Search by Name or ID? (Enter 'n' for name, 'i' for ID): ");
	scanf(" %c", &choice);

	if (choice == 'n') {
		char searchName[100];
		printf("Enter the Book Name to search: ");
		scanf(" %[^\n]", searchName);

		int found = 0;
		for (int i = 0; i < n; i++) {
			if (strcmp(b1[i].Name, searchName) == 0) {
				printf("\nBook found:\n");
				printf("ID: %d\n", b1[i].Bookid);
				printf("Name: %s\n", b1[i].Name);
				printf("Author: %s\n", b1[i].Author);
				printf("Category: %s\n", b1[i].Category);
				printf("Price: %.2f\n", b1[i].Price);
				printf("Rating: %.1f\n", b1[i].Rating);
				found = 1;
				break;
			}
		}
		if (found==0) {
			printf("No book found with the name \"%s\".\n", searchName);
		}

	} else if (choice == 'i') {
		int searchID;
		printf("Enter the Book ID to search: ");
		scanf("%d", &searchID);

		int found = 0;
		for (int i = 0; i < n; i++) {
			if (b1[i].Bookid == searchID) {
				printf("\nBook found:\n");
				printf("ID: %d\n", b1[i].Bookid);
				printf("Name: %s\n", b1[i].Name);
				printf("Author: %s\n", b1[i].Author);
				printf("Category: %s\n", b1[i].Category);
				printf("Price: %.2f\n", b1[i].Price);
				printf("Rating: %.1f\n", b1[i].Rating);
				found = 1;
				break;
			}
		}
		if (found==0) {
			printf("No book found with the ID %d.\n", searchID);
		}
	} else {
		printf("Invalid choice! Please enter 'n' or 'i'.\n");
	}
}

Book* addbook(Book* b1, int* n) {
	(*n)++;
	b1 = realloc(b1, (*n) * sizeof(Book));
	if (b1 == NULL) {
		printf("Memory reallocation failed.\n");

	}

	printf("\nEnter details for new Book:\n");
	printf("Book ID: ");
	scanf("%d", &b1[*n - 1].Bookid);
	printf("Name: ");
	scanf(" %[^\n]", b1[*n - 1].Name);
	printf("Author: ");
	scanf(" %[^\n]", b1[*n - 1].Author);
	printf("Category: ");
	scanf(" %[^\n]", b1[*n - 1].Category);
	printf("Price: ");
	scanf("%f", &b1[*n - 1].Price);
	printf("Rating: ");
	scanf("%f", &b1[*n - 1].Rating);

	printf("Book added successfully!\n");
	return b1;
}
void upgrade(Book* b1, int n) {
	int I;
	printf("Enter the Book ID you want to update: ");
	scanf("%d", &I);

	int found = 0;
	for (int i = 0; i < n; i++) {
		if (b1[i].Bookid == I) {
			printf("Enter new Price: ");
			scanf("%f", &b1[i].Price);
			printf("Enter new Rating: ");
			scanf("%f", &b1[i].Rating);
			printf("Book updated successfully!\n");
			found = 1;
			break;
		}
	}

	if (found==0) {
		printf("Book with ID %d not found.\n", I);
	}
}
void showByAuthor(Book* b1, int n) {
	char author[100];
	int found = 0;
	printf("Enter author name: ");
	scanf(" %[^\n]", author);

	for (int i = 0; i < n; i++) {
		if (strcmp(b1[i].Author, author) == 0) {
			printf("\nBook ID: %d, Name: %s, Category: %s, Price: %.2f, Rating: %.1f\n",
			       b1[i].Bookid, b1[i].Name, b1[i].Category, b1[i].Price, b1[i].Rating);
			found = 1;
		}
	}

	if (found==0) {
		printf("No books found for author \"%s\"\n", author);
	}
}


