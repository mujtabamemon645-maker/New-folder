#include <stdio.h>

int main() {
    int mainChoice, subChoice;

    // Display Main Category Menu
    printf("=== Image Classification System ===\n");
    printf("1. Animal\n");
    printf("2. Vehicle\n");
    printf("3. Food\n");
    printf("4. Human\n");
    printf("Select a Category (1-4): ");
    scanf("%d", &mainChoice);

    // Outer if-else for Main Category
    if (mainChoice == 1) {
        // Submenu for Animal
        printf("\n--- Animal Subcategory ---\n");
        printf("1. Cat\n");
        printf("2. Dog\n");
        printf("3. Bird\n");
        printf("Select a Subcategory (1-3): ");
        scanf("%d", &subChoice);

        // Inner if-else for Animal subcategories
        if (subChoice == 1) {
            printf("\nSelected Image: Animal -> Cat\n");
        } else if (subChoice == 2) {
            printf("\nSelected Image: Animal -> Dog\n");
        } else if (subChoice == 3) {
            printf("\nSelected Image: Animal -> Bird\n");
        } else {
            printf("\nInvalid Animal Subcategory!\n");
        }
    } 
    else if (mainChoice == 2) {
        // Submenu for Vehicle
        printf("\n--- Vehicle Subcategory ---\n");
        printf("1. Car\n");
        printf("2. Bus\n");
        printf("3. Bike\n");
        printf("Select a Subcategory (1-3): ");
        scanf("%d", &subChoice);

        // Inner if-else for Vehicle subcategories
        if (subChoice == 1) {
            printf("\nSelected Image: Vehicle -> Car\n");
        } else if (subChoice == 2) {
            printf("\nSelected Image: Vehicle -> Bus\n");
        } else if (subChoice == 3) {
            printf("\nSelected Image: Vehicle -> Bike\n");
        } else {
            printf("\nInvalid Vehicle Subcategory!\n");
        }
    } 
    else if (mainChoice == 3) {
        // Submenu for Food
        printf("\n--- Food Subcategory ---\n");
        printf("1. Pizza\n");
        printf("2. Burger\n");
        printf("3. Biryani\n");
        printf("Select a Subcategory (1-3): ");
        scanf("%d", &subChoice);

        // Inner if-else for Food subcategories
        if (subChoice == 1) {
            printf("\nSelected Image: Food -> Pizza\n");
        } else if (subChoice == 2) {
            printf("\nSelected Image: Food -> Burger\n");
        } else if (subChoice == 3) {
            printf("\nSelected Image: Food -> Biryani\n");
        } else {
            printf("\nInvalid Food Subcategory!\n");
        }
    } 
    else if (mainChoice == 4) {
        // Submenu for Human
        printf("\n--- Human Subcategory ---\n");
        printf("1. Male\n");
        printf("2. Female\n");
        printf("3. Child\n");
        printf("Select a Subcategory (1-3): ");
        scanf("%d", &subChoice);

        // Inner if-else for Human subcategories
        if (subChoice == 1) {
            printf("\nSelected Image: Human -> Male\n");
        } else if (subChoice == 2) {
            printf("\nSelected Image: Human -> Female\n");
        } else if (subChoice == 3) {
            printf("\nSelected Image: Human -> Child\n");
        } else {
            printf("\nInvalid Human Subcategory!\n");
        }
    } 
    else {
        printf("\nInvalid Main Category Selected!\n");
    }

    return 0;
}