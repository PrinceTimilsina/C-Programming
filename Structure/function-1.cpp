#include<stdio.h>
#include<stdlib.h>
struct rectangle{
    float length,width;
};
float calculateArea(struct rectangle rect){
    return rect.length*rect.width;
}
float calculatePerimeter(struct rectangle rect){
    return 2*(rect.length + rect.width);
}
 int main()
 {
     struct rectangle rect;
     printf("Enter length of rectangle: ");
     scanf("%f \n ", &rect.length);
     printf("Enter width of rectangle: ");
     scanf("%f \n",&rect.width);
     
     float area = calculateArea(rect);
     float perimeter = calculatePerimeter(rect);
     
     printf("Area of rectangle : %.2f\n",area);
     printf("Perimeter of rectangle : %.2f\n",perimeter);
     return 0;
 }