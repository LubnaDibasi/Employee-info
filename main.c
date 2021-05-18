#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee{
int id;
char name[20];
float Salary;
char ChildrenNames [5] [10];
int counter;
};

void printChildren(struct employee *array, int id){
for (int i=0; i<3; i++)
{
      if (id == array[i].id){

      if (array[i].counter != 0){
    printf("Children names:");
      for (int j=0; j<array[i].counter; j++)

      if ( array[i].ChildrenNames[j][0] ==  'S' || array[i].ChildrenNames[j][0] == 's') {


    printf("%s %s",array[i].ChildrenNames[j],array[i].name );}
    return; }

    printf("Employee has no children");
    return; }}

    printf("no Employee has the given ID");
}

int main()
{
struct employee array[3];

int i, j,id;

for (i=0; i<3; i++) {
printf("Enter employee #%d id:", i+1);
scanf("%d", &array[i].id);
getchar();

printf("Enter employee name: ");
gets(array[i].name);


printf("Enter employee salary: ");
scanf("%f", &array[i].Salary);
getchar();

printf("How many kids? ");
scanf("%d", &array[i].counter);
getchar();


for (j=0; j<array[i].counter; j++)
{ printf("Enter child #%d name: ", j+1);
  scanf("%s", array[i].ChildrenNames[j]);
 }
}

printf("Enter the id of the employee you would like to view his child name starting with letter S: ");
scanf("%d", &id);

printChildren(array,id);


    return 0;
}








