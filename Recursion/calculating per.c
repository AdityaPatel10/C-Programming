#include <stdio.h>
float calper (float , float , float , float , float);
int main ()  {
    float mth, phy, chem, hindi, eng;
    printf ("Enter marks obtained in maths : ");
    scanf ("%f", &mth);
    printf ("Enter marks obtained in physics : ");
    scanf ("%f", &phy);
    printf ("Enter marks obtained in chemistry : ");
    scanf ("%f", &chem);
    printf ("Enter marks obtained in hindi : ");
    scanf ("%f", &hindi);
    printf ("Enter marks obtained in english : ");
    scanf ("%f", &eng);

    float per = calper (mth , phy , chem , hindi , eng);
    printf ("Total percentage obtained is : %f ", per);
    return 0;
}
float calper (float mth , float phy , float chem , float hindi , float eng)
{
    float per =( (mth + phy + chem + hindi + eng) / 5.0) ;
    return per;
}