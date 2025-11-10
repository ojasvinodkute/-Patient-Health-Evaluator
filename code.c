#include <stdio.h>

char* getHealthStatus(float avg) {
    if (avg >= 80)
        return "Healthy";
    else if (avg >= 60)
        return "Moderate Risk";
    else
        return "High Risk";
}

int main() {
    char name[50];       
    float bp, sugar, heart, bmi, oxygen, avg1;

    printf("Enter patient's name: ");
    scanf("%49s", name);  

    printf("Enter Blood Pressure (out of 100): ");
    scanf("%f", &bp);

    printf("Enter Sugar Level (out of 100): ");
    scanf("%f", &sugar);

    printf("Enter Heart Rate Stability (out of 100): ");
    scanf("%f", &heart);

    printf("Enter BMI Score (out of 100): ");
    scanf("%f", &bmi);

    printf("Enter Oxygen Level (out of 100): ");
    scanf("%f", &oxygen);


    avg1 = (bp + sugar + heart + bmi + oxygen) / 5.0;

    
    printf("\n--- Patient Health Report ---\n");
    printf("Name: %s\n", name);
    printf("Average Health Score: %.2f\n", avg1);
    printf("Health Status: %s\n", getHealthStatus(avg1));

    return 0;
}



