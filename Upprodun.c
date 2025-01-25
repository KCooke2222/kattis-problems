#include <stdio.h>

int main() {
    // Get numbers of classes and students
    int numClasses;
    scanf("%d", &numClasses);

    int numStudents;
    scanf("%d", &numStudents);

    // Create classroom layout array
    int numBonusClasses = numStudents % numClasses;
    int numStudentsInClass = numStudents / numClasses;

    // Output classroom layout
    for (int i = 0; i < numClasses; i++) {
        for (int j = 0; j < numStudentsInClass; j++) {
            printf("*");
        }
        if (i < numBonusClasses) {
            printf("*");
        }
        printf("\n");
    }
}