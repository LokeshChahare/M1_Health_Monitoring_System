#include <stdio.h>
#include "../inc/bmi_bmr_fatPercent.h"

float bmi(float *weight, float *height)
{

    float x = *weight / ((*height) * (*height));

    printf("Your Body Mass Index(BMI) is %f\n", x);

    if (x < 15)
    {
        printf("Your BMI category is: Starvation\n");
    }
    else if (x >= 15.1 && x <= 17.5)
    {
        printf("Your BMI category is: Anorexic\n");
    }
    else if (x >= 17.6 && x <= 18.5)
    {
        printf("Your BMI category is: Underweight\n");
    }
    else if (x >= 18.6 && x <= 24.9)
    {
        printf("Your BMI category is: Ideal\n");
    }
    else if (x >= 25 && x <= 25.9)
    {
        printf("Your BMI category is: Overweight\n");
    }
    else if (x >= 30 && x <= 30.9)
    {
        printf("Your BMI category is: Obese\n");
    }
    else if (x >= 40)
    {
        printf("Your BMI category is: Morbidly Obese\n");
    }
    else
    {
        printf("Invalid entry\n");
    }

    return x;
}