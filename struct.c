#include <stdio.h>
#include <stdlib.h>
typedef struct
{
 char name[30];
 int id;
 int exp;
 int salary;
}Employee;
int main()
{
 int i,n=5;
 Employee employees[n];
 printf("enter %d employee details\n",n);
 for(i=0;i<n;i++)
 {
  printf("employee %d :- \n",i+1);
  //name
  printf("name :");
  scanf("%s",employees[i].name);
  //id
  printf("id :");
  scanf("%d",employees[i].id);
  //exp
  printf("exp  :");
  scanf("%d",employees[i].exp);
  //salary
  printf("salary :");
  scanf("%d",employees[i].salary);
  printf("\n");
 }
 printf("-----ALL EMPLOYEE DETAILS----\n");
 for(i=0;i<n;i++)
 printf("name \t:");
 printf("%s \n",employees[i].name);
 printf("id \t:");
 printf("%d \n",employees[i].id);
 printf("exp \t:");
 printf("%d \n",employees[i].exp);
 printf("salary \t:");
 printf("%d \n",employees[i].salary);
 printf("\n");
 return 0;
}


