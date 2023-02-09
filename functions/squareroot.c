#include <stdio.h>
float sqart(float);
int main ()   {

    printf ("Squareroot is : %f", sqart(16.4));
    return 0;
}
float sqart (float n)
{
    float sq = sqrt(n);
    return sq;
}