#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define DATA_SIZE 1000

//optional delay function
void delay2(int number_of_seconds) {
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}

//Writing the reciept
void write_file() {
    FILE *fPtr;
    char account_name[DATA_SIZE];
    printf("Enter Account Name: ");
    scanf("%s", account_name);
    while ((getchar()) != '\n');

    char file_suffix[] = ".txt";
    strcat(account_name, file_suffix); //adding a '.txt' at the end of each file
    fPtr = fopen(account_name, "w");

    if (fPtr == NULL) {
        printf("Operation Unsuccessful\n");
        exit(EXIT_FAILURE);
    }
    time_t s, val = 1;
    struct tm *current_time;
    s = time(NULL);
    current_time = localtime(&s);

    char Store_name[DATA_SIZE];
    char prefix_store[] = "\t";
    fputs(prefix_store, fPtr);
    fputs("STORE NAME HERE", fPtr);

    fclose(fPtr);

    printf("Operation Successful\n");
}