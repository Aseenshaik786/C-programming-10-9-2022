#include<stdio.h>
#include<string.h>
#define SIZE 20
 
struct bookdetail
{
          char name[20];
          char author[20];
          int subject;
          float id;
 
};
 
void output(struct bookdetail v[],int n);
 
void main()
{
          struct bookdetail b[SIZE];
 
          int num,i;
          printf("Enter the Numbers of Books:");
          scanf("%d",&num);
          printf("\n");
          for(i=0;i<num;i++)
 
          {
 
                   printf("\t=:Book %d Detail:=\n",i+1);
 
                   printf("\nEnter the Book Name:\n");
                   scanf("%s",b[i].name);
 
                   printf("Enter the Author of Book:\n");
                   scanf("%s",b[i].author);
 
                   printf("Enter the subject:\n");
                   scanf("%d",b[i].subject);
 
                   printf("Enter the Book id:\n");
                   scanf("%f",b[i].id);
 
          }
 
          output(b,num);
 
}
 
void output(struct bookdetail v[],int n)
 
{
 
          int i,t=1;
 
          for(i=0;i<n;i++,t++)
 
          {
 
                    printf("\n");
 
                   printf("Book No.%d\n",t);
 
                   printf("\t\tBook %d Name is=%s \n",t,v[i].name);
 
                   printf("\t\tBook %d Author is=%s \n",t,v[i].author);
 
                   printf("\t\tBook %d subject is=%d \n",t,v[i].subject);
 
                   printf("\t\tBook %d id is=%f \n",t,v[i].id);
 
                   printf("\n");
 
          }
 
}
