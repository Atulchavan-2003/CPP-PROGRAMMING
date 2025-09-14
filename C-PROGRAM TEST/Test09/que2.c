#include <stdio.h>

int main() {
    int ages[5];
    float ticketPrice, totalAmount = 0;

    printf("Enter ticket price per person: ");
    scanf("%f", &ticketPrice);

    for (int i = 0; i < 5; i++) {
        printf("Enter age of person %d: ", i + 1);
        scanf("%d", &ages[i]);

        if (ages[i] < 12) {
            totalAmount += ticketPrice * 0.7;  // 30% discount
        } else if (ages[i] > 59) {
            totalAmount += ticketPrice * 0.5;  // 50% discount
        } else {
            totalAmount += ticketPrice;        // No discount
        }
    }

    printf("Total amount for all tickets: %.2f\n", totalAmount);
    return 0;
}
