#include <stdio.h>

int main() {
    int angle1, angle2, third_angle;

    printf("Enter the first angle: ");
    scanf("%d", &angle1);
    
    printf("Enter the second angle: ");
    scanf("%d", &angle2);

    third_angle = 180-(angle1+angle2);
     
    printf("The third angle of the right triangle is: %d\n", third_angle);

    return 0;
}




