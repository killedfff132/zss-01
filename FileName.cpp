/*#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int main()
{
	int x1, y1, x2, y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	x1 = pow(x1 - x2, 2); x2 = pow(y1 - y2, 2);
	printf("%d", sqrt(x1 + x2));
	return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
	int a = pow(4, 2);
	int b = sqrt(9);
	printf(a, b);
	return 0;
}
*/
/*#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int main()
{
    double x1, y1, x2, y2;
    double a;
    double b;
    double d;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    
        a = x1 - x2;
        b = y1 - y2;
        d = sqrt(a * a + b * b);
        printf("%.2lf", d);
    
    return 0;
}*/
/*
#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int main(void)
{  
    double a = 0;
    scanf("%f", &a);
    printf("%f", a);
    return 0;
}
*/
/*
#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int main()
{
    double x1, y1, x2, y2;

    while (scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) != EOF)
    {
        x1 = x1 - x2;
        y1 = y1 - y2;
        x2 = sqrt(x1 * x1 + y1 * y1);
        printf("%.2lf", x2);
    }
    return 0;
}
*/
/*
#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
#define PI 3.1415927
int main()
{

    double a;
    while (scanf("%lf", &a) != EOF)
    {
        a = pow(a, 3);
        a = 4 * a * PI / 3;
        printf("%.3lf\n", a);
    }
    return 0;
}
*/
/*
#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int main()
{
    double a;
    while (scanf("%lf", &a) != EOF)
    { 
        a = a*a;
        a = sqrt(a);
        printf("%.2lf\n", a); 
    }
    return 0;
}
*/
/*
#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    while (scanf("%f", &a) != EOF)
    {
        if (a <= 0 or a > 100)
            printf("Score is error!\n");
        else
        {
            if (90 <= a && a <= 100)                         
               printf("A\n");                                  
           if (80 <= a && a <= 89)                            
               printf("B\n");
            if (70 <= a && a <= 79)
               printf("C\n");
            if (60 <= a && a <= 69)
                 printf("D\n");
            if (0 <= a && a <= 59)
                printf("E\n");
        }
       
    }
    return 0;
}
*/

/*
#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int main()
{
    double a;
    while (scanf("%lf", &a) != EOF)
    {
        printf("%.2lf\n", fabs(a));
    }
    return 0;
}
*/
/*
#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    while (scanf("%d", &a) != EOF)
    {
        if (a >= 0)
        {
        a = a / 10;
        switch (a)
            {
            case 10:
            case 9:     printf("A\n"); break;
            case 8:     printf("B\n"); break;
            case 7:     printf("C\n"); break;
            case 6:     printf("D\n"); break;
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                        printf("E\n"); break;
            default:   printf("Score is error!\n");
            }   
        }
        else
            printf("Score is error!\n");
    }
    return 0;
}
*/

/*
#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    while (scanf("%d/%d/%d", &a, &b, &c) != EOF)
    {
        if (a % 400 == 0&&b>2)
            a = 1;
        else
        {
            if (a % 100 == 0)   a = 0;
            else 
            {
                if (a % 4 == 0&&b>2)   a = 1; 
                else a = 0;
            }
        }
        switch (b)
        {
        case(1):b = 0; break;
        case(2):b = 31; break;
        case(3):b = 31+28; break;
        case(4):b = 31 + 28+31; break;
        case(5):b = 31 + 28 + 31+30; break;
        case(6):b = 31 + 28 + 31 + 30+31; break;
        case(7):b = 31 + 28 + 31 + 30 + 31+30; break;
        case(8):b = 31 + 28 + 31 + 30 + 31 + 30+31; break;
        case(9):b = 31 + 28 + 31 + 30 + 31 + 30 + 31+31; break;
        case(10):b = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31+30; break;
        case(11):b = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30+31; break;
        default:b = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31+30; break;
        }
        printf("%d\n", a + b + c);
    }
    return 0;
}
*/

