#include <stdio.h>
#include <stdlib.h>

/*Variable Declaration*/
struct student_s
{
      char name[50];
      int roll;
      float marks;

};

/*Function prototypes*/
/* Functions for reading and printing student data */
void Read_Student_Data(struct student_s student[],int size);
void Print_Student_Data(struct student_s student[],int size);

/*Main Function*/
int main()
{
struct student_s student[10] ;
Read_Student_Data(student,10);
Print_Student_Data(student,10);

 return 0 ;
}


/*Function Implementations */
void Read_Student_Data(struct student_s student[],int size)
{
    int i ;
    static count =0  ;

    for (i = 0 ; i<10;i++)
    {
        count ++ ;
        printf("Enter Information of student no %d \n",count);
        printf("Enter name:");
        scanf("%s" ,&student[i].name);
        printf("Enter roll:");
        scanf("%d",&student[i].roll);
        printf("Enter marks:");
        scanf("%f",&student[i].marks);
    }
}

void Print_Student_Data(struct student_s student[],int size)
{
    static count =0  ;
    int i ;
    for (i = 0 ; i<10;i++)
    {
        count ++ ;
        printf("\nDisplaying Information %d \n \n",count);
        printf("%s \n",student[i].name);
        printf("%d \n",student[i].roll);
        printf("%f \n",student[i].marks);
    }
}
