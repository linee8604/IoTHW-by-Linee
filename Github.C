#include<stdio.h>
#include<math.h>

float TriangleArea(float height, float base){
    return (base * height)/2 ;
}
float SquareArea(float side){
    return (side * side);
}
float TrapezoidArea(float base1, float base2, float height){
    return (base1+base2) * height * 0.5;
}

int main(){
    int choose;
    float height, base, side, base1, base2, result; 
    do {
        printf("1. Triangle Area\n");
        printf("2. Square Area\n");
        printf("3.Trapezoid Area\n");
        printf("4. Exit\n");
        printf("enter your choice: "); 
        scanf("%d", &choose);
        
        switch (choose){
            case 1:
            printf("Enter value of height\n: ");
            scanf("%f", &height);
            printf("Enter value of base\n:");
            scanf("%f", &base);

            result = TriangleArea(base, height);
            printf("Area of Triangle: %.2f\n", result); 
            break;

            case 2:
            printf("Enter value of side\n: ");
            scanf("%f", &side);

            result = SquareArea(side);
            printf("Area of Square: %2f\n",  result);
            break;

            case 3: 
            printf("Enter value of base1\n: ");
            scanf("%f", &base1);
            printf("Enter value of base2\n: ");
            scanf("%f", &base2);
            printf("Enter value of heigth\n: ");
            scanf("%f", &height);

            result = TrapezoidArea(base1, base2, height);
            printf("Area of TrapezoidArea: %.2f\n", result);
            break;

            case 4: 
            printf("Your are exiting...\n");
            break;

            default:
            printf("Try again\n");
            break;  
        }
    } while (choose != 4);

    return 0;
}