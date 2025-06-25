#include <stdio.h>

int main() {
    int choice;

    printf("🛑 SAFE ALERT SYSTEM 🛑\n");
    printf("----------------------\n");
    printf("You are feeling unsafe. Choose an action:\n\n");

    printf("1. Exit Room\n");
    printf("2. Mute User\n");
    printf("3. Report Abuse\n");
    printf("4. Cancel\n");

    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("\nYou have exited the room safely.\n");
            break;
        case 2:
            printf("\nThe user has been muted.\n");
            break;
        case 3:
            printf("\nYour report has been sent to moderators.\n");
            break;
        case 4:
            printf("\nAction cancelled. Stay safe!\n");
            break;
        default:
            printf("\nInvalid choice. Please try again.\n");
    }

    return 0;
}
