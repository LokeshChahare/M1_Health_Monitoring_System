#include <stdio.h>
#include <math.h>
#include "../inc/bmi_bmr_fatPercent.h"

float fat_percent(int *age, float *weight_in_kg, float *height_in_m, char *Gender)
{
    float f, b;
    float x = *weight_in_kg / ((*height_in_m) * (*height_in_m));
    switch (*Gender)
    {
    case 'M':
        f = ((1.20 * x) + (0.23 * (*age)) - 16.2);
        printf("Body Fat percentage: %f\n", f);
        if (f >= 8 && f < 12)
        {
            printf("Category : Lean\n");
        }
        else if (f >= 12 && f < 20)
        {
            printf("Category : Moderately lean\n");
        }
        else if (f >= 20 && f < 30)
        {
            printf("Category : Excess Fat\n");
        }
        else if (f >= 30)
        {
            printf("High Body Fat risk\n");
        }
        return f;
        break;
    case 'F':
        b = ((1.20 * x) + (0.23 * (*age)) - 5.4);
        printf("Body Fat percentage: %f\n", b);
        if (b >= 18 && b < 22)
        {
            printf("Category : Lean\n");
        }
        else if (b >= 22 && b < 30)
        {
            printf("Category : Moderately lean\n");
        }
        else if (b >= 30 && b < 40)
        {
            printf("Category : Excess Fat\n");
        }
        else if (b >= 40)
        {
            printf("High Body Fat risk\n");
        }
        return b;
        break;
    default:
        printf("Invalid Entry\n");
        break;
    }
    return 0.0;
}