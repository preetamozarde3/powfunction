// powfunction

#include <iostream>
 
/* Function to calculate x raised to the power y in O(logn)*/
int power(int x, int y)
{
    int temp;
    if( y == 0)
        return 1;
    temp=power(x,y/2);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
}


/* Program to test function power */
int main()
{
    int x = 2;
    int y = 3;
 
    printf("%d", power(x, y));
    return 0;
}
