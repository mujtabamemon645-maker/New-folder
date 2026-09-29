#include <stdio.h>

int main() {
    int mainChoice, subChoice;

    // Main Chatbot Menu
    printf("=== AI Chatbot ===\n");
    printf("1. Greeting\n");
    printf("2. Study\n");
    printf("3. Weather\n");
    printf("4. Help\n");
    printf("Select a category (1-4): ");
    scanf("%d", &mainChoice);

    switch (mainChoice) {
        case 1:
            // Submenu for Greeting
            printf("\n--- Greeting Options ---\n");
            printf("1. Hello\n");
            printf("2. How are you\n");
            printf("3. Goodbye\n");
            printf("Select an option (1-3): ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1:
                    printf("\nChatbot: Hello! How can I assist you today?\n");
                    break;
                case 2:
                    printf("\nChatbot: I'm just a computer program, but I'm doing great! How are you?\n");
                    break;
                case 3:
                    printf("\nChatbot: Goodbye! Have a great day ahead.\n");
                    break;
                default:
                    printf("\nInvalid choice in Greeting options.\n");
                    break;
            }
            break;

        case 2:
            // Submenu for Study
            printf("\n--- Study Options ---\n");
            printf("1. Programming\n");
            printf("2. Mathematics\n");
            printf("3. AI\n");
            printf("Select an option (1-3): ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1:
                    printf("\nChatbot: Programming is the process of creating instructions for computers using languages like C, Python, and C++.\n");
                    break;
                case 2:
                    printf("\nChatbot: Mathematics provides the foundation for logic, algorithms, and analytical problem-solving.\n");
                    break;
                case 3:
                    printf("\nChatbot: Artificial Intelligence focuses on building smart machines capable of performing tasks that typically require human intelligence.\n");
                    break;
                default:
                    printf("\nInvalid choice in Study options.\n");
                    break;
            }
            break;

        case 3:
            // Submenu for Weather
            printf("\n--- Weather Options ---\n");
            printf("1. Today\n");
            printf("2. Tomorrow\n");
            printf("3. Forecast\n");
            printf("Select an option (1-3): ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1:
                    printf("\nChatbot: Today's weather is clear and sunny with a mild breeze.\n");
                    break;
                case 2:
                    printf("\nChatbot: Tomorrow's weather is expected to be partly cloudy.\n");
                    break;
                case 3:
                    printf("\nChatbot: The 7-day forecast shows pleasant weather with light rain expected over the weekend.\n");
                    break;
                default:
                    printf("\nInvalid choice in Weather options.\n");
                    break;
            }
            break;

        case 4:
            // Submenu for Help
            printf("\n--- Help Options ---\n");
            printf("1. About Chatbot\n");
            printf("2. Commands\n");
            printf("3. Exit\n");
            printf("Select an option (1-3): ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1:
                    printf("\nChatbot: I am a simple rule-based C AI Chatbot designed to help answer your queries.\n");
                    break;
                case 2:
                    printf("\nChatbot: You can navigate through categories (1: Greeting, 2: Study, 3: Weather, 4: Help) using numeric inputs.\n");
                    break;
                case 3:
                    printf("\nChatbot: Exiting the chatbot session. Goodbye!\n");
                    break;
                default:
                    printf("\nInvalid choice in Help options.\n");
                    break;
            }
            break;

        default:
            printf("\nInvalid main category selection!\n");
            break;
    }

    return 0;
}