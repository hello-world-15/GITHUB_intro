#include<stdio.h>
int main(){
    int val,op;
    float result;
    printf("This Program is for finding:\n1) Area of Circle\n2) Area of Square\n3) Perimeter of Circle\n From the radius/side of circle/square given by user.\n");
    printf("Give the Radidus/Side:: ");
    scanf("%d",&val);
    printf("What to perform???\n1) Area of Circle\n2) Area of Square\n3) Perimeter of Circle\n:::: ");
    scanf("%d",&op);

    switch (op)
    {
    case 1:
    printf("Area of the Circle is:\n");
    result=3.24*val*val;
    printf("%f",result);
        break;
    case 2:
    printf("Area of Square is:\n");
    result=val*val;
    printf("%f",result);
        break;
    case 3:
    printf("perimeter of the Circle is:\n");
    result=2*3.24*val;
    printf("%f",result);
    
    default:
        break;
    }
    return 0;
}