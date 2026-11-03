#include<stdio.h>
struct student
{
char name[50];
int rollno;
float marks;
char city[20];
char dream[20];
};
void readstudent(struct student s[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("Enter the name:");
scanf("%s",s[i].name);
printf("Enter the rollno:");
scanf("%d",s[i].rollno);
printf("Enter the marks:");
scanf("%f",s[i].marks);
printf("Enter your city:");
scanf("%s",s[i].city);
printf("Enter your dream:");
scanf("%s",s[i].dream);
}
}
void writestudent(struct student s[],int n)
{
int i;
printf("-----STUDENT DETAILS-----");
for(i=0;i<n;i++)
{
printf("Name:%s",s[i].name);
printf("Rollno:%d",s[i].rollno);
printf("Marks:%f",s[i].marks);
printf("City:%s",s[i].city);
printf("Dream:%s",s[i].dream);
}
}
int main()
{
int n;
printf("Enter the number of student:");
scanf("%d",&n);
struct student s[n];
readstudent(s,n);
writestudent(s,n);
return 0;
}











