#include <stdio.h>

int main() {
    char room, action;

    printf("Enter room (L = Living Room, K = Kitchen): ");
    scanf(" %c", &room);

    printf("Enter action (L = Lights, T = Thermostat): ");
    scanf(" %c", &action);

    if (room == 'L') {
        if (action == 'L') {
            printf("Adjusting ambient lighting.\n");
        }
        else if (action == 'T') {
            printf("Setting living room temperature.\n");
        }
        else {
            printf("Invalid action!\n");
        }
    }
    else if (room == 'K') {
        if (action == 'L') {
            printf("Turning on bright task lighting.\n");
        }
        else if (action == 'T') {
            printf("Setting kitchen temperature.\n");
        }
        else {
            printf("Invalid action!\n");
        }
    }
    else {
        printf("Invalid room!\n");
    }

    return 0;
}
