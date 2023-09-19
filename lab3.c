/*Ryan Chen
09/19/2023
Lab Section 002
Lab Number 3
Calculates bmi of a person and the category he/she falls into
*/

#include <stdio.h>

int main() {
    int weight;
    int height;
    int bmi;
    int goAgain;
    
    printf("\n\n bmi Calculator \n\n");
    printf("Body Mass Index (bmi) is a ratio of weight to height.\n\n");
    printf("Keep in mind that muscle weighs more than fat, so bmi is \n"
    "not always the best metric of a healthy weight.\n\n\n");

    
    do {

        printf("Enter your weight in pounds (as an integer): ");
        fscanf(stdin, "%d", &weight);
        printf("Enter your height in inches (as an integer): ");
        fscanf(stdin, "%d", &height);

        printf("\n\n");

        bmi = (weight * 703)/(height * height);
        printf("\nYour bmi is %d.\n", bmi);

        if (bmi < 19) {
            printf("According to your bmi, your weight of %d lbs is a unhealthy weight\n", weight);
        } else if (bmi >= 19 && bmi <= 24) {
            printf("According to your bmi, your weight of %d lbs is a healthy weight\n", weight);
        } else if (bmi >= 25 && bmi <= 29) {
            printf("According to your bmi, your weight of %d lbs is considered overweight\n", weight);
        } else if (bmi >= 30) {
            printf("According to your bmi, your weight of %d lbs is considered obese\n", weight);
        }

        printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n");

        do {
            printf("Enter 1 to go again or 0 to quit: ");
            fscanf(stdin, "%d", &goAgain);
        } while (!(goAgain == 0 || goAgain ==1));

        printf("\n\n");
    } while (goAgain == 1);

    return 0;
}

    

