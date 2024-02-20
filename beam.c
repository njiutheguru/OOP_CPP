#include <stdio.h>
#include <math.h>
float moment(float Weight,float Length, float Distance_X)
{
   float bendingMoment=Weight*(Length-Distance_X)/Length;
   return bendingMoment;
}
int main()
{
    float MaximumBendingMoment;
    float Weight=500,Length=25,Distance_X=10;
    //commented for dynamic initialisation of variables
     /*printf("\n enter the Weight of the beam: ");
     scanf("%f",&Weight);
          printf("\n enter the Length of the beam: ");
    scanf("%f",&Length);
     printf("\n enter the Distance_X of the beam: ");
     scanf("%f",&Distance_X);*/
    // printf("\n enter the Weight of the beam: ");
   
//W(L - X) / L, Weight (W) Length (L) Distance(X) Bending Moment(M)
MaximumBendingMoment=moment(Weight,Length,Distance_X);
printf("\n Weight (W) \t Length (L) \t Distance(X) \t Bending Moment(M) ");
printf("\n %.2f \t %.2f \t\t %.2f \t\t %.2f",Weight,Length,Distance_X,MaximumBendingMoment);
Weight=800,Length=40.87,Distance_X=15.7;
MaximumBendingMoment=moment(Weight,Length,Distance_X);
printf("\n\n %.2f \t %.2f \t\t %.2f \t\t %.2f\n",Weight,Length,Distance_X,MaximumBendingMoment);
    return 0;
}