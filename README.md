# -Patient-Health-Evaluator
This project efficiently evaluates patients’ overall health using simple calculations and control structures in C. It provides quick insights into a patient’s health status, making it useful for basic health monitoring applications.
 Code for Care:- Patient Health Evaluator


   Research
( Understanding the question)

Introduction:
Evaluating student performance through accurate calculation of average marks and grade assignment is essential in academic programs. This designs a system that inputs marks obtained by students in key subjects—Mathematics, Physics, Chemistry, English, and Computer Science—and computes their average score. Based on predefined grading criteria, the system assigns grades to students, providing a fair assessment of their academic performance. Cricket is a widely followed sport, and evaluating a player’s performance over their career is essential for selection, awards, and recognition. The Patient Health Monitoring System is a C program designed to evaluate the overall health condition of patients based on key medical parameters such as blood pressure, sugar level, heart rate stability, BMI, and oxygen level. The program calculates the average of these readings to determine a health score and classifies each patient into categories like Healthy, Moderate Risk, or High Risk. This system helps in quickly assessing patient health status using simple calculations, loops, and conditional logic in C programming..

Key Points:

Student Marks: Scores obtained by students in various subjects.
Average Marks: The mean of the marks obtained across all subjects.
Grading Criteria: The system that assigns grades (A, B, C, etc.) based on the average marks.
Subjects: Mathematics, Physics, Chemistry, English, and Computer Science.
 SInput Validation: Ensures that the marks entered are within acceptable limits (e.g., 0–100).
Output: Displays the average marks and corresponding grade for each student.
Control Structures: Usage of loops and conditional statements to process multiple students and assign grades.
 Patient Data: Takes readings like BP, Sugar, Heart Rate, BMI, and Oxygen Level.
Average Score: Calculates the mean of all health readings.
Health Grade: Classifies patients as Healthy, Moderate Risk, or High Risk.
Control Logic: Uses loops and if–else statements for processing and grading.
Output: Displays each patient’s average health score and health status.



Summary:
This project efficiently evaluates patients’ overall health using simple calculations and control structures in C. It provides quick insights into a patient’s health status, making it useful for basic health monitoring applications.

Sources:

https://codeforwin.org/c-programming/c-program-to-enter-student-marks-and-calculate-percentage-and-grade 

https://tutorial.techaltum.com/c-program-to-find-grade-of-a-student.html


https://tinyurl.com/2epzjx3e 

2. Analysis (Breaking Down the Problem)

Understanding the Problem:
The problem is to create a C program that evaluates a patient’s overall health based on multiple medical readings. Since parameters like blood pressure, sugar level, heart rate, BMI, and oxygen level reflect physical condition, the program calculates the average of these values to determine a Health Score. Based on predefined thresholds, it classifies patients into categories such as Healthy, Moderate Risk, or High Risk. This automated health evaluation system helps quickly assess a patient’s wellness status and can assist medical staff in identifying individuals who may need attention.
Key Requirements:

Input: Health readings — Blood Pressure, Sugar Level, Heart Rate, BMI, and Oxygen Level (each between 0–100). Five float values representing patient health readings.


Process: Calculate the average of all readings and determine health status using if–else conditions.


Output: Display the patient’s average health score and corresponding health grade.
Average Health Score
Health Status (Healthy / Moderate Risk / High Risk)



Pseudocode:
Start

  Prompt user to enter health readings:
    - Blood Pressure
    - Sugar Level
    - Heart Rate
    - BMI
    - Oxygen Level

  Read all five readings
  Calculate Average = (BP + Sugar + Heart + BMI + Oxygen) / 5

  If Average >= 80 then
       Health Status = "Healthy"
  Else if Average >= 60 then
       Health Status = "Moderate Risk"
  Else
       Health Status = "High Risk"

  Display Average Health Score
  Display Health Status

End


Sources:
https://tinyurl.com/4a2kppm4 
https://www.maxhealthcare.in/blogs/normal-vs-dangerous-heart-rate 
https://www.ckbhospital.com/blogs/normal-blood-oxygen-levels 

3. Ideate (Planning Our Solution)

Approach & Description:
The approach to this project is simple and systematic, focusing on evaluating a patient’s overall health using multiple key health parameters. The program collects readings such as Blood Pressure, Sugar Level, Heart Rate, BMI, and Oxygen Level, then calculates their average to determine a Health Score. Using if–else if conditions, the score is compared against predefined thresholds to classify the patient as Healthy, Moderate Risk, or High Risk.
This method ensures consistent and objective evaluation by converting raw health data into meaningful categories. It demonstrates how basic programming logic and control structures in C can be applied to support health monitoring and early risk detection efficiently

Own Thoughts:
Assessing patient health through average scores is an effective and unbiased approach since it relies on measurable data rather than subjective opinions. The use of clear thresholds ensures fairness and consistency in classifying patient conditions. Including multiple parameters reflects a realistic and holistic view of health status, while automating the grading process saves time and reduces human error. This project highlights how simple C programming techniques can be effectively used to support real-world healthcare monitoring and data-driven decision-making.
Additional Ideas
Patient Details:
 Include basic information such as name, age, gender, and patient ID to make the system more organized and realistic.


File Handling:
 Store each patient’s readings, average score, and health status in a text file for record-keeping and future reference.


Best and Critical Patient Identification:
 Compare average health scores to determine the healthiest and most critical patients.


Input Validation:
 Ensure that all entered readings are within a valid range (0–100) to maintain data accuracy.


Health Report Summary:
 Display the total number of patients and the count of those in each health category (Healthy, Moderate Risk, High Risk).


Future Enhancement:
 Integrate additional health parameters or connect with sensors for real-time monitoring in future versions.


Sources:

https://www.scribd.com/document/840590976/Conditional-Statements-Homeworks 

https://www3.ntu.edu.sg/home/ehchua/programming/cpp/c1_Basics.html#:~:text=For%20examples%2C,statements...%20%7D 

4. Build (Building and Understanding the program)
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






5. Testing



 




6. Conclusion

This project efficiently evaluates a patient’s overall health by analyzing key health parameters using simple calculations and control structures in C. It provides quick insights into a patient’s condition, helping to identify potential health issues early. The program demonstrates how basic programming logic can be applied to develop practical health monitoring tools that support effective decision-making in medical assessments





7.Implementation
GITHUB:-
 
SourceForge:-
https://sourceforge.net/p/patient-healt-evaluator1/code/ci/main/tree/ 




