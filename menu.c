#include <stdio.h>

int main() {
    int choice;

    printf("******** Welcome to Our Restaurant ********\n");
    printf("Please select an item from the menu:\n");
    printf("1. Burger      - Rs. 250\n");
    printf("2. Pizza       - Rs. 500\n");
    printf("3. Sandwich    - Rs. 200\n");
    printf("4. Fries       - Rs. 100\n");
    printf("5. Cold Drink  - Rs. 80\n");
    printf("6. Exit\n");

    printf("\nEnter your choice (1-6): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("You selected Burger. Price: Rs. 250\n");
            break;
        case 2:
            printf("You selected Pizza. Price: Rs. 500\n");
            break;
        case 3:
            printf("You selected Sandwich. Price: Rs. 200\n");
            break;
        case 4:
            printf("You selected Fries. Price: Rs. 100\n");
            break;
        case 5:
            printf("You selected Cold Drink. Price: Rs. 80\n");
            break;
        case 6:
            printf("Thank you for visiting! Goodbye!\n");
            break;
        default:
            printf("Invalid choice! Please select from 1 to 6.\n");
    }

    return 0;
}
