#include <stdio.h>
#include <stdlib.h>

/*Function prototypes*/
/* Functions for reading and printing student data */
struct student_s Read_Student_Data(void);
void Print_Student_Data(struct student_s student);

/*Variable Declaration*/
struct student_s
{
      char name[50];
      int roll;
      float marks;

};

/*Main Function*/
int main()
{
struct student_s student ;
student = Read_Student_Data();
Print_Student_Data(student);

 return 0 ;
}


/*Function Implementations */
void Print_Student_Data(struct student_s student)
{
 printf("\nDisplaying Information \n \n");

 printf("%s \n",student.name);
 printf("%d \n",student.roll);
 printf("%f \n",student.marks);

}
struct student_s Read_Student_Data(void)
{
 struct student_s student ;
 printf("Enter Information of student \n");
 printf("Enter name:");
 scanf("%s" ,&student.name);
 printf("Enter roll:");
 scanf("%d",&student.roll);
 printf("Enter marks:");
 scanf("%f",&student.marks);

 return student ;

}

