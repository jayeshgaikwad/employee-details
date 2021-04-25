#include<stdio.h>
#include<conio.h>
struct emp
{
	int id,salary;
	char name[20];
}e[100];

//To accept employee details
void accept(int n)
{
	printf("\nEnter employee id: ");
    scanf("%d",&e[n].id);
    printf("\nEnter employee name: ");
    scanf("%s",e[n].name);
    printf("\nEnter employee salary: ");
    scanf("%d",&e[n].salary);
}

//To display employee details
void display(int n)
{
    printf("\nemployee id:\t\t%d",e[n].id);
    printf("\nName:\t\t\t%s",e[n].name);
    printf("\nsalary:\t\t\t%d\n",e[n].salary);

}
    void main()
{
    int c,n,i,Id; //c=choice , n=number of employees , Id=employee id
do
{
    printf("\n1.Accept Details\n2.Display Details\n3.Search Employee by Id \n4.Exit\nEnter your choice:");
    scanf("%d",&c);
    switch(c)
{
    case 1:printf("Enter the number of employees:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
{
    accept(i);
}
    break;
    case 2:printf("\n===============Details of employees=====================\n");
    for(i=0;i<n;i++)
{
    display(i);
}
    break;
    case 3: printf("Enter the employee Id: ");
    scanf("%d",&Id);
    for(i=0;i<n;i++)
{
    if(Id==e[i].id)
{
    display(i);
    break;
}
}
}
}while(c<4);
}
