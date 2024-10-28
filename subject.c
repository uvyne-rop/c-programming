#include <stdio.h>

int main() {
    int math, phy, eng, chem;
    int total;
    float average;
    int highest;

    // Input marks for each subject
    printf("Enter the marks for Math (0-100): ");
    scanf("%d", &math);
    printf("Enter the marks for Physics (0-100): ");
    scanf("%d", &phy);
    printf("Enter the marks for English (0-100): ");
    scanf("%d", &eng);
    printf("Enter the marks for Chemistry (0-100): ");
    scanf("%d", &chem);

    // Validate that all marks are within range
    if (math < 0 || math > 100 || eng < 0 || eng > 100 || phy < 0 || phy > 100 || chem < 0 || chem > 100) {
        printf("Error: Marks should be between 0 and 100.\n");
        return 1;
    }

    // Calculate total and average marks
    total = math + phy + eng + chem;
    average = total / 4.0;

    // Determine the highest mark
    highest = math;
    if (phy > highest) highest = phy;
    if (chem > highest) highest = chem;
    if (eng > highest) highest = eng;

    // Output results
    printf("Total marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Highest Marks: %d\n", highest);

    // Determine grade based on average marks
    if (average >= 70) {
        printf("Grade: A\n");
    }
    else if (average >= 60) {
        printf("Grade: B\n");
    }
    else if (average >= 50) {
        printf("Grade: C\n");
    }
    else {
        printf("Grade: E\n");
    }

    return 0;
}
