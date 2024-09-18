// C program to create a file and write data into file

#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    file = fopen("data.txt", "w");  // Open the file in write mode

    if (file == NULL) {  // Check if file was opened successfully
        printf("Error: Unable to create file!\n");
        return 1;
    }

    printf("Enter data to write to file: ");
    fgets(data, sizeof(data), stdin);  // Read data from user input

    fprintf(file, "%s", data);  // Write data to file
    fclose(file);  // Close the file

    printf("Data written to file successfully.\n");

    return 0;
}

