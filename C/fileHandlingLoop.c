// WAP to enter name, classs, age and rollno of 5 student and display them using union and save in "students2.txt"

#include <stdio.h>
union students{
    char name[50];
    int age, class, rollno;
};

int main()
{
    union students s[5];
    FILE *file;
    file = fopen("students2.txt","w");
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the name, class age and rollno of student: ");
        scanf("%s %d %d %d",&s[i].name,&s[i].class,&s[i].age,&s[i].rollno);
    }

    for(i=0;i<5;i++)
    {
        fprintf(file,"\nThe name class age and rollno is %s %d %d %d",s[i].name,s[i].class,s[i].age,s[i].rollno);
    }
}