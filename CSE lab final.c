#include <stdio.h>
#include <stdlib.h>

float calcgrade(int marks)
{
    if (marks >= 80)
        return 4.0;
    else if (marks >= 75)
        return 3.75;
    else if (marks >= 70)
        return 3.5;
    else if (marks >= 65)
        return 3.25;
    else if (marks >= 60)
        return 3.0;
    else if (marks >= 55)
        return 2.75;
    else if (marks >= 50)
        return 2.5;
    else if (marks >= 45)
        return 2.25;
    else if (marks >= 40)
        return 2.0;
    else
        return 0.0;
}

struct info
{
    char subject[10];
    float credit;
    int marks;
    float grade;
};

int main()
{
    struct info m1, m2, m3, m4, m5, m6, m7, m8, m9;

    float totalCredits = 0.0, totalGradePoints = 0.0, GPA;


    m1.credit = 3.00;
    m2.credit = 3.00;
    m3.credit = 3.00;
    m4.credit = 3.00;
    m5.credit = 3.00;
    m6.credit = 1.50;
    m7.credit = 0.75;
    m8.credit = 0.75;
    m9.credit = 1.50;


    printf("Enter score for AVE 4201: ");
    scanf("%d", &m1.marks);

    printf("Enter score for CSE 4201: ");
    scanf("%d", &m2.marks);

    printf("Enter score for HUM 4203: ");
    scanf("%d", &m3.marks);

    printf("Enter score for MAT 4203: ");
    scanf("%d", &m4.marks);

    printf("Enter score for CHM 4201: ");
    scanf("%d", &m5.marks);

    printf("Enter score for CSE 4202: ");
    scanf("%d", &m6.marks);

    printf("Enter score for AVE 4202: ");
    scanf("%d", &m7.marks);

    printf("Enter score for CHM 4202: ");
    scanf("%d", &m8.marks);

    printf("Enter score for ASE 4202: ");
    scanf("%d", &m9.marks);


    m1.grade = calcgrade(m1.marks);
    m2.grade = calcgrade(m2.marks);
    m3.grade = calcgrade(m3.marks);
    m4.grade = calcgrade(m4.marks);
    m5.grade = calcgrade(m5.marks);
    m6.grade = calcgrade(m6.marks);
    m7.grade = calcgrade(m7.marks);
    m8.grade = calcgrade(m8.marks);
    m9.grade = calcgrade(m9.marks);


    totalCredits = m1.credit + m2.credit + m3.credit + m4.credit + m5.credit +
                   m6.credit + m7.credit + m8.credit + m9.credit;

    totalGradePoints = m1.grade*m1.credit + m2.grade*m2.credit + m3.grade*m3.credit +
                       m4.grade*m4.credit + m5.grade*m5.credit + m6.grade*m6.credit +
                       m7.grade*m7.credit + m8.grade*m8.credit + m9.grade*m9.credit;

    GPA = totalGradePoints / totalCredits;

    printf("\nTotal Credits = %.2f\n", totalCredits);
    printf("Total Grade Points Earned = %.2f\n", totalGradePoints);
    printf("Semester GPA = %.2f\n", GPA);

    return 0;
}
