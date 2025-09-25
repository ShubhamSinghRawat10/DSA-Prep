#include<stdio.h>
struct student{
    int rollno;
    char name[50];
    float marks;
};
int main()
{
    struct student s1;
    printf("Enter roll number: ");
    scanf("%d", &s1.rollno);
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    struct student s2;
    printf("Enter roll number: ");
    scanf("%d", &s2.rollno);
    printf("Enter name: ");
    scanf("%s", s2.name);
    printf("Enter marks: ");
    scanf("%f", &s2.marks);

    //display ke liye h
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s1.rollno);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.f\n", s1.marks);
    printf("\n");
    printf("Roll Number: %d\n", s2.rollno);
    printf("Name: %s\n", s2.name);
    printf("Marks: %.f\n", s2.marks);
    return 0;
}