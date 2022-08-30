/* Name Of the Candidate: S. Mastan Vali
   Roll No:  204G1A0555
   Title of the Experiment: CPU Scheduling Using FCFS Algorithm
   Date of Creation: 30-08-2022
   Date of Execution: 30-08-2022
*/
//Source Code
#include <stdio.h>
struct student {
   char name[50];
   int age;
};

// function prototype
void display(struct student s);

int main() {
   struct student s1;

   printf("Enter name: ");

   // read string input from the user until \n is entered
   // \n is discarded
   scanf("%[^\n]%*c", s1.name);

   printf("Enter age: ");
   scanf("%d", &s1.age);

   display(s1); // passing struct as an argument

   return 0;
}

void display(struct student s) {
   printf("\nDisplaying information\n");
   printf("Name: %s", s.name);
   printf("\nAge: %d", s.age);
}
