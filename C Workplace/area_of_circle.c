//
//  area_of_circle.c
//  C Workplace
//
//  Created by Mohammed Ahmed Majid on 31/12/23.
//

#include "area_of_circle.h"

int main(void)
{
    float radius, area;
    printf("Enter radius of the circle :\n");
    scanf("%f\n", &radius);
    area = 3.14*radius*radius;
    printf("Area of the circle : %f\n", area);
}
