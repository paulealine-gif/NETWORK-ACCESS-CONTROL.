#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int id, training, active;

    // Check Employee ID
    printf("Enter ID validity (1=Valid, 0=Invalid): ");
    scanf("%d", &id);

    if (id == 0) {
        printf("Enter ID validity again: ");
        scanf("%d", &id);

        if (id == 0) {
            printf("Enter ID validity one last time: ");
            scanf("%d", &id);

            if (id == 0) {
                printf("Program stopped after 3 zeros.");
                return 0;
            }
        }
    }

    // Check Security Training
    printf("Enter training status (1=Complete, 0=Incomplete): ");
    scanf("%d", &training);

    if (training == 0) {
        printf("Enter training status again: ");
        scanf("%d", &training);

        if (training == 0) {
            printf("Enter training status one last time: ");
            scanf("%d", &training);

            if (training == 0) {
                printf("Program stopped after 3 zeros.");
                return 0;
            }
        }
    }

    // Check Account Status
    printf("Enter account status (1=Active, 0=Inactive): ");
    scanf("%d", &active);

    if (active == 0) {
        printf("Enter account status again: ");
        scanf("%d", &active);

        if (active == 0) {
            printf("Enter account status one last time: ");
            scanf("%d", &active);

            if (active == 0) {
                printf("Program stopped after 3 zeros.");
                return 0;
            }
        }
    }

    // Validate the inputs
    if ((id != 0 && id != 1) ||
        (training != 0 && training != 1) ||
        (active != 0 && active != 1)) {
        printf("Invalid input! Enter only 1 or 0.");
    }
    else if (id == 0) {
        printf("Access rejected: Invalid Employee ID.");
    }
    else if (training == 0) {
        printf("Access rejected: Training required.");
    }
    else if (active == 0) {
        printf("Access rejected: Account inactive.");
    }
    else {
        printf("Access granted.");
    }

    	
	return 0;
}
