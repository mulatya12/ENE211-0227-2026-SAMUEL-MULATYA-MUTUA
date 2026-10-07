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
        if(marks >= 70){
            grade = 'A';
        }
        else if(marks >= 60){
            grade = 'B';
        }
        else if(marks >= 50){
            grade = 'C';
        }
        else if(marks >= 40){
            grade = 'D';
        }
        else {
            grade = 'F';
        }

        printf("\n     ----------------------------------------------\n");
        printf("                 STUDENT INFORMATION\n");
        printf("     ----------------------------------------------\n");
        printf("     Registration No: %s \n",regNo);
        printf("     Name: %s \n",studName);
        printf("     Marks: %.2f \n\n",marks);
        printf("     Grade: %c \n",grade);
        printf("     ----------------------------------------------\n\n");

        if(marks >= 40){
            printf("     The student has passed.\n\n");
        }
        else{
            printf("     The student has failed.\n\n");
        }
    }
    return 0;
}
