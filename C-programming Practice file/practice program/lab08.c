#include <stdio.h>
#include <string.h>

typedef struct employees {
    int id;
    char name[20];
    int salary;
} employees;

void storeemp(employees*, int);
void display(const employees*, int);
int search(employees*, int);
void deleteemp(employees*, int*, int);

int main() {
    int n = 5;
    employees sarr1[n];

    printf("Enter employees details:\n");
    storeemp(sarr1, n);

    printf("\nEmployee List:\n");
    display(sarr1, n);

    int index = search(sarr1, n);

    if(index == -1) {
        printf("\nEmployee not found.\n");
    } else {
        printf("\nEmployee found at index %d\n", index);
        printf("ID: %d, Name: %s, Salary: %d\n", sarr1[index].id, sarr1[index].name, sarr1[index].salary);

        char str;
        printf("Do you want to delete this employee? (y/n): ");
        scanf(" %c", &str); 

        if(str == 'y' || str == 'Y') {
            deleteemp(sarr1, &n, index);
            printf("\nAfter deletion, updated employee list:\n");
            display(sarr1, n);
        } else {
            printf("Employee not deleted.\n");
        }
    }

    return 0;
}

void storeemp(employees *sarr, int n) {
    for(int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &sarr[i].id);
        printf("Name: ");
        scanf("%s", sarr[i].name);
        printf("Salary: ");
        scanf("%d", &sarr[i].salary);
    }
}

void display(const employees* sarr, int n) {
    for(int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i+1);
        printf("ID     : %d\n", sarr[i].id);
        printf("Name   : %s\n", sarr[i].name);
        printf("Salary : %d\n", sarr[i].salary);
    }
}

int search(employees* sarr1, int n) {
    char nm[20];
    printf("\nEnter the name you want to search: ");
    scanf("%s", nm);

    for(int i = 0; i < n; i++) {
        if(strcmp(sarr1[i].name, nm) == 0) {
            return i;
        }
    }

    return -1;
}

void deleteemp(employees* sarr, int* n, int index) {
    for(int i = index; i < (*n) - 1; i++) {
        sarr[i] = sarr[i + 1];  // shift left
    }
    (*n)--; // reduce employee count
}
