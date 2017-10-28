#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int main() {
    const int ADMIN_PIN_CODE = 9999;
    const SIZE = 5000;

    int usersPinCodes[SIZE];
    int usersMoney[SIZE];

    int coincidentalPin = 0;
    int usersNodeNumber = 0;
    int enteredPinCode = 0;

    int i,j;
    int* pinPtr;

        for ( i = 0; i < SIZE; i++){ //Forming a random array of pin codes
            usersPinCodes[i] = rand() % 8999 + 1000;;
           // printf("%d ", usersPinCodes[i]);

        }
          // printf("\n%d\n", usersPinCodes[0]); // Output of an array of pincodes
            for( j = 0; j <= 3; j++){
                if(j == 2){
                    printf("\nLast try!\n");
                }
                if(j == 3){
                return;
                }
            printf("Enter the Pin!\n");
            int enteredValue;
            enteredValue = scanf("%d", &enteredPinCode);
                if(enteredValue == 0){
                    printf("\nIt`s not correct value!\n");
                    fflush(stdin);
                }
                    for(i = 0; i < SIZE; i++){
                        pinPtr = &usersPinCodes[i]; // In the pointer we store the address of the i-th cell
                        coincidentalPin = *pinPtr; // In the variable we store the value of the i-th cell
                        if (enteredPinCode == coincidentalPin){ // If the entered pin code is the same as i in the array,
                            printf("Hello!");                   // then - Hello!
                        break;
                        }
                    }
                if (enteredPinCode == coincidentalPin){
                break;
                }
            }

        for(;;){
            printf( "\n 1 - Balance\n"
                    "\n 2 - Put money\n"
                    "\n 3 - Take money\n"
                    "\n 4 - Admin\n");

            int usersAction;
            scanf("\n %d", &usersAction);

        switch (usersAction){
                case  1 :  {
                    printf("Balance:\n ");
                    printf("%d,", usersMoney);
                    printf("\n Continue or exit& y/n");
                    scanf("%s", &usersAction);

                        if(tolower(usersAction) == 'y'){
                        }
                        if(tolower(usersAction) == 'n'){
                            return;
                        }
                }
                    break;

                case 2: {
                    int newUsersMoney;
                    int putSum;
                    printf("Put money: \n");
                    scanf("%d", &newUsersMoney);
                    putSum = usersMoney + newUsersMoney;
                    printf("%d", putSum);
                    printf("\n Continue or exit& y/n");
                    scanf("%s", &usersAction);
                        if(tolower(usersAction) == 'y'){
                        }
                        if(tolower(usersAction) == 'n'){
                            return;
                        }
                }
                    break;

                case  3: {
                    int newUsersMoney;
                    int takeSum;
                    printf("Take money: \n");
                    scanf("%d", &newUsersMoney);
                    takeSum = usersMoney - newUsersMoney;
                    printf("%d", takeSum);
                    printf("\n Continue or exit& y/n");
                    scanf("%s", &usersAction);
                        if(tolower(usersAction) == 'y'){
                        }
                        if(tolower(usersAction) == 'n' ){
                            return;
                        }
                            continue;
                }
                    break;

                case  4: {
                    printf("Admins:\n"
                           "Enter pincod:");
                    scanf("%d", &enteredPinCode);
                        if (enteredPinCode == ADMIN_PIN_CODE){
                        printf(" Hello Admin! \n");
                        }
                        for(;;){
                            printf("\n 1 - Balance"
                                    "\n 2 - Set to zero balance");
                            scanf("\n%d", &usersAction);
                        switch (usersAction){
                            case 1: {
                                printf("Balance: \n");
                                printf("%d,", usersMoney);
                                printf("\n Continue or exit& y/n");
                                scanf("%s", &usersAction);
                                    if(tolower(usersAction) == 'y'){
                                    }
                                    if(tolower(usersAction) == 'n'){
                                        return;
                                    }
                                        break;

                            case 2: {
                                int zeroSum;
                                printf("Set to zero balance: ");
                                usersMoney == 0;
                                printf("%d", zeroSum);
                                printf("\n Continue or exit& y/n");
                                scanf("%s", &usersAction);
                                    if(tolower(usersAction) == 'y'){
                                    }
                                    if(tolower(usersAction) == 'n'){
                                        return;
                                    }
                            }
                                break;
                            }
                        }
                    }
                }
            }
        }
 return 0;
}


