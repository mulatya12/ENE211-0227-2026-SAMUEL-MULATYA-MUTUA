#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int numberOfStudents;
    char regNo[50];
    char studName[100];
    float marks;
    char grade;
    printf("\nEnter the number of students: ");
    scanf("%d",&numberOfStudents);
    getchar();

    for(int count = 0;count < numberOfStudents; ++count){
        printf("\n      STUDENT %d \n",count + 1);
        printf("Enter the student's name: ");
        fgets(studName,sizeof(studName),stdin);
        printf("Enter the student's registration number: ");
        fgets(regNo,sizeof(regNo),stdin);
        printf("Enter the student's marks: ");
        scanf("%f",&marks);
        getchar();

        switch ((int)marks / 10) {
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;

            case 6:
                grade = 'B';
                break;

            case 5:
                grade = 'C';
                break;

            case 4:
                grade = 'D';
                break;

            default:
                grade = 'F';
                break;
        }

        printf("\n     ----------------------------------------------\n");
        printf("                 STUDENT INFORMATION\n");
        printf("     ----------------------------------------------\n");
        printf("     Registration No: %s \n",regNo);
        printf("     Name: %s \n",studName);
        printf("     Marks: %.2f \n\n",marks);
        printf("     Grade: %c \n",grade);
        printf("     ----------------------------------------------\n\n");

        switch ((int)(marks >= 40)) {
            case 1:
                printf("     The student has passed.\n\n");
                break;

            case 0:
                printf("     The student has failed.\n\n");
                break;
        }
    }
    return 0;
}
