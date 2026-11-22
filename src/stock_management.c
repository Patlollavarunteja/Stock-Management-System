#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure to represent a stock item
struct StockItem {
    int id;
    char name[100];
    int quantity;
    float price;
};

// Function to add a new stock item
void addStockItem(struct StockItem stock[], int *count) {
    printf("Enter product name: ");
    scanf("%s", stock[*count].name);
    printf("Enter quantity: ");
    scanf("%d", &stock[*count].quantity);
    printf("Enter price: ");
    scanf("%f", &stock[*count].price);

    stock[*count].id = (*count) + 1; // Assign a unique ID
    (*count)++;
    printf("Item added successfully!\n");
}

// Function to display all stock items
void displayStock(struct StockItem stock[], int count) {
    printf("ID\tName\tQuantity\tPrice\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%d\t\t\t%.2f\n", stock[i].id, stock[i].name, stock[i].quantity, stock[i].price);
    }
}

int main() {
    struct StockItem stock[100]; // Array to store stock items
    int itemCount = 0; // Number of items in stock

    int choice;
    while (1) {
        printf("\nStock Management System\n");
        printf("1. Add Stock Item\n");
        printf("2. Display Stock\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStockItem(stock, &itemCount);
                break;
            case 2:
                displayStock(stock, itemCount);
                break;
            case 3:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
 return 0;
}

