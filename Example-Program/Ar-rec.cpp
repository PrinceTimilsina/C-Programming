#include <stdio.h>

int calculateRectangle(int length, int width, int *area, int *perimeter) {
    *area = length * width;
    *perimeter = 2 * (length + width);
}


int main() {
	
    int length, width, area, perimeter;
    printf("Enter length of rectangle: ");
    scanf("%d", &length);
    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    calculateRectangle(length, width, &area, &perimeter);

    printf("Area of rectangle: %d\n", area);
    printf("Perimeter of rectangle: %d\n", perimeter);

    return 0;
}

