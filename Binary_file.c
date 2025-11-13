/*
Name:Dominic Muthomi
Reg No:CT101/G/26556/25
Description:A program to store student examination results in a binary file
           named results.dat
Date:06/11/2025
*/
#include <stdio.h>
#include <stdlib.h>

// Define the structure for student information
struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student student;
    char choice;

    // Open the file in append binary mode
    file = fopen("C:\\Users\\L3BOH's\\OneDrive\\Documents\\c programing\\results.dat", "ab");
    if (file == NULL) {
        printf("Error: Could not open results.dat for writing.\n");
        return 1;
    }

    do {
        // Input student details
        printf("Enter student name: ");
        fgets(student.name, sizeof(student.name), stdin);

        printf("Enter registration number: ");
        fgets(student.regNo, sizeof(student.regNo), stdin);

        printf("Enter total marks: ");
        scanf("%f", &student.totalMarks);
        getchar(); // Clear newline from input buffer

        // Write the record to the binary file
        fwrite(&student, sizeof(struct Student), 1, file);
        printf("Record saved successfully.\n");
        fprintf(file,"Record saved successfully");
        // Ask if user wants to add another record
        printf("Do you want to add another record? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // Clear newline from input buffer
      
    } while (choice == 'y' || choice == 'Y');

    // Close the file
    fclose(file);

    return 0;
}
