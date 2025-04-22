// WAP to enter name, classs, age and rollno of a student and display them using structure and save in "students.txt"

#include <stdio.h>

struct students{
    char name[50];
    int class,age,rollno;
};

int main()
{
    struct students s;
    FILE *file;
    file = fopen("students.txt","w");
    printf("Enter the name: ");
    scanf("%s",&s.name);
    printf("Enter the class: ");
    scanf("%d",&s.class);  
    printf("Enter the age: ");
    scanf("%d",&s.age);  
    printf("Enter the rollno: ");
    scanf("%d",&s.rollno);

    fprintf(file,"%s %d %d %d",s.name,s.class,s.age,s.rollno);

}