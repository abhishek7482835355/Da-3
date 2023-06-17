#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct class {
   char name[50];
   int roll_no;
   int marks;
   struct dob {
      int day;
      int month;
      int year;
   } dob;
};

void get_data(struct class *, int);
void create_array(struct class *, int *, int);
void quicksort(int *, int, int);
void sort_array(int *, int);
void print_array(int *, int);

int main(void) {
   int size1, size2;
   printf("Enter the number of students in the first class: ");
   scanf("%d", &size1);

   // Allocate memory for the first class
   struct class *c = (struct class *)malloc(size1 * sizeof(struct class));
   if (c == NULL) {
      printf("Error: Memory allocation failed\n");
      exit(1);
   }

   // Get data for the first class
   get_data(c, size1);

   printf("Enter the number of students in the second class: ");
   scanf("%d", &size2);

   // Reallocate memory for both classes
   c = (struct class *)realloc(c, (size1 + size2) * sizeof(struct class));
   if (c == NULL) {
      printf("Error: Memory reallocation failed\n");
      exit(1);
   }

   // Get data for the second class
   get_data(c + size1, size2);

   // Create arrays of marks for each class
   int marks1[size1], marks2[size2], marks3[size1 + size2];
   create_array(c, marks1, size1);
   create_array(c + size1, marks2, size2);
   create_array(c, marks3, size1 + size2);

   // Sort the arrays using quicksort
   quicksort(marks1, 0, size1 - 1);
   quicksort(marks2, 0, size2 - 1);
   quicksort(marks3, 0, size1 + size2 - 1);

   // Print the sorted arrays
   printf("Marks for Class 1:\n");
   print_array(marks1, size1);
   printf("Marks for Class 2:\n");
   print_array(marks2, size2);
   printf("Combined Marks:\n");
   print_array(marks3, size1 + size2);

   // Free the allocated memory
   free(c);
}

void get_data(struct class *c, int n) {
   for (int i = 0; i < n; i++) {
      printf("Enter the name of the student: ");
      scanf("%s", c[i].name);
      printf("Enter the roll number of the student: ");
      if (scanf("%d", &c[i].roll_no) != 1) {
         printf("Error: Invalid input for roll number\n");
         exit(1);
      }
      printf("Enter the marks scored by the student: ");
      if (scanf("%d", &c[i].marks) != 1) {
         printf("Error: Invalid input for marks\n");
         exit(1);
      }
      printf("Enter the date of birth of the student (DD MM YYYY): ");
      if (scanf("%d %d %d", &c[i].dob.day, &c[i].dob.month, &c[i].dob.year) != 3) {
         printf("Error: Invalid input for date of birth\n");
         exit(1);
      }
   }
}

void create_array(struct class *c, int *arr, int n) {
   for (int i = 0; i < n; i++) {
      arr[i] = c[i].marks;
   }
}

void quicksort(int *arr, int left, int right) {
   int i = left;
   int j = right;
   int pivot = arr[(left + right) / 2];
   int temp;
   while (i <= j) {
      while (arr[i] < pivot) {
         i++;
      }
      while (arr[j] > pivot) {
         j--;
      }
      if (i <= j) {
         temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
         i++;
         j--;
      }
   }
   if (left < j) {
      quicksort(arr, left, j);
   }
   if (i < right) {
      quicksort(arr, i, right);
   }
}

void print_array(int *arr, int n) {
   for (int i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }
   printf("\n");
}

