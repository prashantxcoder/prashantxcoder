#include <stdio.h>
int main()
{
    int length;
    int breadth;
    printf("length of rectangle is\n");
    scanf("%d", &length);

    printf("breadth of rectangle is\n");
    scanf("%d", &breadth);

    printf("the area of rectangle is %d", length * breadth);
    return 0;
}