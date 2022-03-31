#include <stdio.h>

int main()
{
    int std_mark = 0, total_marks = 0, parsent = 0;
    printf("Enter the total marks");
    scanf("%d", total_marks);
    printf("Enter the total marks");
    scanf("%d", std_mark);
    parsent = total_marks;
    if (std_mark)
        return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, x1, x2, d;
    printf("Enter the value of A B C =");
    scanf("%d%d%d", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / 2 * a;
        printf("The Positive value is %f", x1);
        x1 = (-b - sqrt(d)) / 2 * a;
        printf("The  negative value is %f", x2);
    }
    else if (d == 0)
    {
        x1 = (-b + 0) / 2 * a;
        printf("The Positive value is %f", x1);
        x1 = (-b - 0) / 2 * a;
        printf("The  negative value is %f", x2);
    }
    else if (d <0)
    {
        printf("The value is unknown");
    }
    return 0;
}
