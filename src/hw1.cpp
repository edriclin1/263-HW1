#include <stdio.h>
#include <math.h>

int main() {
    float radius, area, perimeter = 0.0;
    
    printf("Enter a radius: ");
    scanf("%f", &radius);

    area = M_PI * radius * radius;
    perimeter = M_PI * 2 * radius;

    printf("Area: %f\n", area);
    printf("Perimeter: %f\n", perimeter);

    return 0;
}
