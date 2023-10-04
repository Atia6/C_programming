/*.An AC power supply of V volt is applied to a circuit load with impedance z<phase with current I. Write a program to display Real power P. Reactive power Q. Apparent power S and power factor PF of the  load . Take the working temperature as 30 degree C. Load will be i)Resistive ii)Inductive and iii)  Capacitive.
Program:*/
#include<stdio.h>
#include<math.h>
main()
{
    float i,z,angle,v;
    printf("Enter value correspondingly ; i,z,angle,v:");
    scanf("%f %f %f %f",&i ,&z,&angle,&v);
  float P,Q,S,PF;
 P=v*i*cos(angle);
        Q=v*i*sin(angle);
        S=v*i;
        PF=P/S;
        printf("Real power=%.2f Watt,Reactive power=%.2f VAR,Apperent power=%.2f VA",P,Q,S,PF);
        if(angle==0)
        {
            printf("\nResistive circuit.");
        }
        else if (angle>0)
        {
            printf("\nInductive circuit.");
        }
        else if (angle<0)
        {
            printf("\nCapacitive circuit.");
        }}
