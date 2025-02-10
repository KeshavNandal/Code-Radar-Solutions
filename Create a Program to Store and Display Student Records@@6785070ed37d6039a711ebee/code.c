#include <stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[40];
    float marks;
};

void display(struct student student)
{
    printf("Roll number: %d, Name: %s, Marks: %.2f",roll,name,marks);
}
int main()
{
    int n;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        student student1;
        student1.roll;
        student1.name;
        student1.marks;
        scanf("%d%s%f",&stduent1.roll,&student1.name,&student1.marks);
        display();
    }
    
}