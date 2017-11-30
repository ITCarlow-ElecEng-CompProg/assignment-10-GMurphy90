/** 555 Timer Astable Multivibrator Calculations
 *  Computer Programming
 *  C00187998
 *  Gerard Murphy
 *  09/10/17
 */

#include <iostream>/**< preprocessor directives */
#include <math.h>

using namespace std;

void timer555(double r1, double r2, double c1, double *Freqptr, double *Dutyptr);/**< function prototype*/

int main()
{
    cout << "555 Timer Astable Multivibrator Calculations" << endl;/**< Title */

    double R1=0, R2=0, C1=0, Freq=0, Duty=0;/**< variable declarations */
    double *ptr_Freq, *ptr_Duty ;

    ptr_Freq = &Freq;
    ptr_Duty = &Duty;

    while (R1 <=0)/**< while loop */
    {
       cout << "Enter a positive value for R1:";
       cin >> R1 ;
    }

    while (R2 <=0)/**< while loop */
    {
       cout << "Enter a positive value for R2:";
       cin >> R2 ;
    }

    while (C1 <=0)/**< while loop */
    {
       cout << "Enter a positive value for capacitance:";
       cin >> C1 ;
    }

     timer555(R1, R2, C1, ptr_Freq, ptr_Duty);/**< call timer555 function and display result below */

    cout << "The  is Output Frequency:" << *ptr_Freq << endl;
    cout << "The  is Duty Cycle:" << *ptr_Duty << endl;/**< result displayed */

    return 0;
}

void timer555(double r1, double r2, double c1, double *Freqptr, double *Dutyptr)

{
    *Freqptr = 1.44/((r1+(2*r2))*c1);/**< output frequency calculation */
    *Dutyptr = (r1+r2)/(r1+(2*r2));/**< duty cycle calculation */
    return;
}
