#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char name[20];
    int id;
    float grade;
}StudentInfo_t;

float avaerage_highest_lowest_grade(StudentInfo_t * ptrStudent, int countStudent, float *ptrHighest, float *ptrLowest);
int main()
{
    StudentInfo_t arrStudent[10];
    int i;
    float highest = 0, lowest = 0;
    float avr;
    printf("Enter Your Student Info\n");
    printf("Eneter Info Name ID Grade\n");
    for(i = 0; i < 10; i++)
    {
        printf("Enter Student Info [%d]: ",i+1);
        scanf("%s",arrStudent[i].name);
        scanf("%d",&arrStudent[i].id);
        scanf("%f",&arrStudent[i].grade);
    }
    avr = avaerage_highest_lowest_grade(arrStudent, 10, &highest, &lowest);
    printf("Avr: %.2f\n",avr);
    printf("Highest: %.2f\n", highest);
    printf("Lowest: %.2f\n",lowest);
}

float avaerage_highest_lowest_grade(StudentInfo_t * ptrStudent, int countStudent, float *ptrHighest, float *ptrLowest)
{
    int i;
    float avr = 0;
    *ptrLowest = ptrStudent->grade;
    *ptrHighest = ptrStudent->grade;
    for(i = 0; i < countStudent; i++)
    {
        avr += ptrStudent->grade;
        if(ptrStudent->grade < *ptrLowest)
        {
            *ptrLowest = ptrStudent->grade;
        }
        if(ptrStudent->grade > *ptrHighest)
        {
            *ptrHighest = ptrStudent->grade;
        }
        ptrStudent++;
    }
    return avr/countStudent;
}