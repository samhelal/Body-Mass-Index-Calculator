/*Create a BMI calculator application that reads the user’s weight
in pounds and height in inches (or, if you prefer, the user’s
weight in kilograms and height in meters), then calculates and
displays the user’s body mass index. Also, the application
should display the following information from the Department of
Health and Human Services/National Institutes of Health so the
user can evaluate his/her BMI:
BMI VALUES
Underweight: less than 18.5
Normal:
between 18.5 and 24.9Overweight: between 25 and 29.9
Obese: 30 or greater 
(c++ how to program)*/
// program calculate the BMI
#include <iostream>
using namespace std ;
int main () {
    int w(0) , h(0) , bmi(0);
    cout << " Enter your weight in kilogram : " ; 
    cin >> w ;
    cout << " Enter your height in centimeter : " ; // like (175) not (1.75) cause of integer and it can divided by 100.
    cin >> h ;
    bmi = w/((h*h)/10000) ; //divided the height by 100 to change to centimeter
    cout << " BMI is :" <<bmi << endl ;
    cout << "\n  BMI VALUES \n "
         << " Underweight: less than 18.5 \n "
         << " Normal: "
         << " between 18.5 and 24.9Overweight: between 25 and 29.9 \n "
         << " Obese: 30 or greater \n" ;
    
}
