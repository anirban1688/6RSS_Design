//g++ -I /usr/include/eigen3 matdet.cpp -o det


#include <iostream>
#include <eigen3/Eigen/Dense>
#define Pi 3.1428
 
int main()
{


   double rb = 227.74, rT = 186, gb = 0.406, gt = 0.109, lst = 182, lc = 12.5, alp = 0, bet = 0, gm = 0, x = 0, y = 0, z = 160;
   double th1br1,th2br1,th3br1,th4br1,th5br1,th6br1;
   double th1br2,th2br2,th3br2,th4br2,th5br2,th6br2;

   th1br1=-acos((-pow(lc,2) + pow(lst,2) - pow(rb,2) - pow(rT,2) - pow(x,2) - pow(y,2) - pow(z,2) + 2*rb*x*cos(gb) - 2*rT*x*cos(bet)*cos(gm)*cos(gt) + 
        2*rb*rT*cos(bet)*cos(gb)*cos(gm)*cos(gt) + 2*rT*z*cos(alp)*cos(gm)*cos(gt)*sin(bet) - 2*rT*y*cos(gm)*cos(gt)*sin(alp)*sin(bet) - 2*rb*y*sin(gb) - 
        2*rb*rT*cos(gm)*cos(gt)*sin(alp)*sin(bet)*sin(gb) - 2*rT*y*cos(alp)*cos(gt)*sin(gm) - 2*rT*z*cos(gt)*sin(alp)*sin(gm) - 2*rb*rT*cos(alp)*cos(gt)*sin(gb)*sin(gm) + 
        2*rT*y*cos(alp)*cos(gm)*sin(gt) + 2*rT*z*cos(gm)*sin(alp)*sin(gt) + 2*rb*rT*cos(alp)*cos(gm)*sin(gb)*sin(gt) - 2*rT*x*cos(bet)*sin(gm)*sin(gt) + 
        2*rb*rT*cos(bet)*cos(gb)*sin(gm)*sin(gt) + 2*rT*z*cos(alp)*sin(bet)*sin(gm)*sin(gt) - 2*rT*y*sin(alp)*sin(bet)*sin(gm)*sin(gt) - 
        2*rb*rT*sin(alp)*sin(bet)*sin(gb)*sin(gm)*sin(gt))/
      sqrt(pow(-2*lc*z + 2*lc*rT*cos(alp)*cos(gm)*cos(gt)*sin(bet) - 2*lc*rT*cos(gt)*sin(alp)*sin(gm) + 2*lc*rT*cos(gm)*sin(alp)*sin(gt) + 2*lc*rT*cos(alp)*sin(bet)*sin(gm)*sin(gt),
         2) + pow(-2*lc*y*cos(gb) - 2*lc*rT*cos(gb)*cos(gm)*cos(gt)*sin(alp)*sin(bet) - 2*lc*x*sin(gb) - 2*lc*rT*cos(bet)*cos(gm - gt)*sin(gb) - 
          2*lc*rT*cos(alp)*cos(gb)*cos(gt)*sin(gm) + 2*lc*rT*cos(alp)*cos(gb)*cos(gm)*sin(gt) - 2*lc*rT*cos(gb)*sin(alp)*sin(bet)*sin(gm)*sin(gt),2))) + 
   atan2(-2*lc*z + 2*lc*rT*cos(alp)*cos(gm)*cos(gt)*sin(bet) - 2*lc*rT*cos(gt)*sin(alp)*sin(gm) + 2*lc*rT*cos(gm)*sin(alp)*sin(gt) + 2*lc*rT*cos(alp)*sin(bet)*sin(gm)*sin(gt),
    -2*lc*y*cos(gb) - 2*lc*rT*cos(gb)*cos(gm)*cos(gt)*sin(alp)*sin(bet) - 2*lc*x*sin(gb) - 2*lc*rT*cos(bet)*cos(gm - gt)*sin(gb) - 2*lc*rT*cos(alp)*cos(gb)*cos(gt)*sin(gm) + 
     2*lc*rT*cos(alp)*cos(gb)*cos(gm)*sin(gt) - 2*lc*rT*cos(gb)*sin(alp)*sin(bet)*sin(gm)*sin(gt));



  th2br1= -acos((-pow(lc,2) + pow(lst,2) - pow(rb,2) - pow(rT,2) - pow(x,2) - pow(y,2) - pow(z,2) + 2*rb*x*cos(gb) - 2*rT*x*cos(bet)*cos(gm)*cos(gt) + 
        2*rb*rT*cos(bet)*cos(gb)*cos(gm)*cos(gt) + 2*rT*z*cos(alp)*cos(gm)*cos(gt)*sin(bet) - 2*rT*y*cos(gm)*cos(gt)*sin(alp)*sin(bet) + 2*rb*y*sin(gb) + 
        2*rb*rT*cos(gm)*cos(gt)*sin(alp)*sin(bet)*sin(gb) - 2*rT*y*cos(alp)*cos(gt)*sin(gm) - 2*rT*z*cos(gt)*sin(alp)*sin(gm) + 2*rb*rT*cos(alp)*cos(gt)*sin(gb)*sin(gm) - 
        2*rT*y*cos(alp)*cos(gm)*sin(gt) - 2*rT*z*cos(gm)*sin(alp)*sin(gt) + 2*rb*rT*cos(alp)*cos(gm)*sin(gb)*sin(gt) + 2*rT*x*cos(bet)*sin(gm)*sin(gt) - 
        2*rb*rT*cos(bet)*cos(gb)*sin(gm)*sin(gt) - 2*rT*z*cos(alp)*sin(bet)*sin(gm)*sin(gt) + 2*rT*y*sin(alp)*sin(bet)*sin(gm)*sin(gt) - 
        2*rb*rT*sin(alp)*sin(bet)*sin(gb)*sin(gm)*sin(gt))/
      sqrt(pow(-2*lc*z + 2*lc*rT*cos(alp)*cos(gm)*cos(gt)*sin(bet) - 2*lc*rT*cos(gt)*sin(alp)*sin(gm) - 2*lc*rT*cos(gm)*sin(alp)*sin(gt) - 2*lc*rT*cos(alp)*sin(bet)*sin(gm)*sin(gt),
         2) + pow(-2*lc*y*cos(gb) - 2*lc*rT*cos(gb)*cos(gm)*cos(gt)*sin(alp)*sin(bet) + 2*lc*x*sin(gb) + 2*lc*rT*cos(bet)*cos(gm + gt)*sin(gb) - 
          2*lc*rT*cos(alp)*cos(gb)*cos(gt)*sin(gm) - 2*lc*rT*cos(alp)*cos(gb)*cos(gm)*sin(gt) + 2*lc*rT*cos(gb)*sin(alp)*sin(bet)*sin(gm)*sin(gt),2))) + 
   atan2(-2*lc*z + 2*lc*rT*cos(alp)*cos(gm)*cos(gt)*sin(bet) - 2*lc*rT*cos(gt)*sin(alp)*sin(gm) - 2*lc*rT*cos(gm)*sin(alp)*sin(gt) - 2*lc*rT*cos(alp)*sin(bet)*sin(gm)*sin(gt),-2*lc*y*cos(gb) - 2*lc*rT*cos(gb)*cos(gm)*cos(gt)*sin(alp)*sin(bet) + 2*lc*x*sin(gb) + 2*lc*rT*cos(bet)*cos(gm + gt)*sin(gb) - 2*lc*rT*cos(alp)*cos(gb)*cos(gt)*sin(gm) - 
     2*lc*rT*cos(alp)*cos(gb)*cos(gm)*sin(gt) + 2*lc*rT*cos(gb)*sin(alp)*sin(bet)*sin(gm)*sin(gt));


  th3br1=    -acos((-pow(lc,2) + pow(lst,2) - pow(rb,2) - pow(rT,2) - pow(x,2) - pow(y,2) - pow(z,2) - rb*x*cos(gb) + sqrt(3)*rb*y*cos(gb) - sqrt(3)*rT*y*cos(alp)*cos(gm)*cos(gt) + 
        rT*x*cos(bet)*cos(gm)*cos(gt) + (3*rb*rT*cos(alp)*cos(gb)*cos(gm)*cos(gt))/2. + (rb*rT*cos(bet)*cos(gb)*cos(gm)*cos(gt))/2. - sqrt(3)*rT*z*cos(gm)*cos(gt)*sin(alp) - 
        rT*z*cos(alp)*cos(gm)*cos(gt)*sin(bet) + rT*y*cos(gm)*cos(gt)*sin(alp)*sin(bet) - (sqrt(3)*rb*rT*cos(gb)*cos(gm)*cos(gt)*sin(alp)*sin(bet))/2. + sqrt(3)*rb*x*sin(gb) + 
        rb*y*sin(gb) + (sqrt(3)*rb*rT*cos(alp)*cos(gm)*cos(gt)*sin(gb))/2. - (sqrt(3)*rb*rT*cos(bet)*cos(gm)*cos(gt)*sin(gb))/2. - 
        (rb*rT*cos(gm)*cos(gt)*sin(alp)*sin(bet)*sin(gb))/2. + rT*y*cos(alp)*cos(gt)*sin(gm) + sqrt(3)*rT*x*cos(bet)*cos(gt)*sin(gm) - 
        (sqrt(3)*rb*rT*cos(alp)*cos(gb)*cos(gt)*sin(gm))/2. + (sqrt(3)*rb*rT*cos(bet)*cos(gb)*cos(gt)*sin(gm))/2. + rT*z*cos(gt)*sin(alp)*sin(gm) - 
        sqrt(3)*rT*z*cos(alp)*cos(gt)*sin(bet)*sin(gm) + sqrt(3)*rT*y*cos(gt)*sin(alp)*sin(bet)*sin(gm) - (3*rb*rT*cos(gb)*cos(gt)*sin(alp)*sin(bet)*sin(gm))/2. - 
        (rb*rT*cos(alp)*cos(gt)*sin(gb)*sin(gm))/2. - (3*rb*rT*cos(bet)*cos(gt)*sin(gb)*sin(gm))/2. - (sqrt(3)*rb*rT*cos(gt)*sin(alp)*sin(bet)*sin(gb)*sin(gm))/2. - 
        rT*y*cos(alp)*cos(gm)*sin(gt) - sqrt(3)*rT*x*cos(bet)*cos(gm)*sin(gt) + (sqrt(3)*rb*rT*cos(alp)*cos(gb)*cos(gm)*sin(gt))/2. - 
        (sqrt(3)*rb*rT*cos(bet)*cos(gb)*cos(gm)*sin(gt))/2. - rT*z*cos(gm)*sin(alp)*sin(gt) + sqrt(3)*rT*z*cos(alp)*cos(gm)*sin(bet)*sin(gt) - 
        sqrt(3)*rT*y*cos(gm)*sin(alp)*sin(bet)*sin(gt) + (3*rb*rT*cos(gb)*cos(gm)*sin(alp)*sin(bet)*sin(gt))/2. + (rb*rT*cos(alp)*cos(gm)*sin(gb)*sin(gt))/2. + 
        (3*rb*rT*cos(bet)*cos(gm)*sin(gb)*sin(gt))/2. + (sqrt(3)*rb*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb)*sin(gt))/2. - sqrt(3)*rT*y*cos(alp)*sin(gm)*sin(gt) + 
        rT*x*cos(bet)*sin(gm)*sin(gt) + (3*rb*rT*cos(alp)*cos(gb)*sin(gm)*sin(gt))/2. + (rb*rT*cos(bet)*cos(gb)*sin(gm)*sin(gt))/2. - sqrt(3)*rT*z*sin(alp)*sin(gm)*sin(gt) - 
        rT*z*cos(alp)*sin(bet)*sin(gm)*sin(gt) + rT*y*sin(alp)*sin(bet)*sin(gm)*sin(gt) - (sqrt(3)*rb*rT*cos(gb)*sin(alp)*sin(bet)*sin(gm)*sin(gt))/2. + 
        (sqrt(3)*rb*rT*cos(alp)*sin(gb)*sin(gm)*sin(gt))/2. - (sqrt(3)*rb*rT*cos(bet)*sin(gb)*sin(gm)*sin(gt))/2. - (rb*rT*sin(alp)*sin(bet)*sin(gb)*sin(gm)*sin(gt))/2.)/
      sqrt(pow(-2*lc*z - 2*lc*rT*cos(gm)*cos((-6*gt + Pi)/6.)*sin(alp) - 2*lc*rT*cos(alp)*cos((-6*gt + Pi)/6.)*sin(bet)*sin(gm) - 
          2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin((-6*gt + Pi)/6.) + 2*lc*rT*sin(alp)*sin(gm)*sin((-6*gt + Pi)/6.),2) + 
        pow(sqrt(3)*lc*x*cos(gb) + lc*x*sin(gb) - 2*lc*rT*cos(bet)*cos((-6*gb + Pi)/6.)*sin(gm - gt + Pi/6.) + 2*lc*y*sin((-6*gb + Pi)/6.) + 
          2*lc*rT*cos(alp)*cos(gm)*cos((-6*gt + Pi)/6.)*sin((-6*gb + Pi)/6.) - 2*lc*rT*cos((-6*gt + Pi)/6.)*sin(alp)*sin(bet)*sin(gm)*sin((-6*gb + Pi)/6.) - 
          2*lc*rT*cos(gm)*sin(alp)*sin(bet)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) - 2*lc*rT*cos(alp)*sin(gm)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.),2))) + 
   atan2(-2*lc*z - 2*lc*rT*cos(gm)*cos((-6*gt + Pi)/6.)*sin(alp) - 2*lc*rT*cos(alp)*cos((-6*gt + Pi)/6.)*sin(bet)*sin(gm) - 2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin((-6*gt + Pi)/6.) + 
     2*lc*rT*sin(alp)*sin(gm)*sin((-6*gt + Pi)/6.),sqrt(3)*lc*x*cos(gb) + lc*x*sin(gb) - 2*lc*rT*cos(bet)*cos((-6*gb + Pi)/6.)*sin(gm - gt + Pi/6.) + 2*lc*y*sin((-6*gb + Pi)/6.) + 
     2*lc*rT*cos(alp)*cos(gm)*cos((-6*gt + Pi)/6.)*sin((-6*gb + Pi)/6.) - 2*lc*rT*cos((-6*gt + Pi)/6.)*sin(alp)*sin(bet)*sin(gm)*sin((-6*gb + Pi)/6.) - 
     2*lc*rT*cos(gm)*sin(alp)*sin(bet)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) - 2*lc*rT*cos(alp)*sin(gm)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.));


  th4br1=     -acos((-pow(lc,2) + pow(lst,2) - pow(rb,2) - pow(rT,2) - pow(x,2) - pow(y,2) - pow(z,2) - rb*x*cos(gb) + sqrt(3)*rb*y*cos(gb) - sqrt(3)*rT*y*cos(alp)*cos(gm)*cos(gt) + 
        rT*x*cos(bet)*cos(gm)*cos(gt) + (3*rb*rT*cos(alp)*cos(gb)*cos(gm)*cos(gt))/2. + (rb*rT*cos(bet)*cos(gb)*cos(gm)*cos(gt))/2. - sqrt(3)*rT*z*cos(gm)*cos(gt)*sin(alp) - 
        rT*z*cos(alp)*cos(gm)*cos(gt)*sin(bet) + rT*y*cos(gm)*cos(gt)*sin(alp)*sin(bet) - (sqrt(3)*rb*rT*cos(gb)*cos(gm)*cos(gt)*sin(alp)*sin(bet))/2. - sqrt(3)*rb*x*sin(gb) - 
        rb*y*sin(gb) - (sqrt(3)*rb*rT*cos(alp)*cos(gm)*cos(gt)*sin(gb))/2. + (sqrt(3)*rb*rT*cos(bet)*cos(gm)*cos(gt)*sin(gb))/2. + 
        (rb*rT*cos(gm)*cos(gt)*sin(alp)*sin(bet)*sin(gb))/2. + rT*y*cos(alp)*cos(gt)*sin(gm) + sqrt(3)*rT*x*cos(bet)*cos(gt)*sin(gm) - 
        (sqrt(3)*rb*rT*cos(alp)*cos(gb)*cos(gt)*sin(gm))/2. + (sqrt(3)*rb*rT*cos(bet)*cos(gb)*cos(gt)*sin(gm))/2. + rT*z*cos(gt)*sin(alp)*sin(gm) - 
        sqrt(3)*rT*z*cos(alp)*cos(gt)*sin(bet)*sin(gm) + sqrt(3)*rT*y*cos(gt)*sin(alp)*sin(bet)*sin(gm) - (3*rb*rT*cos(gb)*cos(gt)*sin(alp)*sin(bet)*sin(gm))/2. + 
        (rb*rT*cos(alp)*cos(gt)*sin(gb)*sin(gm))/2. + (3*rb*rT*cos(bet)*cos(gt)*sin(gb)*sin(gm))/2. + (sqrt(3)*rb*rT*cos(gt)*sin(alp)*sin(bet)*sin(gb)*sin(gm))/2. + 
        rT*y*cos(alp)*cos(gm)*sin(gt) + sqrt(3)*rT*x*cos(bet)*cos(gm)*sin(gt) - (sqrt(3)*rb*rT*cos(alp)*cos(gb)*cos(gm)*sin(gt))/2. + 
        (sqrt(3)*rb*rT*cos(bet)*cos(gb)*cos(gm)*sin(gt))/2. + rT*z*cos(gm)*sin(alp)*sin(gt) - sqrt(3)*rT*z*cos(alp)*cos(gm)*sin(bet)*sin(gt) + 
        sqrt(3)*rT*y*cos(gm)*sin(alp)*sin(bet)*sin(gt) - (3*rb*rT*cos(gb)*cos(gm)*sin(alp)*sin(bet)*sin(gt))/2. + (rb*rT*cos(alp)*cos(gm)*sin(gb)*sin(gt))/2. + 
        (3*rb*rT*cos(bet)*cos(gm)*sin(gb)*sin(gt))/2. + (sqrt(3)*rb*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb)*sin(gt))/2. + sqrt(3)*rT*y*cos(alp)*sin(gm)*sin(gt) - 
        rT*x*cos(bet)*sin(gm)*sin(gt) - (3*rb*rT*cos(alp)*cos(gb)*sin(gm)*sin(gt))/2. - (rb*rT*cos(bet)*cos(gb)*sin(gm)*sin(gt))/2. + sqrt(3)*rT*z*sin(alp)*sin(gm)*sin(gt) + 
        rT*z*cos(alp)*sin(bet)*sin(gm)*sin(gt) - rT*y*sin(alp)*sin(bet)*sin(gm)*sin(gt) + (sqrt(3)*rb*rT*cos(gb)*sin(alp)*sin(bet)*sin(gm)*sin(gt))/2. + 
        (sqrt(3)*rb*rT*cos(alp)*sin(gb)*sin(gm)*sin(gt))/2. - (sqrt(3)*rb*rT*cos(bet)*sin(gb)*sin(gm)*sin(gt))/2. - (rb*rT*sin(alp)*sin(bet)*sin(gb)*sin(gm)*sin(gt))/2.)/
      sqrt(pow(-2*lc*z - 2*lc*rT*cos(gm)*cos(gt + Pi/6.)*sin(alp) - 2*lc*rT*cos(alp)*cos(gt + Pi/6.)*sin(bet)*sin(gm) - 2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin(gt + Pi/6.) + 
          2*lc*rT*sin(alp)*sin(gm)*sin(gt + Pi/6.),2) + pow(2*lc*x*cos(gb + Pi/6.) + 2*lc*y*sin(gb + Pi/6.) + 2*lc*rT*cos(alp)*cos(gm)*cos(gt + Pi/6.)*sin(gb + Pi/6.) - 
          2*lc*rT*cos(gt + Pi/6.)*sin(alp)*sin(bet)*sin(gm)*sin(gb + Pi/6.) - 2*lc*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb + Pi/6.)*sin(gt + Pi/6.) - 
          2*lc*rT*cos(alp)*sin(gm)*sin(gb + Pi/6.)*sin(gt + Pi/6.) - 2*lc*rT*cos(bet)*cos(gb + Pi/6.)*sin(gm + gt + Pi/6.),2))) + 
   atan2(-2*lc*z - 2*lc*rT*cos(gm)*cos(gt + Pi/6.)*sin(alp) - 2*lc*rT*cos(alp)*cos(gt + Pi/6.)*sin(bet)*sin(gm) - 2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin(gt + Pi/6.) + 
     2*lc*rT*sin(alp)*sin(gm)*sin(gt + Pi/6.),2*lc*x*cos(gb + Pi/6.) + 2*lc*y*sin(gb + Pi/6.) + 2*lc*rT*cos(alp)*cos(gm)*cos(gt + Pi/6.)*sin(gb + Pi/6.) - 
     2*lc*rT*cos(gt + Pi/6.)*sin(alp)*sin(bet)*sin(gm)*sin(gb + Pi/6.) - 2*lc*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb + Pi/6.)*sin(gt + Pi/6.) - 
     2*lc*rT*cos(alp)*sin(gm)*sin(gb + Pi/6.)*sin(gt + Pi/6.) - 2*lc*rT*cos(bet)*cos(gb + Pi/6.)*sin(gm + gt + Pi/6.));



  th5br1=     -acos((-pow(lc,2) + pow(lst,2) - pow(rb,2) - pow(rT,2) - pow(x,2) - pow(y,2) - pow(z,2) - rb*x*cos(gb) - sqrt(3)*rb*y*cos(gb) + sqrt(3)*rT*y*cos(alp)*cos(gm)*cos(gt) + 
        rT*x*cos(bet)*cos(gm)*cos(gt) + (3*rb*rT*cos(alp)*cos(gb)*cos(gm)*cos(gt))/2. + (rb*rT*cos(bet)*cos(gb)*cos(gm)*cos(gt))/2. + sqrt(3)*rT*z*cos(gm)*cos(gt)*sin(alp) - 
        rT*z*cos(alp)*cos(gm)*cos(gt)*sin(bet) + rT*y*cos(gm)*cos(gt)*sin(alp)*sin(bet) + (sqrt(3)*rb*rT*cos(gb)*cos(gm)*cos(gt)*sin(alp)*sin(bet))/2. - sqrt(3)*rb*x*sin(gb) + 
        rb*y*sin(gb) - (sqrt(3)*rb*rT*cos(alp)*cos(gm)*cos(gt)*sin(gb))/2. + (sqrt(3)*rb*rT*cos(bet)*cos(gm)*cos(gt)*sin(gb))/2. - 
        (rb*rT*cos(gm)*cos(gt)*sin(alp)*sin(bet)*sin(gb))/2. + rT*y*cos(alp)*cos(gt)*sin(gm) - sqrt(3)*rT*x*cos(bet)*cos(gt)*sin(gm) + 
        (sqrt(3)*rb*rT*cos(alp)*cos(gb)*cos(gt)*sin(gm))/2. - (sqrt(3)*rb*rT*cos(bet)*cos(gb)*cos(gt)*sin(gm))/2. + rT*z*cos(gt)*sin(alp)*sin(gm) + 
        sqrt(3)*rT*z*cos(alp)*cos(gt)*sin(bet)*sin(gm) - sqrt(3)*rT*y*cos(gt)*sin(alp)*sin(bet)*sin(gm) - (3*rb*rT*cos(gb)*cos(gt)*sin(alp)*sin(bet)*sin(gm))/2. - 
        (rb*rT*cos(alp)*cos(gt)*sin(gb)*sin(gm))/2. - (3*rb*rT*cos(bet)*cos(gt)*sin(gb)*sin(gm))/2. + (sqrt(3)*rb*rT*cos(gt)*sin(alp)*sin(bet)*sin(gb)*sin(gm))/2. - 
        rT*y*cos(alp)*cos(gm)*sin(gt) + sqrt(3)*rT*x*cos(bet)*cos(gm)*sin(gt) - (sqrt(3)*rb*rT*cos(alp)*cos(gb)*cos(gm)*sin(gt))/2. + 
        (sqrt(3)*rb*rT*cos(bet)*cos(gb)*cos(gm)*sin(gt))/2. - rT*z*cos(gm)*sin(alp)*sin(gt) - sqrt(3)*rT*z*cos(alp)*cos(gm)*sin(bet)*sin(gt) + 
        sqrt(3)*rT*y*cos(gm)*sin(alp)*sin(bet)*sin(gt) + (3*rb*rT*cos(gb)*cos(gm)*sin(alp)*sin(bet)*sin(gt))/2. + (rb*rT*cos(alp)*cos(gm)*sin(gb)*sin(gt))/2. + 
        (3*rb*rT*cos(bet)*cos(gm)*sin(gb)*sin(gt))/2. - (sqrt(3)*rb*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb)*sin(gt))/2. + sqrt(3)*rT*y*cos(alp)*sin(gm)*sin(gt) + 
        rT*x*cos(bet)*sin(gm)*sin(gt) + (3*rb*rT*cos(alp)*cos(gb)*sin(gm)*sin(gt))/2. + (rb*rT*cos(bet)*cos(gb)*sin(gm)*sin(gt))/2. + sqrt(3)*rT*z*sin(alp)*sin(gm)*sin(gt) - 
        rT*z*cos(alp)*sin(bet)*sin(gm)*sin(gt) + rT*y*sin(alp)*sin(bet)*sin(gm)*sin(gt) + (sqrt(3)*rb*rT*cos(gb)*sin(alp)*sin(bet)*sin(gm)*sin(gt))/2. - 
        (sqrt(3)*rb*rT*cos(alp)*sin(gb)*sin(gm)*sin(gt))/2. + (sqrt(3)*rb*rT*cos(bet)*sin(gb)*sin(gm)*sin(gt))/2. - (rb*rT*sin(alp)*sin(bet)*sin(gb)*sin(gm)*sin(gt))/2.)/
      sqrt(pow(-2*lc*z + 2*lc*rT*cos(gm)*cos(gt + Pi/6.)*sin(alp) + 2*lc*rT*cos(alp)*cos(gt + Pi/6.)*sin(bet)*sin(gm) - 2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin(gt + Pi/6.) + 
          2*lc*rT*sin(alp)*sin(gm)*sin(gt + Pi/6.),2) + pow(-2*lc*x*cos(gb + Pi/6.) - 2*lc*rT*cos(bet)*cos(gb + Pi/6.)*sin(gm - gt - Pi/6.) + 2*lc*y*sin(gb + Pi/6.) - 
          2*lc*rT*cos(alp)*cos(gm)*cos(gt + Pi/6.)*sin(gb + Pi/6.) + 2*lc*rT*cos(gt + Pi/6.)*sin(alp)*sin(bet)*sin(gm)*sin(gb + Pi/6.) - 
          2*lc*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb + Pi/6.)*sin(gt + Pi/6.) - 2*lc*rT*cos(alp)*sin(gm)*sin(gb + Pi/6.)*sin(gt + Pi/6.),2))) + 
   atan2(-2*lc*z + 2*lc*rT*cos(gm)*cos(gt + Pi/6.)*sin(alp) + 2*lc*rT*cos(alp)*cos(gt + Pi/6.)*sin(bet)*sin(gm) - 
     2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin(gt + Pi/6.) + 2*lc*rT*sin(alp)*sin(gm)*sin(gt + Pi/6.),-2*lc*x*cos(gb + Pi/6.) - 2*lc*rT*cos(bet)*cos(gb + Pi/6.)*sin(gm - gt - Pi/6.) + 2*lc*y*sin(gb + Pi/6.) - 2*lc*rT*cos(alp)*cos(gm)*cos(gt + Pi/6.)*sin(gb + Pi/6.) + 
     2*lc*rT*cos(gt + Pi/6.)*sin(alp)*sin(bet)*sin(gm)*sin(gb + Pi/6.) - 2*lc*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb + Pi/6.)*sin(gt + Pi/6.) - 
     2*lc*rT*cos(alp)*sin(gm)*sin(gb + Pi/6.)*sin(gt + Pi/6.));




  th6br1=     -acos((-pow(lc,2) + pow(lst,2) - pow(rb,2) - pow(rT,2) - pow(x,2) - pow(y,2) - pow(z,2) - rb*x*cos(gb) - sqrt(3)*rb*y*cos(gb) + sqrt(3)*rT*y*cos(alp)*cos(gm)*cos(gt) + 
        rT*x*cos(bet)*cos(gm)*cos(gt) + (3*rb*rT*cos(alp)*cos(gb)*cos(gm)*cos(gt))/2. + (rb*rT*cos(bet)*cos(gb)*cos(gm)*cos(gt))/2. + sqrt(3)*rT*z*cos(gm)*cos(gt)*sin(alp) - 
        rT*z*cos(alp)*cos(gm)*cos(gt)*sin(bet) + rT*y*cos(gm)*cos(gt)*sin(alp)*sin(bet) + (sqrt(3)*rb*rT*cos(gb)*cos(gm)*cos(gt)*sin(alp)*sin(bet))/2. + sqrt(3)*rb*x*sin(gb) - 
        rb*y*sin(gb) + (sqrt(3)*rb*rT*cos(alp)*cos(gm)*cos(gt)*sin(gb))/2. - (sqrt(3)*rb*rT*cos(bet)*cos(gm)*cos(gt)*sin(gb))/2. + 
        (rb*rT*cos(gm)*cos(gt)*sin(alp)*sin(bet)*sin(gb))/2. + rT*y*cos(alp)*cos(gt)*sin(gm) - sqrt(3)*rT*x*cos(bet)*cos(gt)*sin(gm) + 
        (sqrt(3)*rb*rT*cos(alp)*cos(gb)*cos(gt)*sin(gm))/2. - (sqrt(3)*rb*rT*cos(bet)*cos(gb)*cos(gt)*sin(gm))/2. + rT*z*cos(gt)*sin(alp)*sin(gm) + 
        sqrt(3)*rT*z*cos(alp)*cos(gt)*sin(bet)*sin(gm) - sqrt(3)*rT*y*cos(gt)*sin(alp)*sin(bet)*sin(gm) - (3*rb*rT*cos(gb)*cos(gt)*sin(alp)*sin(bet)*sin(gm))/2. + 
        (rb*rT*cos(alp)*cos(gt)*sin(gb)*sin(gm))/2. + (3*rb*rT*cos(bet)*cos(gt)*sin(gb)*sin(gm))/2. - (sqrt(3)*rb*rT*cos(gt)*sin(alp)*sin(bet)*sin(gb)*sin(gm))/2. + 
        rT*y*cos(alp)*cos(gm)*sin(gt) - sqrt(3)*rT*x*cos(bet)*cos(gm)*sin(gt) + (sqrt(3)*rb*rT*cos(alp)*cos(gb)*cos(gm)*sin(gt))/2. - 
        (sqrt(3)*rb*rT*cos(bet)*cos(gb)*cos(gm)*sin(gt))/2. + rT*z*cos(gm)*sin(alp)*sin(gt) + sqrt(3)*rT*z*cos(alp)*cos(gm)*sin(bet)*sin(gt) - 
        sqrt(3)*rT*y*cos(gm)*sin(alp)*sin(bet)*sin(gt) - (3*rb*rT*cos(gb)*cos(gm)*sin(alp)*sin(bet)*sin(gt))/2. + (rb*rT*cos(alp)*cos(gm)*sin(gb)*sin(gt))/2. + 
        (3*rb*rT*cos(bet)*cos(gm)*sin(gb)*sin(gt))/2. - (sqrt(3)*rb*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb)*sin(gt))/2. - sqrt(3)*rT*y*cos(alp)*sin(gm)*sin(gt) - 
        rT*x*cos(bet)*sin(gm)*sin(gt) - (3*rb*rT*cos(alp)*cos(gb)*sin(gm)*sin(gt))/2. - (rb*rT*cos(bet)*cos(gb)*sin(gm)*sin(gt))/2. - sqrt(3)*rT*z*sin(alp)*sin(gm)*sin(gt) + 
        rT*z*cos(alp)*sin(bet)*sin(gm)*sin(gt) - rT*y*sin(alp)*sin(bet)*sin(gm)*sin(gt) - (sqrt(3)*rb*rT*cos(gb)*sin(alp)*sin(bet)*sin(gm)*sin(gt))/2. - 
        (sqrt(3)*rb*rT*cos(alp)*sin(gb)*sin(gm)*sin(gt))/2. + (sqrt(3)*rb*rT*cos(bet)*sin(gb)*sin(gm)*sin(gt))/2. - (rb*rT*sin(alp)*sin(bet)*sin(gb)*sin(gm)*sin(gt))/2.)/
      sqrt(pow(-2*lc*z + sqrt(3)*lc*rT*cos(gm)*cos(gt)*sin(alp) + sqrt(3)*lc*rT*cos(alp)*cos(gt)*sin(bet)*sin(gm) + lc*rT*cos(gm)*sin(alp)*sin(gt) + 
          lc*rT*cos(alp)*sin(bet)*sin(gm)*sin(gt) - 2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin((-6*gt + Pi)/6.) + 2*lc*rT*sin(alp)*sin(gm)*sin((-6*gt + Pi)/6.),2) + 
        pow(-2*lc*x*cos((-6*gb + Pi)/6.) + 2*lc*y*sin((-6*gb + Pi)/6.) - 2*lc*rT*cos(alp)*cos(gm)*cos((-6*gt + Pi)/6.)*sin((-6*gb + Pi)/6.) + 
          2*lc*rT*cos((-6*gt + Pi)/6.)*sin(alp)*sin(bet)*sin(gm)*sin((-6*gb + Pi)/6.) - 2*lc*rT*cos(gm)*sin(alp)*sin(bet)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) - 
          2*lc*rT*cos(alp)*sin(gm)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) + 2*lc*rT*cos(bet)*cos((-6*gb + Pi)/6.)*sin((-6*(gm + gt) + Pi)/6.),2))) + 
   atan2(-2*lc*z + sqrt(3)*lc*rT*cos(gm)*cos(gt)*sin(alp) + sqrt(3)*lc*rT*cos(alp)*cos(gt)*sin(bet)*sin(gm) + lc*rT*cos(gm)*sin(alp)*sin(gt) + lc*rT*cos(alp)*sin(bet)*sin(gm)*sin(gt) - 
     2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin((-6*gt + Pi)/6.) + 2*lc*rT*sin(alp)*sin(gm)*sin((-6*gt + Pi)/6.),-2*lc*x*cos((-6*gb + Pi)/6.) + 2*lc*y*sin((-6*gb + Pi)/6.) - 2*lc*rT*cos(alp)*cos(gm)*cos((-6*gt + Pi)/6.)*sin((-6*gb + Pi)/6.) + 
     2*lc*rT*cos((-6*gt + Pi)/6.)*sin(alp)*sin(bet)*sin(gm)*sin((-6*gb + Pi)/6.) - 2*lc*rT*cos(gm)*sin(alp)*sin(bet)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) - 
     2*lc*rT*cos(alp)*sin(gm)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) + 2*lc*rT*cos(bet)*cos((-6*gb + Pi)/6.)*sin((-6*(gm + gt) + Pi)/6.));


   th1br2=acos((-pow(lc,2) + pow(lst,2) - pow(rb,2) - pow(rT,2) - pow(x,2) - pow(y,2) - pow(z,2) + 2*rb*x*cos(gb) - 2*rT*x*cos(bet)*cos(gm)*cos(gt) + 
        2*rb*rT*cos(bet)*cos(gb)*cos(gm)*cos(gt) + 2*rT*z*cos(alp)*cos(gm)*cos(gt)*sin(bet) - 2*rT*y*cos(gm)*cos(gt)*sin(alp)*sin(bet) - 2*rb*y*sin(gb) - 
        2*rb*rT*cos(gm)*cos(gt)*sin(alp)*sin(bet)*sin(gb) - 2*rT*y*cos(alp)*cos(gt)*sin(gm) - 2*rT*z*cos(gt)*sin(alp)*sin(gm) - 2*rb*rT*cos(alp)*cos(gt)*sin(gb)*sin(gm) + 
        2*rT*y*cos(alp)*cos(gm)*sin(gt) + 2*rT*z*cos(gm)*sin(alp)*sin(gt) + 2*rb*rT*cos(alp)*cos(gm)*sin(gb)*sin(gt) - 2*rT*x*cos(bet)*sin(gm)*sin(gt) + 
        2*rb*rT*cos(bet)*cos(gb)*sin(gm)*sin(gt) + 2*rT*z*cos(alp)*sin(bet)*sin(gm)*sin(gt) - 2*rT*y*sin(alp)*sin(bet)*sin(gm)*sin(gt) - 
        2*rb*rT*sin(alp)*sin(bet)*sin(gb)*sin(gm)*sin(gt))/
      sqrt(pow(-2*lc*z + 2*lc*rT*cos(alp)*cos(gm)*cos(gt)*sin(bet) - 2*lc*rT*cos(gt)*sin(alp)*sin(gm) + 2*lc*rT*cos(gm)*sin(alp)*sin(gt) + 2*lc*rT*cos(alp)*sin(bet)*sin(gm)*sin(gt),
         2) + pow(-2*lc*y*cos(gb) - 2*lc*rT*cos(gb)*cos(gm)*cos(gt)*sin(alp)*sin(bet) - 2*lc*x*sin(gb) - 2*lc*rT*cos(bet)*cos(gm - gt)*sin(gb) - 
          2*lc*rT*cos(alp)*cos(gb)*cos(gt)*sin(gm) + 2*lc*rT*cos(alp)*cos(gb)*cos(gm)*sin(gt) - 2*lc*rT*cos(gb)*sin(alp)*sin(bet)*sin(gm)*sin(gt),2))) + 
   atan2(-2*lc*z + 2*lc*rT*cos(alp)*cos(gm)*cos(gt)*sin(bet) - 2*lc*rT*cos(gt)*sin(alp)*sin(gm) + 2*lc*rT*cos(gm)*sin(alp)*sin(gt) + 2*lc*rT*cos(alp)*sin(bet)*sin(gm)*sin(gt),-2*lc*y*cos(gb) - 2*lc*rT*cos(gb)*cos(gm)*cos(gt)*sin(alp)*sin(bet) - 2*lc*x*sin(gb) - 2*lc*rT*cos(bet)*cos(gm - gt)*sin(gb) - 2*lc*rT*cos(alp)*cos(gb)*cos(gt)*sin(gm) + 
     2*lc*rT*cos(alp)*cos(gb)*cos(gm)*sin(gt) - 2*lc*rT*cos(gb)*sin(alp)*sin(bet)*sin(gm)*sin(gt));



  th2br2= acos((-pow(lc,2) + pow(lst,2) - pow(rb,2) - pow(rT,2) - pow(x,2) - pow(y,2) - pow(z,2) + 2*rb*x*cos(gb) - 2*rT*x*cos(bet)*cos(gm)*cos(gt) + 
        2*rb*rT*cos(bet)*cos(gb)*cos(gm)*cos(gt) + 2*rT*z*cos(alp)*cos(gm)*cos(gt)*sin(bet) - 2*rT*y*cos(gm)*cos(gt)*sin(alp)*sin(bet) + 2*rb*y*sin(gb) + 
        2*rb*rT*cos(gm)*cos(gt)*sin(alp)*sin(bet)*sin(gb) - 2*rT*y*cos(alp)*cos(gt)*sin(gm) - 2*rT*z*cos(gt)*sin(alp)*sin(gm) + 2*rb*rT*cos(alp)*cos(gt)*sin(gb)*sin(gm) - 
        2*rT*y*cos(alp)*cos(gm)*sin(gt) - 2*rT*z*cos(gm)*sin(alp)*sin(gt) + 2*rb*rT*cos(alp)*cos(gm)*sin(gb)*sin(gt) + 2*rT*x*cos(bet)*sin(gm)*sin(gt) - 
        2*rb*rT*cos(bet)*cos(gb)*sin(gm)*sin(gt) - 2*rT*z*cos(alp)*sin(bet)*sin(gm)*sin(gt) + 2*rT*y*sin(alp)*sin(bet)*sin(gm)*sin(gt) - 
        2*rb*rT*sin(alp)*sin(bet)*sin(gb)*sin(gm)*sin(gt))/
      sqrt(pow(-2*lc*z + 2*lc*rT*cos(alp)*cos(gm)*cos(gt)*sin(bet) - 2*lc*rT*cos(gt)*sin(alp)*sin(gm) - 2*lc*rT*cos(gm)*sin(alp)*sin(gt) - 2*lc*rT*cos(alp)*sin(bet)*sin(gm)*sin(gt),
         2) + pow(-2*lc*y*cos(gb) - 2*lc*rT*cos(gb)*cos(gm)*cos(gt)*sin(alp)*sin(bet) + 2*lc*x*sin(gb) + 2*lc*rT*cos(bet)*cos(gm + gt)*sin(gb) - 
          2*lc*rT*cos(alp)*cos(gb)*cos(gt)*sin(gm) - 2*lc*rT*cos(alp)*cos(gb)*cos(gm)*sin(gt) + 2*lc*rT*cos(gb)*sin(alp)*sin(bet)*sin(gm)*sin(gt),2))) + 
   atan2(-2*lc*z + 2*lc*rT*cos(alp)*cos(gm)*cos(gt)*sin(bet) - 2*lc*rT*cos(gt)*sin(alp)*sin(gm) - 2*lc*rT*cos(gm)*sin(alp)*sin(gt) - 2*lc*rT*cos(alp)*sin(bet)*sin(gm)*sin(gt),-2*lc*y*cos(gb) - 2*lc*rT*cos(gb)*cos(gm)*cos(gt)*sin(alp)*sin(bet) + 2*lc*x*sin(gb) + 2*lc*rT*cos(bet)*cos(gm + gt)*sin(gb) - 2*lc*rT*cos(alp)*cos(gb)*cos(gt)*sin(gm) - 
     2*lc*rT*cos(alp)*cos(gb)*cos(gm)*sin(gt) + 2*lc*rT*cos(gb)*sin(alp)*sin(bet)*sin(gm)*sin(gt));


  th3br2=    acos((-pow(lc,2) + pow(lst,2) - pow(rb,2) - pow(rT,2) - pow(x,2) - pow(y,2) - pow(z,2) - rb*x*cos(gb) + sqrt(3)*rb*y*cos(gb) - sqrt(3)*rT*y*cos(alp)*cos(gm)*cos(gt) + 
        rT*x*cos(bet)*cos(gm)*cos(gt) + (3*rb*rT*cos(alp)*cos(gb)*cos(gm)*cos(gt))/2. + (rb*rT*cos(bet)*cos(gb)*cos(gm)*cos(gt))/2. - sqrt(3)*rT*z*cos(gm)*cos(gt)*sin(alp) - 
        rT*z*cos(alp)*cos(gm)*cos(gt)*sin(bet) + rT*y*cos(gm)*cos(gt)*sin(alp)*sin(bet) - (sqrt(3)*rb*rT*cos(gb)*cos(gm)*cos(gt)*sin(alp)*sin(bet))/2. + sqrt(3)*rb*x*sin(gb) + 
        rb*y*sin(gb) + (sqrt(3)*rb*rT*cos(alp)*cos(gm)*cos(gt)*sin(gb))/2. - (sqrt(3)*rb*rT*cos(bet)*cos(gm)*cos(gt)*sin(gb))/2. - 
        (rb*rT*cos(gm)*cos(gt)*sin(alp)*sin(bet)*sin(gb))/2. + rT*y*cos(alp)*cos(gt)*sin(gm) + sqrt(3)*rT*x*cos(bet)*cos(gt)*sin(gm) - 
        (sqrt(3)*rb*rT*cos(alp)*cos(gb)*cos(gt)*sin(gm))/2. + (sqrt(3)*rb*rT*cos(bet)*cos(gb)*cos(gt)*sin(gm))/2. + rT*z*cos(gt)*sin(alp)*sin(gm) - 
        sqrt(3)*rT*z*cos(alp)*cos(gt)*sin(bet)*sin(gm) + sqrt(3)*rT*y*cos(gt)*sin(alp)*sin(bet)*sin(gm) - (3*rb*rT*cos(gb)*cos(gt)*sin(alp)*sin(bet)*sin(gm))/2. - 
        (rb*rT*cos(alp)*cos(gt)*sin(gb)*sin(gm))/2. - (3*rb*rT*cos(bet)*cos(gt)*sin(gb)*sin(gm))/2. - (sqrt(3)*rb*rT*cos(gt)*sin(alp)*sin(bet)*sin(gb)*sin(gm))/2. - 
        rT*y*cos(alp)*cos(gm)*sin(gt) - sqrt(3)*rT*x*cos(bet)*cos(gm)*sin(gt) + (sqrt(3)*rb*rT*cos(alp)*cos(gb)*cos(gm)*sin(gt))/2. - 
        (sqrt(3)*rb*rT*cos(bet)*cos(gb)*cos(gm)*sin(gt))/2. - rT*z*cos(gm)*sin(alp)*sin(gt) + sqrt(3)*rT*z*cos(alp)*cos(gm)*sin(bet)*sin(gt) - 
        sqrt(3)*rT*y*cos(gm)*sin(alp)*sin(bet)*sin(gt) + (3*rb*rT*cos(gb)*cos(gm)*sin(alp)*sin(bet)*sin(gt))/2. + (rb*rT*cos(alp)*cos(gm)*sin(gb)*sin(gt))/2. + 
        (3*rb*rT*cos(bet)*cos(gm)*sin(gb)*sin(gt))/2. + (sqrt(3)*rb*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb)*sin(gt))/2. - sqrt(3)*rT*y*cos(alp)*sin(gm)*sin(gt) + 
        rT*x*cos(bet)*sin(gm)*sin(gt) + (3*rb*rT*cos(alp)*cos(gb)*sin(gm)*sin(gt))/2. + (rb*rT*cos(bet)*cos(gb)*sin(gm)*sin(gt))/2. - sqrt(3)*rT*z*sin(alp)*sin(gm)*sin(gt) - 
        rT*z*cos(alp)*sin(bet)*sin(gm)*sin(gt) + rT*y*sin(alp)*sin(bet)*sin(gm)*sin(gt) - (sqrt(3)*rb*rT*cos(gb)*sin(alp)*sin(bet)*sin(gm)*sin(gt))/2. + 
        (sqrt(3)*rb*rT*cos(alp)*sin(gb)*sin(gm)*sin(gt))/2. - (sqrt(3)*rb*rT*cos(bet)*sin(gb)*sin(gm)*sin(gt))/2. - (rb*rT*sin(alp)*sin(bet)*sin(gb)*sin(gm)*sin(gt))/2.)/
      sqrt(pow(-2*lc*z - 2*lc*rT*cos(gm)*cos((-6*gt + Pi)/6.)*sin(alp) - 2*lc*rT*cos(alp)*cos((-6*gt + Pi)/6.)*sin(bet)*sin(gm) - 
          2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin((-6*gt + Pi)/6.) + 2*lc*rT*sin(alp)*sin(gm)*sin((-6*gt + Pi)/6.),2) + 
        pow(sqrt(3)*lc*x*cos(gb) + lc*x*sin(gb) - 2*lc*rT*cos(bet)*cos((-6*gb + Pi)/6.)*sin(gm - gt + Pi/6.) + 2*lc*y*sin((-6*gb + Pi)/6.) + 
          2*lc*rT*cos(alp)*cos(gm)*cos((-6*gt + Pi)/6.)*sin((-6*gb + Pi)/6.) - 2*lc*rT*cos((-6*gt + Pi)/6.)*sin(alp)*sin(bet)*sin(gm)*sin((-6*gb + Pi)/6.) - 
          2*lc*rT*cos(gm)*sin(alp)*sin(bet)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) - 2*lc*rT*cos(alp)*sin(gm)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.),2))) + 
   atan2(-2*lc*z - 2*lc*rT*cos(gm)*cos((-6*gt + Pi)/6.)*sin(alp) - 2*lc*rT*cos(alp)*cos((-6*gt + Pi)/6.)*sin(bet)*sin(gm) - 2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin((-6*gt + Pi)/6.) + 
     2*lc*rT*sin(alp)*sin(gm)*sin((-6*gt + Pi)/6.),sqrt(3)*lc*x*cos(gb) + lc*x*sin(gb) - 2*lc*rT*cos(bet)*cos((-6*gb + Pi)/6.)*sin(gm - gt + Pi/6.) + 2*lc*y*sin((-6*gb + Pi)/6.) + 
     2*lc*rT*cos(alp)*cos(gm)*cos((-6*gt + Pi)/6.)*sin((-6*gb + Pi)/6.) - 2*lc*rT*cos((-6*gt + Pi)/6.)*sin(alp)*sin(bet)*sin(gm)*sin((-6*gb + Pi)/6.) - 
     2*lc*rT*cos(gm)*sin(alp)*sin(bet)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) - 2*lc*rT*cos(alp)*sin(gm)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.));


  th4br2=     acos((-pow(lc,2) + pow(lst,2) - pow(rb,2) - pow(rT,2) - pow(x,2) - pow(y,2) - pow(z,2) - rb*x*cos(gb) + sqrt(3)*rb*y*cos(gb) - sqrt(3)*rT*y*cos(alp)*cos(gm)*cos(gt) + 
        rT*x*cos(bet)*cos(gm)*cos(gt) + (3*rb*rT*cos(alp)*cos(gb)*cos(gm)*cos(gt))/2. + (rb*rT*cos(bet)*cos(gb)*cos(gm)*cos(gt))/2. - sqrt(3)*rT*z*cos(gm)*cos(gt)*sin(alp) - 
        rT*z*cos(alp)*cos(gm)*cos(gt)*sin(bet) + rT*y*cos(gm)*cos(gt)*sin(alp)*sin(bet) - (sqrt(3)*rb*rT*cos(gb)*cos(gm)*cos(gt)*sin(alp)*sin(bet))/2. - sqrt(3)*rb*x*sin(gb) - 
        rb*y*sin(gb) - (sqrt(3)*rb*rT*cos(alp)*cos(gm)*cos(gt)*sin(gb))/2. + (sqrt(3)*rb*rT*cos(bet)*cos(gm)*cos(gt)*sin(gb))/2. + 
        (rb*rT*cos(gm)*cos(gt)*sin(alp)*sin(bet)*sin(gb))/2. + rT*y*cos(alp)*cos(gt)*sin(gm) + sqrt(3)*rT*x*cos(bet)*cos(gt)*sin(gm) - 
        (sqrt(3)*rb*rT*cos(alp)*cos(gb)*cos(gt)*sin(gm))/2. + (sqrt(3)*rb*rT*cos(bet)*cos(gb)*cos(gt)*sin(gm))/2. + rT*z*cos(gt)*sin(alp)*sin(gm) - 
        sqrt(3)*rT*z*cos(alp)*cos(gt)*sin(bet)*sin(gm) + sqrt(3)*rT*y*cos(gt)*sin(alp)*sin(bet)*sin(gm) - (3*rb*rT*cos(gb)*cos(gt)*sin(alp)*sin(bet)*sin(gm))/2. + 
        (rb*rT*cos(alp)*cos(gt)*sin(gb)*sin(gm))/2. + (3*rb*rT*cos(bet)*cos(gt)*sin(gb)*sin(gm))/2. + (sqrt(3)*rb*rT*cos(gt)*sin(alp)*sin(bet)*sin(gb)*sin(gm))/2. + 
        rT*y*cos(alp)*cos(gm)*sin(gt) + sqrt(3)*rT*x*cos(bet)*cos(gm)*sin(gt) - (sqrt(3)*rb*rT*cos(alp)*cos(gb)*cos(gm)*sin(gt))/2. + 
        (sqrt(3)*rb*rT*cos(bet)*cos(gb)*cos(gm)*sin(gt))/2. + rT*z*cos(gm)*sin(alp)*sin(gt) - sqrt(3)*rT*z*cos(alp)*cos(gm)*sin(bet)*sin(gt) + 
        sqrt(3)*rT*y*cos(gm)*sin(alp)*sin(bet)*sin(gt) - (3*rb*rT*cos(gb)*cos(gm)*sin(alp)*sin(bet)*sin(gt))/2. + (rb*rT*cos(alp)*cos(gm)*sin(gb)*sin(gt))/2. + 
        (3*rb*rT*cos(bet)*cos(gm)*sin(gb)*sin(gt))/2. + (sqrt(3)*rb*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb)*sin(gt))/2. + sqrt(3)*rT*y*cos(alp)*sin(gm)*sin(gt) - 
        rT*x*cos(bet)*sin(gm)*sin(gt) - (3*rb*rT*cos(alp)*cos(gb)*sin(gm)*sin(gt))/2. - (rb*rT*cos(bet)*cos(gb)*sin(gm)*sin(gt))/2. + sqrt(3)*rT*z*sin(alp)*sin(gm)*sin(gt) + 
        rT*z*cos(alp)*sin(bet)*sin(gm)*sin(gt) - rT*y*sin(alp)*sin(bet)*sin(gm)*sin(gt) + (sqrt(3)*rb*rT*cos(gb)*sin(alp)*sin(bet)*sin(gm)*sin(gt))/2. + 
        (sqrt(3)*rb*rT*cos(alp)*sin(gb)*sin(gm)*sin(gt))/2. - (sqrt(3)*rb*rT*cos(bet)*sin(gb)*sin(gm)*sin(gt))/2. - (rb*rT*sin(alp)*sin(bet)*sin(gb)*sin(gm)*sin(gt))/2.)/
      sqrt(pow(-2*lc*z - 2*lc*rT*cos(gm)*cos(gt + Pi/6.)*sin(alp) - 2*lc*rT*cos(alp)*cos(gt + Pi/6.)*sin(bet)*sin(gm) - 2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin(gt + Pi/6.) + 
          2*lc*rT*sin(alp)*sin(gm)*sin(gt + Pi/6.),2) + pow(2*lc*x*cos(gb + Pi/6.) + 2*lc*y*sin(gb + Pi/6.) + 2*lc*rT*cos(alp)*cos(gm)*cos(gt + Pi/6.)*sin(gb + Pi/6.) - 
          2*lc*rT*cos(gt + Pi/6.)*sin(alp)*sin(bet)*sin(gm)*sin(gb + Pi/6.) - 2*lc*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb + Pi/6.)*sin(gt + Pi/6.) - 
          2*lc*rT*cos(alp)*sin(gm)*sin(gb + Pi/6.)*sin(gt + Pi/6.) - 2*lc*rT*cos(bet)*cos(gb + Pi/6.)*sin(gm + gt + Pi/6.),2))) + 
   atan2(-2*lc*z - 2*lc*rT*cos(gm)*cos(gt + Pi/6.)*sin(alp) - 2*lc*rT*cos(alp)*cos(gt + Pi/6.)*sin(bet)*sin(gm) - 2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin(gt + Pi/6.) + 
     2*lc*rT*sin(alp)*sin(gm)*sin(gt + Pi/6.),2*lc*x*cos(gb + Pi/6.) + 2*lc*y*sin(gb + Pi/6.) + 2*lc*rT*cos(alp)*cos(gm)*cos(gt + Pi/6.)*sin(gb + Pi/6.) - 
     2*lc*rT*cos(gt + Pi/6.)*sin(alp)*sin(bet)*sin(gm)*sin(gb + Pi/6.) - 2*lc*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb + Pi/6.)*sin(gt + Pi/6.) - 
     2*lc*rT*cos(alp)*sin(gm)*sin(gb + Pi/6.)*sin(gt + Pi/6.) - 2*lc*rT*cos(bet)*cos(gb + Pi/6.)*sin(gm + gt + Pi/6.));



  th5br2=     acos((-pow(lc,2) + pow(lst,2) - pow(rb,2) - pow(rT,2) - pow(x,2) - pow(y,2) - pow(z,2) - rb*x*cos(gb) - sqrt(3)*rb*y*cos(gb) + sqrt(3)*rT*y*cos(alp)*cos(gm)*cos(gt) + 
        rT*x*cos(bet)*cos(gm)*cos(gt) + (3*rb*rT*cos(alp)*cos(gb)*cos(gm)*cos(gt))/2. + (rb*rT*cos(bet)*cos(gb)*cos(gm)*cos(gt))/2. + sqrt(3)*rT*z*cos(gm)*cos(gt)*sin(alp) - 
        rT*z*cos(alp)*cos(gm)*cos(gt)*sin(bet) + rT*y*cos(gm)*cos(gt)*sin(alp)*sin(bet) + (sqrt(3)*rb*rT*cos(gb)*cos(gm)*cos(gt)*sin(alp)*sin(bet))/2. - sqrt(3)*rb*x*sin(gb) + 
        rb*y*sin(gb) - (sqrt(3)*rb*rT*cos(alp)*cos(gm)*cos(gt)*sin(gb))/2. + (sqrt(3)*rb*rT*cos(bet)*cos(gm)*cos(gt)*sin(gb))/2. - 
        (rb*rT*cos(gm)*cos(gt)*sin(alp)*sin(bet)*sin(gb))/2. + rT*y*cos(alp)*cos(gt)*sin(gm) - sqrt(3)*rT*x*cos(bet)*cos(gt)*sin(gm) + 
        (sqrt(3)*rb*rT*cos(alp)*cos(gb)*cos(gt)*sin(gm))/2. - (sqrt(3)*rb*rT*cos(bet)*cos(gb)*cos(gt)*sin(gm))/2. + rT*z*cos(gt)*sin(alp)*sin(gm) + 
        sqrt(3)*rT*z*cos(alp)*cos(gt)*sin(bet)*sin(gm) - sqrt(3)*rT*y*cos(gt)*sin(alp)*sin(bet)*sin(gm) - (3*rb*rT*cos(gb)*cos(gt)*sin(alp)*sin(bet)*sin(gm))/2. - 
        (rb*rT*cos(alp)*cos(gt)*sin(gb)*sin(gm))/2. - (3*rb*rT*cos(bet)*cos(gt)*sin(gb)*sin(gm))/2. + (sqrt(3)*rb*rT*cos(gt)*sin(alp)*sin(bet)*sin(gb)*sin(gm))/2. - 
        rT*y*cos(alp)*cos(gm)*sin(gt) + sqrt(3)*rT*x*cos(bet)*cos(gm)*sin(gt) - (sqrt(3)*rb*rT*cos(alp)*cos(gb)*cos(gm)*sin(gt))/2. + 
        (sqrt(3)*rb*rT*cos(bet)*cos(gb)*cos(gm)*sin(gt))/2. - rT*z*cos(gm)*sin(alp)*sin(gt) - sqrt(3)*rT*z*cos(alp)*cos(gm)*sin(bet)*sin(gt) + 
        sqrt(3)*rT*y*cos(gm)*sin(alp)*sin(bet)*sin(gt) + (3*rb*rT*cos(gb)*cos(gm)*sin(alp)*sin(bet)*sin(gt))/2. + (rb*rT*cos(alp)*cos(gm)*sin(gb)*sin(gt))/2. + 
        (3*rb*rT*cos(bet)*cos(gm)*sin(gb)*sin(gt))/2. - (sqrt(3)*rb*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb)*sin(gt))/2. + sqrt(3)*rT*y*cos(alp)*sin(gm)*sin(gt) + 
        rT*x*cos(bet)*sin(gm)*sin(gt) + (3*rb*rT*cos(alp)*cos(gb)*sin(gm)*sin(gt))/2. + (rb*rT*cos(bet)*cos(gb)*sin(gm)*sin(gt))/2. + sqrt(3)*rT*z*sin(alp)*sin(gm)*sin(gt) - 
        rT*z*cos(alp)*sin(bet)*sin(gm)*sin(gt) + rT*y*sin(alp)*sin(bet)*sin(gm)*sin(gt) + (sqrt(3)*rb*rT*cos(gb)*sin(alp)*sin(bet)*sin(gm)*sin(gt))/2. - 
        (sqrt(3)*rb*rT*cos(alp)*sin(gb)*sin(gm)*sin(gt))/2. + (sqrt(3)*rb*rT*cos(bet)*sin(gb)*sin(gm)*sin(gt))/2. - (rb*rT*sin(alp)*sin(bet)*sin(gb)*sin(gm)*sin(gt))/2.)/
      sqrt(pow(-2*lc*z + 2*lc*rT*cos(gm)*cos(gt + Pi/6.)*sin(alp) + 2*lc*rT*cos(alp)*cos(gt + Pi/6.)*sin(bet)*sin(gm) - 2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin(gt + Pi/6.) + 
          2*lc*rT*sin(alp)*sin(gm)*sin(gt + Pi/6.),2) + pow(-2*lc*x*cos(gb + Pi/6.) - 2*lc*rT*cos(bet)*cos(gb + Pi/6.)*sin(gm - gt - Pi/6.) + 2*lc*y*sin(gb + Pi/6.) - 
          2*lc*rT*cos(alp)*cos(gm)*cos(gt + Pi/6.)*sin(gb + Pi/6.) + 2*lc*rT*cos(gt + Pi/6.)*sin(alp)*sin(bet)*sin(gm)*sin(gb + Pi/6.) - 
          2*lc*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb + Pi/6.)*sin(gt + Pi/6.) - 2*lc*rT*cos(alp)*sin(gm)*sin(gb + Pi/6.)*sin(gt + Pi/6.),2))) + 
   atan2(-2*lc*z + 2*lc*rT*cos(gm)*cos(gt + Pi/6.)*sin(alp) + 2*lc*rT*cos(alp)*cos(gt + Pi/6.)*sin(bet)*sin(gm) - 
     2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin(gt + Pi/6.) + 2*lc*rT*sin(alp)*sin(gm)*sin(gt + Pi/6.),-2*lc*x*cos(gb + Pi/6.) - 2*lc*rT*cos(bet)*cos(gb + Pi/6.)*sin(gm - gt - Pi/6.) + 2*lc*y*sin(gb + Pi/6.) - 2*lc*rT*cos(alp)*cos(gm)*cos(gt + Pi/6.)*sin(gb + Pi/6.) + 
     2*lc*rT*cos(gt + Pi/6.)*sin(alp)*sin(bet)*sin(gm)*sin(gb + Pi/6.) - 2*lc*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb + Pi/6.)*sin(gt + Pi/6.) - 
     2*lc*rT*cos(alp)*sin(gm)*sin(gb + Pi/6.)*sin(gt + Pi/6.));




  th6br2=     acos((-pow(lc,2) + pow(lst,2) - pow(rb,2) - pow(rT,2) - pow(x,2) - pow(y,2) - pow(z,2) - rb*x*cos(gb) - sqrt(3)*rb*y*cos(gb) + sqrt(3)*rT*y*cos(alp)*cos(gm)*cos(gt) + 
        rT*x*cos(bet)*cos(gm)*cos(gt) + (3*rb*rT*cos(alp)*cos(gb)*cos(gm)*cos(gt))/2. + (rb*rT*cos(bet)*cos(gb)*cos(gm)*cos(gt))/2. + sqrt(3)*rT*z*cos(gm)*cos(gt)*sin(alp) - 
        rT*z*cos(alp)*cos(gm)*cos(gt)*sin(bet) + rT*y*cos(gm)*cos(gt)*sin(alp)*sin(bet) + (sqrt(3)*rb*rT*cos(gb)*cos(gm)*cos(gt)*sin(alp)*sin(bet))/2. + sqrt(3)*rb*x*sin(gb) - 
        rb*y*sin(gb) + (sqrt(3)*rb*rT*cos(alp)*cos(gm)*cos(gt)*sin(gb))/2. - (sqrt(3)*rb*rT*cos(bet)*cos(gm)*cos(gt)*sin(gb))/2. + 
        (rb*rT*cos(gm)*cos(gt)*sin(alp)*sin(bet)*sin(gb))/2. + rT*y*cos(alp)*cos(gt)*sin(gm) - sqrt(3)*rT*x*cos(bet)*cos(gt)*sin(gm) + 
        (sqrt(3)*rb*rT*cos(alp)*cos(gb)*cos(gt)*sin(gm))/2. - (sqrt(3)*rb*rT*cos(bet)*cos(gb)*cos(gt)*sin(gm))/2. + rT*z*cos(gt)*sin(alp)*sin(gm) + 
        sqrt(3)*rT*z*cos(alp)*cos(gt)*sin(bet)*sin(gm) - sqrt(3)*rT*y*cos(gt)*sin(alp)*sin(bet)*sin(gm) - (3*rb*rT*cos(gb)*cos(gt)*sin(alp)*sin(bet)*sin(gm))/2. + 
        (rb*rT*cos(alp)*cos(gt)*sin(gb)*sin(gm))/2. + (3*rb*rT*cos(bet)*cos(gt)*sin(gb)*sin(gm))/2. - (sqrt(3)*rb*rT*cos(gt)*sin(alp)*sin(bet)*sin(gb)*sin(gm))/2. + 
        rT*y*cos(alp)*cos(gm)*sin(gt) - sqrt(3)*rT*x*cos(bet)*cos(gm)*sin(gt) + (sqrt(3)*rb*rT*cos(alp)*cos(gb)*cos(gm)*sin(gt))/2. - 
        (sqrt(3)*rb*rT*cos(bet)*cos(gb)*cos(gm)*sin(gt))/2. + rT*z*cos(gm)*sin(alp)*sin(gt) + sqrt(3)*rT*z*cos(alp)*cos(gm)*sin(bet)*sin(gt) - 
        sqrt(3)*rT*y*cos(gm)*sin(alp)*sin(bet)*sin(gt) - (3*rb*rT*cos(gb)*cos(gm)*sin(alp)*sin(bet)*sin(gt))/2. + (rb*rT*cos(alp)*cos(gm)*sin(gb)*sin(gt))/2. + 
        (3*rb*rT*cos(bet)*cos(gm)*sin(gb)*sin(gt))/2. - (sqrt(3)*rb*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb)*sin(gt))/2. - sqrt(3)*rT*y*cos(alp)*sin(gm)*sin(gt) - 
        rT*x*cos(bet)*sin(gm)*sin(gt) - (3*rb*rT*cos(alp)*cos(gb)*sin(gm)*sin(gt))/2. - (rb*rT*cos(bet)*cos(gb)*sin(gm)*sin(gt))/2. - sqrt(3)*rT*z*sin(alp)*sin(gm)*sin(gt) + 
        rT*z*cos(alp)*sin(bet)*sin(gm)*sin(gt) - rT*y*sin(alp)*sin(bet)*sin(gm)*sin(gt) - (sqrt(3)*rb*rT*cos(gb)*sin(alp)*sin(bet)*sin(gm)*sin(gt))/2. - 
        (sqrt(3)*rb*rT*cos(alp)*sin(gb)*sin(gm)*sin(gt))/2. + (sqrt(3)*rb*rT*cos(bet)*sin(gb)*sin(gm)*sin(gt))/2. - (rb*rT*sin(alp)*sin(bet)*sin(gb)*sin(gm)*sin(gt))/2.)/
      sqrt(pow(-2*lc*z + sqrt(3)*lc*rT*cos(gm)*cos(gt)*sin(alp) + sqrt(3)*lc*rT*cos(alp)*cos(gt)*sin(bet)*sin(gm) + lc*rT*cos(gm)*sin(alp)*sin(gt) + 
          lc*rT*cos(alp)*sin(bet)*sin(gm)*sin(gt) - 2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin((-6*gt + Pi)/6.) + 2*lc*rT*sin(alp)*sin(gm)*sin((-6*gt + Pi)/6.),2) + 
        pow(-2*lc*x*cos((-6*gb + Pi)/6.) + 2*lc*y*sin((-6*gb + Pi)/6.) - 2*lc*rT*cos(alp)*cos(gm)*cos((-6*gt + Pi)/6.)*sin((-6*gb + Pi)/6.) + 
          2*lc*rT*cos((-6*gt + Pi)/6.)*sin(alp)*sin(bet)*sin(gm)*sin((-6*gb + Pi)/6.) - 2*lc*rT*cos(gm)*sin(alp)*sin(bet)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) - 
          2*lc*rT*cos(alp)*sin(gm)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) + 2*lc*rT*cos(bet)*cos((-6*gb + Pi)/6.)*sin((-6*(gm + gt) + Pi)/6.),2))) + 
   atan2(-2*lc*z + sqrt(3)*lc*rT*cos(gm)*cos(gt)*sin(alp) + sqrt(3)*lc*rT*cos(alp)*cos(gt)*sin(bet)*sin(gm) + lc*rT*cos(gm)*sin(alp)*sin(gt) + lc*rT*cos(alp)*sin(bet)*sin(gm)*sin(gt) - 
     2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin((-6*gt + Pi)/6.) + 2*lc*rT*sin(alp)*sin(gm)*sin((-6*gt + Pi)/6.),-2*lc*x*cos((-6*gb + Pi)/6.) + 2*lc*y*sin((-6*gb + Pi)/6.) - 2*lc*rT*cos(alp)*cos(gm)*cos((-6*gt + Pi)/6.)*sin((-6*gb + Pi)/6.) + 
     2*lc*rT*cos((-6*gt + Pi)/6.)*sin(alp)*sin(bet)*sin(gm)*sin((-6*gb + Pi)/6.) - 2*lc*rT*cos(gm)*sin(alp)*sin(bet)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) - 
     2*lc*rT*cos(alp)*sin(gm)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) + 2*lc*rT*cos(bet)*cos((-6*gb + Pi)/6.)*sin((-6*(gm + gt) + Pi)/6.));

   double th1=th1br1;
   double th2=th2br1;
   double th3=th3br1;
   double th4=th4br1;
   double th5=th5br1;
   double th6=th6br1;


   double row1[] = {2*x - 2*rb*cos(gb) + 2*rT*cos(bet)*cos(gm - gt) - 2*lc*cos(th1)*sin(gb),
   2*y - 2*lc*cos(gb)*cos(th1) + 2*rT*cos(gm)*cos(gt)*sin(alp)*sin(bet) + 2*rb*sin(gb) + 2*rT*cos(alp)*cos(gt)*sin(gm) - 2*rT*cos(alp)*cos(gm)*sin(gt) + 
    2*rT*sin(alp)*sin(bet)*sin(gm)*sin(gt),2*z - 2*rT*cos(alp)*cos(gm)*cos(gt)*sin(bet) + 2*rT*cos(gt)*sin(alp)*sin(gm) - 2*rT*cos(gm)*sin(alp)*sin(gt) - 
    2*rT*cos(alp)*sin(bet)*sin(gm)*sin(gt) - 2*lc*sin(th1),2*rT*y*cos(alp)*cos(gm)*cos(gt)*sin(bet) + 2*rT*z*cos(gm)*cos(gt)*sin(alp)*sin(bet) + 
    2*rb*rT*cos(alp)*cos(gm)*cos(gt)*sin(bet)*sin(gb) + 2*rT*z*cos(alp)*cos(gt)*sin(gm) - 2*rT*y*cos(gt)*sin(alp)*sin(gm) - 2*rb*rT*cos(gt)*sin(alp)*sin(gb)*sin(gm) - 
    2*rT*z*cos(alp)*cos(gm)*sin(gt) + 2*rT*y*cos(gm)*sin(alp)*sin(gt) + 2*rb*rT*cos(gm)*sin(alp)*sin(gb)*sin(gt) + 2*rT*y*cos(alp)*sin(bet)*sin(gm)*sin(gt) + 
    2*rT*z*sin(alp)*sin(bet)*sin(gm)*sin(gt) + 2*rb*rT*cos(alp)*sin(bet)*sin(gb)*sin(gm)*sin(gt) - 
    2*lc*cos(gb)*cos(th1)*(-(rT*cos(gt)*sin(alp)*sin(gm)) + rT*cos(alp)*sin(bet)*sin(gm)*sin(gt) + rT*cos(gm)*(cos(alp)*cos(gt)*sin(bet) + sin(alp)*sin(gt))) - 
    2*lc*rT*cos(gm)*cos(gt)*sin(alp)*sin(bet)*sin(th1) - 2*lc*rT*cos(alp)*cos(gt)*sin(gm)*sin(th1) + 2*lc*rT*cos(alp)*cos(gm)*sin(gt)*sin(th1) - 
    2*lc*rT*sin(alp)*sin(bet)*sin(gm)*sin(gt)*sin(th1),-2*rT*z*cos(alp)*cos(bet)*cos(gm)*cos(gt) + 2*rT*y*cos(bet)*cos(gm)*cos(gt)*sin(alp) + 
    2*rb*rT*cos(bet)*cos(gm)*cos(gt)*sin(alp)*sin(gb) - 2*rT*cos(gm - gt)*sin(bet)*(x - lc*cos(th1)*sin(gb)) - 2*rT*z*cos(alp)*cos(bet)*sin(gm)*sin(gt) + 
    2*rT*y*cos(bet)*sin(alp)*sin(gm)*sin(gt) + 2*rb*rT*cos(bet)*sin(alp)*sin(gb)*sin(gm)*sin(gt) - 
    2*cos(gb)*(-(rb*rT*cos(gm - gt)*sin(bet)) + lc*cos(th1)*(rT*cos(bet)*cos(gm)*cos(gt)*sin(alp) + rT*cos(bet)*sin(alp)*sin(gm)*sin(gt))) + 
    2*lc*rT*cos(alp)*cos(bet)*cos(gm)*cos(gt)*sin(th1) + 2*lc*rT*cos(alp)*cos(bet)*sin(gm)*sin(gt)*sin(th1),
   2*rT*y*cos(alp)*cos(gm)*cos(gt) + 2*rT*z*cos(gm)*cos(gt)*sin(alp) + 2*rb*rT*cos(alp)*cos(gm)*cos(gt)*sin(gb) + 2*rT*z*cos(alp)*cos(gt)*sin(bet)*sin(gm) - 
    2*rT*y*cos(gt)*sin(alp)*sin(bet)*sin(gm) - 2*rb*rT*cos(gt)*sin(alp)*sin(bet)*sin(gb)*sin(gm) - 2*rT*cos(bet)*(x - lc*cos(th1)*sin(gb))*sin(gm - gt) - 
    2*rT*z*cos(alp)*cos(gm)*sin(bet)*sin(gt) + 2*rT*y*cos(gm)*sin(alp)*sin(bet)*sin(gt) + 2*rb*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb)*sin(gt) + 2*rT*y*cos(alp)*sin(gm)*sin(gt) + 
    2*rT*z*sin(alp)*sin(gm)*sin(gt) + 2*rb*rT*cos(alp)*sin(gb)*sin(gm)*sin(gt) - 
    2*cos(gb)*(-(rb*rT*cos(bet)*sin(gm - gt)) + lc*cos(th1)*(rT*cos(alp)*cos(gm)*cos(gt) + rT*cos(gm)*sin(alp)*sin(bet)*sin(gt) - 
          rT*sin(gm)*(cos(gt)*sin(alp)*sin(bet) - cos(alp)*sin(gt)))) - 2*lc*rT*cos(gm)*cos(gt)*sin(alp)*sin(th1) - 2*lc*rT*cos(alp)*cos(gt)*sin(bet)*sin(gm)*sin(th1) + 
    2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin(gt)*sin(th1) - 2*lc*rT*sin(alp)*sin(gm)*sin(gt)*sin(th1)};


   double row2[] = {2*x - 2*rb*cos(gb) + 2*rT*cos(bet)*cos(gm + gt) + 2*lc*cos(th2)*sin(gb),
   2*y - 2*lc*cos(gb)*cos(th2) + 2*rT*cos(gm)*cos(gt)*sin(alp)*sin(bet) - 2*rb*sin(gb) + 2*rT*cos(alp)*cos(gt)*sin(gm) + 2*rT*cos(alp)*cos(gm)*sin(gt) - 
    2*rT*sin(alp)*sin(bet)*sin(gm)*sin(gt),2*z - 2*rT*cos(alp)*cos(gm)*cos(gt)*sin(bet) + 2*rT*cos(gt)*sin(alp)*sin(gm) + 2*rT*cos(gm)*sin(alp)*sin(gt) + 
    2*rT*cos(alp)*sin(bet)*sin(gm)*sin(gt) - 2*lc*sin(th2),2*rT*y*cos(alp)*cos(gm)*cos(gt)*sin(bet) + 2*rT*z*cos(gm)*cos(gt)*sin(alp)*sin(bet) - 
    2*rb*rT*cos(alp)*cos(gm)*cos(gt)*sin(bet)*sin(gb) + 2*rT*z*cos(alp)*cos(gt)*sin(gm) - 2*rT*y*cos(gt)*sin(alp)*sin(gm) + 2*rb*rT*cos(gt)*sin(alp)*sin(gb)*sin(gm) + 
    2*rT*z*cos(alp)*cos(gm)*sin(gt) - 2*rT*y*cos(gm)*sin(alp)*sin(gt) + 2*rb*rT*cos(gm)*sin(alp)*sin(gb)*sin(gt) - 2*rT*y*cos(alp)*sin(bet)*sin(gm)*sin(gt) - 
    2*rT*z*sin(alp)*sin(bet)*sin(gm)*sin(gt) + 2*rb*rT*cos(alp)*sin(bet)*sin(gb)*sin(gm)*sin(gt) - 
    2*lc*cos(gb)*cos(th2)*(-(rT*cos(gt)*sin(alp)*sin(gm)) - rT*cos(alp)*sin(bet)*sin(gm)*sin(gt) + rT*cos(gm)*(cos(alp)*cos(gt)*sin(bet) - sin(alp)*sin(gt))) - 
    2*lc*rT*cos(gm)*cos(gt)*sin(alp)*sin(bet)*sin(th2) - 2*lc*rT*cos(alp)*cos(gt)*sin(gm)*sin(th2) - 2*lc*rT*cos(alp)*cos(gm)*sin(gt)*sin(th2) + 
    2*lc*rT*sin(alp)*sin(bet)*sin(gm)*sin(gt)*sin(th2),-2*rT*z*cos(alp)*cos(bet)*cos(gm)*cos(gt) + 2*rT*y*cos(bet)*cos(gm)*cos(gt)*sin(alp) - 
    2*rb*rT*cos(bet)*cos(gm)*cos(gt)*sin(alp)*sin(gb) - 2*rT*cos(gm + gt)*sin(bet)*(x + lc*cos(th2)*sin(gb)) + 2*rT*z*cos(alp)*cos(bet)*sin(gm)*sin(gt) - 
    2*rT*y*cos(bet)*sin(alp)*sin(gm)*sin(gt) + 2*rb*rT*cos(bet)*sin(alp)*sin(gb)*sin(gm)*sin(gt) - 
    2*cos(gb)*(-(rb*rT*cos(gm + gt)*sin(bet)) + lc*cos(th2)*(rT*cos(bet)*cos(gm)*cos(gt)*sin(alp) - rT*cos(bet)*sin(alp)*sin(gm)*sin(gt))) + 
    2*lc*rT*cos(alp)*cos(bet)*cos(gm)*cos(gt)*sin(th2) - 2*lc*rT*cos(alp)*cos(bet)*sin(gm)*sin(gt)*sin(th2),
   2*rT*y*cos(alp)*cos(gm)*cos(gt) + 2*rT*z*cos(gm)*cos(gt)*sin(alp) - 2*rb*rT*cos(alp)*cos(gm)*cos(gt)*sin(gb) + 2*rT*z*cos(alp)*cos(gt)*sin(bet)*sin(gm) - 
    2*rT*y*cos(gt)*sin(alp)*sin(bet)*sin(gm) + 2*rb*rT*cos(gt)*sin(alp)*sin(bet)*sin(gb)*sin(gm) + 2*rT*z*cos(alp)*cos(gm)*sin(bet)*sin(gt) - 
    2*rT*y*cos(gm)*sin(alp)*sin(bet)*sin(gt) + 2*rb*rT*cos(gm)*sin(alp)*sin(bet)*sin(gb)*sin(gt) - 2*rT*y*cos(alp)*sin(gm)*sin(gt) - 2*rT*z*sin(alp)*sin(gm)*sin(gt) + 
    2*rb*rT*cos(alp)*sin(gb)*sin(gm)*sin(gt) - 2*rT*cos(bet)*(x + lc*cos(th2)*sin(gb))*sin(gm + gt) - 
    2*cos(gb)*(lc*cos(th2)*(rT*cos(alp)*cos(gm)*cos(gt) - rT*cos(gm)*sin(alp)*sin(bet)*sin(gt) - rT*sin(gm)*(cos(gt)*sin(alp)*sin(bet) + cos(alp)*sin(gt))) - 
       rb*rT*cos(bet)*sin(gm + gt)) - 2*lc*rT*cos(gm)*cos(gt)*sin(alp)*sin(th2) - 2*lc*rT*cos(alp)*cos(gt)*sin(bet)*sin(gm)*sin(th2) - 
    2*lc*rT*cos(alp)*cos(gm)*sin(bet)*sin(gt)*sin(th2) + 2*lc*rT*sin(alp)*sin(gm)*sin(gt)*sin(th2)};


   double row3[] = {2*x + sqrt(3)*lc*cos(gb)*cos(th3) + lc*cos(th3)*sin(gb) - 2*rT*cos(bet)*cos((-6*gt + Pi)/6.)*sin(gm) + 2*rb*sin((-6*gb + Pi)/6.) - 2*rT*cos(bet)*cos(gm)*sin((-6*gt + Pi)/6.),
   2*y - 2*rb*cos((-6*gb + Pi)/6.) - 2*rT*cos((-6*gt + Pi)/6.)*sin(alp)*sin(bet)*sin(gm) + 2*lc*cos(th3)*sin((-6*gb + Pi)/6.) - 2*rT*cos(gm)*sin(alp)*sin(bet)*sin((-6*gt + Pi)/6.) + 
    rT*cos(alp)*(cos(gm)*(sqrt(3)*cos(gt) + sin(gt)) - 2*sin(gm)*sin((-6*gt + Pi)/6.)),
   2*z + sqrt(3)*rT*cos(gm)*cos(gt)*sin(alp) + rT*cos(gm)*sin(alp)*sin(gt) - 2*rT*sin(alp)*sin(gm)*sin((-6*gt + Pi)/6.) + 
    rT*cos(alp)*(sin(gm)*(sqrt(3)*cos(gt)*sin(bet) + sin(bet)*sin(gt)) + 2*cos(gm)*sin(bet)*sin((-6*gt + Pi)/6.)) - 2*lc*sin(th3),
   sqrt(3)*rT*z*cos(alp)*cos(gm)*cos(gt) + 2*pow(rT,2)*cos(alp)*pow(cos(gm),2)*pow(cos((-6*gt + Pi)/6.),2)*sin(alp) - 2*rT*y*cos(alp)*cos((-6*gt + Pi)/6.)*sin(bet)*sin(gm) + 
    2*pow(rT,2)*cos(alp)*pow(cos((-6*gt + Pi)/6.),2)*sin(alp)*pow(sin(bet),2)*pow(sin(gm),2) - pow(rT,2)*cos(alp)*cos(2*gt + Pi/6.)*sin(alp)*sin(2*gm) + 
    pow(rT,2)*cos(alp)*cos(2*gt + Pi/6.)*sin(alp)*pow(sin(bet),2)*sin(2*gm) + rT*z*cos(alp)*cos(gm)*sin(gt) - 
    (pow(rT,2)*cos(alp)*sin(alp)*(6 - 2*cos(2*bet) + cos((6*(bet + gm - gt) + Pi)/3.) - 2*sin(2*gm - 2*gt - Pi/6.) + sin(2*(bet - gm + gt) + Pi/6.)))/4. - 
    2*lc*rT*cos(alp)*cos((-6*gt + Pi)/6.)*cos(th3)*sin(bet)*sin(gm)*sin((-6*gb + Pi)/6.) - 2*rT*y*cos(alp)*cos(gm)*sin(bet)*sin((-6*gt + Pi)/6.) - 
    2*rT*z*cos(alp)*sin(gm)*sin((-6*gt + Pi)/6.) - 2*lc*rT*cos(alp)*cos(gm)*cos(th3)*sin(bet)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) + 
    2*pow(rT,2)*cos(alp)*pow(cos(gm),2)*sin(alp)*pow(sin(bet),2)*pow(sin((-6*gt + Pi)/6.),2) + 2*pow(rT,2)*cos(alp)*sin(alp)*pow(sin(gm),2)*pow(sin((-6*gt + Pi)/6.),2) - 
    2*cos((-6*gb + Pi)/6.)*(-(rb*rT*cos(gm - gt + Pi/6.)*sin(alp)) + rb*(-(rT*cos(alp)*cos((-6*gt + Pi)/6.)*sin(bet)*sin(gm)) - rT*cos(alp)*cos(gm)*sin(bet)*sin((-6*gt + Pi)/6.))) - 
    2*lc*rT*cos(alp)*cos(gm)*cos((-6*gt + Pi)/6.)*sin(th3) + 2*lc*rT*cos(alp)*sin(gm)*sin((-6*gt + Pi)/6.)*sin(th3) - 
    rT*sin(alp)*(cos(gm)*(sqrt(3)*y*cos(gt) + y*sin(gt) + 2*lc*cos((-6*gt + Pi)/6.)*cos(th3)*sin((-6*gb + Pi)/6.) + 2*z*sin(bet)*sin((-6*gt + Pi)/6.) - 
          2*lc*sin(bet)*sin((-6*gt + Pi)/6.)*sin(th3)) + sin(gm)*(sqrt(3)*z*cos(gt)*sin(bet) - 2*(y + lc*cos(th3)*sin((-6*gb + Pi)/6.))*sin((-6*gt + Pi)/6.) + 
          sin(bet)*(z*sin(gt) - 2*lc*cos((-6*gt + Pi)/6.)*sin(th3)))),-2*rT*y*cos(bet)*cos((-6*gt + Pi)/6.)*sin(alp)*sin(gm) + 2*rT*x*cos((-6*gt + Pi)/6.)*sin(bet)*sin(gm) - 
    2*pow(rT,2)*cos(bet)*pow(cos((-6*gt + Pi)/6.),2)*sin(bet)*pow(sin(gm),2) + 2*pow(rT,2)*cos(bet)*pow(cos((-6*gt + Pi)/6.),2)*pow(sin(alp),2)*sin(bet)*pow(sin(gm),2) - 
    pow(rT,2)*cos(bet)*cos(2*gt + Pi/6.)*sin(bet)*sin(2*gm) + pow(rT,2)*cos(bet)*cos(2*gt + Pi/6.)*pow(sin(alp),2)*sin(bet)*sin(2*gm) - 
    2*lc*rT*cos(bet)*cos((-6*gt + Pi)/6.)*cos(th3)*sin(alp)*sin(gm)*sin((-6*gb + Pi)/6.) + 2*rb*rT*cos((-6*gt + Pi)/6.)*sin(bet)*sin(gm)*sin((-6*gb + Pi)/6.) + 
    (pow(rT,2)*pow(cos(alp),2)*(2*cos(2*(bet - gm + gt) + Pi/6.) + 4*sin(2*bet) - 2*sin((6*(bet + gm - gt) + Pi)/3.)))/8. - 2*rT*y*cos(bet)*cos(gm)*sin(alp)*sin((-6*gt + Pi)/6.) + 
    2*rT*x*cos(gm)*sin(bet)*sin((-6*gt + Pi)/6.) - 2*lc*rT*cos(bet)*cos(gm)*cos(th3)*sin(alp)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) + 
    2*rb*rT*cos(gm)*sin(bet)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) - 2*pow(rT,2)*cos(bet)*pow(cos(gm),2)*sin(bet)*pow(sin((-6*gt + Pi)/6.),2) + 
    2*pow(rT,2)*cos(bet)*pow(cos(gm),2)*pow(sin(alp),2)*sin(bet)*pow(sin((-6*gt + Pi)/6.),2) - 
    2*cos((-6*gb + Pi)/6.)*(-(lc*rT*cos(th3)*sin(bet)*sin(gm - gt + Pi/6.)) + 
       rb*(-(rT*cos(bet)*cos((-6*gt + Pi)/6.)*sin(alp)*sin(gm)) - rT*cos(bet)*cos(gm)*sin(alp)*sin((-6*gt + Pi)/6.))) + 
    rT*cos(alp)*(cos(gm)*(2*z*cos(bet)*sin((-6*gt + Pi)/6.) - 2*lc*cos(bet)*sin((-6*gt + Pi)/6.)*sin(th3)) + 
       sin(gm)*(sqrt(3)*z*cos(bet)*cos(gt) + cos(bet)*(z*sin(gt) - 2*lc*cos((-6*gt + Pi)/6.)*sin(th3)))),
   pow(rT,2)*pow(cos(bet),2)*cos(2*gm)*cos(2*gt + Pi/6.) - 2*rT*x*cos(bet)*cos(gm)*cos((-6*gt + Pi)/6.) - pow(rT,2)*cos(2*gm)*cos(2*gt + Pi/6.)*pow(sin(alp),2) - 
    2*rT*y*cos(gm)*cos((-6*gt + Pi)/6.)*sin(alp)*sin(bet) + pow(rT,2)*cos(2*gm)*cos(2*gt + Pi/6.)*pow(sin(alp),2)*pow(sin(bet),2) + 
    2*pow(rT,2)*pow(cos(bet),2)*cos(gm)*pow(cos((-6*gt + Pi)/6.),2)*sin(gm) - sqrt(3)*rT*z*cos(gt)*sin(alp)*sin(gm) - 
    2*pow(rT,2)*cos(gm)*pow(cos((-6*gt + Pi)/6.),2)*pow(sin(alp),2)*sin(gm) + 2*pow(rT,2)*cos(gm)*pow(cos((-6*gt + Pi)/6.),2)*pow(sin(alp),2)*pow(sin(bet),2)*sin(gm) - 
    rT*z*sin(alp)*sin(gm)*sin(gt) - 2*rb*rT*cos(bet)*cos(gm)*cos((-6*gt + Pi)/6.)*sin((-6*gb + Pi)/6.) - 
    2*lc*rT*cos(gm)*cos((-6*gt + Pi)/6.)*cos(th3)*sin(alp)*sin(bet)*sin((-6*gb + Pi)/6.) + 
    (pow(rT,2)*pow(cos(alp),2)*(-4*cos(2*gm - 2*gt - Pi/6.) - 2*cos(2*(bet - gm + gt) + Pi/6.) - 2*sin((6*(bet + gm - gt) + Pi)/3.)))/8. - 
    2*rT*z*cos(gm)*sin(alp)*sin((-6*gt + Pi)/6.) + 2*rT*x*cos(bet)*sin(gm)*sin((-6*gt + Pi)/6.) + 2*rT*y*sin(alp)*sin(bet)*sin(gm)*sin((-6*gt + Pi)/6.) + 
    2*rb*rT*cos(bet)*sin(gm)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) + 2*lc*rT*cos(th3)*sin(alp)*sin(bet)*sin(gm)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) - 
    2*pow(rT,2)*pow(cos(bet),2)*cos(gm)*sin(gm)*pow(sin((-6*gt + Pi)/6.),2) + 2*pow(rT,2)*cos(gm)*pow(sin(alp),2)*sin(gm)*pow(sin((-6*gt + Pi)/6.),2) - 
    2*pow(rT,2)*cos(gm)*pow(sin(alp),2)*pow(sin(bet),2)*sin(gm)*pow(sin((-6*gt + Pi)/6.),2) - 
    2*cos((-6*gb + Pi)/6.)*(lc*rT*cos(bet)*cos(gm - gt + Pi/6.)*cos(th3) - rb*rT*cos(alp)*sin(gm - gt + Pi/6.) + 
       rb*(-(rT*cos(gm)*cos((-6*gt + Pi)/6.)*sin(alp)*sin(bet)) + rT*sin(alp)*sin(bet)*sin(gm)*sin((-6*gt + Pi)/6.))) + 2*lc*rT*cos((-6*gt + Pi)/6.)*sin(alp)*sin(gm)*sin(th3) + 
    2*lc*rT*cos(gm)*sin(alp)*sin((-6*gt + Pi)/6.)*sin(th3) + rT*cos(alp)*(-(sin(gm)*
          (sqrt(3)*y*cos(gt) + y*sin(gt) + 2*lc*cos((-6*gt + Pi)/6.)*cos(th3)*sin((-6*gb + Pi)/6.) + 2*z*sin(bet)*sin((-6*gt + Pi)/6.) - 2*lc*sin(bet)*sin((-6*gt + Pi)/6.)*sin(th3)))\
        + cos(gm)*(sqrt(3)*z*cos(gt)*sin(bet) - 2*(y + lc*cos(th3)*sin((-6*gb + Pi)/6.))*sin((-6*gt + Pi)/6.) + sin(bet)*(z*sin(gt) - 2*lc*cos((-6*gt + Pi)/6.)*sin(th3))))};



double row4[]={2*x + 2*lc*cos(gb + Pi/6.)*cos(th4) - 2*rT*cos(bet)*cos(gt + Pi/6.)*sin(gm) + 2*rb*sin(gb + Pi/6.) - 2*rT*cos(bet)*cos(gm)*sin(gt + Pi/6.),
   2*y - 2*rb*cos(gb + Pi/6.) - 2*rT*cos(gt + Pi/6.)*sin(alp)*sin(bet)*sin(gm) + 2*lc*cos(th4)*sin(gb + Pi/6.) - 2*rT*cos(gm)*sin(alp)*sin(bet)*sin(gt + Pi/6.) + 
    2*rT*cos(alp)*(cos(gm)*cos(gt + Pi/6.) - sin(gm)*sin(gt + Pi/6.)),2*z + 2*rT*cos(gm)*cos(gt + Pi/6.)*sin(alp) - 2*rT*sin(alp)*sin(gm)*sin(gt + Pi/6.) + 
    2*rT*cos(alp)*(cos(gt + Pi/6.)*sin(bet)*sin(gm) + cos(gm)*sin(bet)*sin(gt + Pi/6.)) - 2*lc*sin(th4),
   2*rT*z*cos(alp)*cos(gm)*cos(gt + Pi/6.) + 2*pow(rT,2)*cos(alp)*pow(cos(gm),2)*pow(cos(gt + Pi/6.),2)*sin(alp) - 
    (pow(rT,2)*cos(alp)*(6 - 2*cos(2*bet) + 2*cos((6*(gm + gt) + Pi)/3.) + cos((6*(-bet + gm + gt) + Pi)/3.) + cos((6*(bet + gm + gt) + Pi)/3.))*sin(alp))/4. - 
    2*rT*y*cos(alp)*cos(gt + Pi/6.)*sin(bet)*sin(gm) + 2*pow(rT,2)*cos(alp)*pow(cos(gt + Pi/6.),2)*sin(alp)*pow(sin(bet),2)*pow(sin(gm),2) - 
    2*lc*rT*cos(alp)*cos(gt + Pi/6.)*cos(th4)*sin(bet)*sin(gm)*sin(gb + Pi/6.) - 2*rT*y*cos(alp)*cos(gm)*sin(bet)*sin(gt + Pi/6.) - 2*rT*z*cos(alp)*sin(gm)*sin(gt + Pi/6.) - 
    2*lc*rT*cos(alp)*cos(gm)*cos(th4)*sin(bet)*sin(gb + Pi/6.)*sin(gt + Pi/6.) + 2*pow(rT,2)*cos(alp)*pow(cos(gm),2)*sin(alp)*pow(sin(bet),2)*pow(sin(gt + Pi/6.),2) + 
    2*pow(rT,2)*cos(alp)*sin(alp)*pow(sin(gm),2)*pow(sin(gt + Pi/6.),2) - 
    2*cos(gb + Pi/6.)*(-(rb*rT*cos(gm + gt + Pi/6.)*sin(alp)) + rb*(-(rT*cos(alp)*cos(gt + Pi/6.)*sin(bet)*sin(gm)) - rT*cos(alp)*cos(gm)*sin(bet)*sin(gt + Pi/6.))) - 
    pow(rT,2)*cos(alp)*sin(alp)*sin(2*gm)*sin((6*gt + Pi)/3.) + pow(rT,2)*cos(alp)*sin(alp)*pow(sin(bet),2)*sin(2*gm)*sin((6*gt + Pi)/3.) - 
    2*lc*rT*cos(alp)*cos(gm)*cos(gt + Pi/6.)*sin(th4) + 2*lc*rT*cos(alp)*sin(gm)*sin(gt + Pi/6.)*sin(th4) - 
    2*rT*sin(alp)*(sin(gm)*(-((y + lc*cos(th4)*sin(gb + Pi/6.))*sin(gt + Pi/6.)) + cos(gt + Pi/6.)*sin(bet)*(z - lc*sin(th4))) + 
       cos(gm)*(cos(gt + Pi/6.)*(y + lc*cos(th4)*sin(gb + Pi/6.)) + sin(bet)*sin(gt + Pi/6.)*(z - lc*sin(th4)))),
   -2*rT*y*cos(bet)*cos(gt + Pi/6.)*sin(alp)*sin(gm) + 2*rT*x*cos(gt + Pi/6.)*sin(bet)*sin(gm) - 2*pow(rT,2)*cos(bet)*pow(cos(gt + Pi/6.),2)*sin(bet)*pow(sin(gm),2) + 
    2*pow(rT,2)*cos(bet)*pow(cos(gt + Pi/6.),2)*pow(sin(alp),2)*sin(bet)*pow(sin(gm),2) - 2*lc*rT*cos(bet)*cos(gt + Pi/6.)*cos(th4)*sin(alp)*sin(gm)*sin(gb + Pi/6.) + 
    2*rb*rT*cos(gt + Pi/6.)*sin(bet)*sin(gm)*sin(gb + Pi/6.) - 2*rT*y*cos(bet)*cos(gm)*sin(alp)*sin(gt + Pi/6.) + 2*rT*x*cos(gm)*sin(bet)*sin(gt + Pi/6.) - 
    2*lc*rT*cos(bet)*cos(gm)*cos(th4)*sin(alp)*sin(gb + Pi/6.)*sin(gt + Pi/6.) + 2*rb*rT*cos(gm)*sin(bet)*sin(gb + Pi/6.)*sin(gt + Pi/6.) - 
    2*pow(rT,2)*cos(bet)*pow(cos(gm),2)*sin(bet)*pow(sin(gt + Pi/6.),2) + 2*pow(rT,2)*cos(bet)*pow(cos(gm),2)*pow(sin(alp),2)*sin(bet)*pow(sin(gt + Pi/6.),2) - 
    2*cos(gb + Pi/6.)*(rb*(-(rT*cos(bet)*cos(gt + Pi/6.)*sin(alp)*sin(gm)) - rT*cos(bet)*cos(gm)*sin(alp)*sin(gt + Pi/6.)) - lc*rT*cos(th4)*sin(bet)*sin(gm + gt + Pi/6.)) - 
    pow(rT,2)*cos(bet)*sin(bet)*sin(2*gm)*sin((6*gt + Pi)/3.) + pow(rT,2)*cos(bet)*pow(sin(alp),2)*sin(bet)*sin(2*gm)*sin((6*gt + Pi)/3.) + 
    (pow(rT,2)*pow(cos(alp),2)*(4*sin(2*bet) + 2*sin((6*(-bet + gm + gt) + Pi)/3.) - 2*sin((6*(bet + gm + gt) + Pi)/3.)))/8. + 
    2*rT*cos(alp)*(cos(bet)*cos(gt + Pi/6.)*sin(gm)*(z - lc*sin(th4)) + cos(bet)*cos(gm)*sin(gt + Pi/6.)*(z - lc*sin(th4))),
   -2*rT*x*cos(bet)*cos(gm)*cos(gt + Pi/6.) - 2*rT*y*cos(gm)*cos(gt + Pi/6.)*sin(alp)*sin(bet) + 2*pow(rT,2)*pow(cos(bet),2)*cos(gm)*pow(cos(gt + Pi/6.),2)*sin(gm) - 
    2*rT*z*cos(gt + Pi/6.)*sin(alp)*sin(gm) - 2*pow(rT,2)*cos(gm)*pow(cos(gt + Pi/6.),2)*pow(sin(alp),2)*sin(gm) + 
    2*pow(rT,2)*cos(gm)*pow(cos(gt + Pi/6.),2)*pow(sin(alp),2)*pow(sin(bet),2)*sin(gm) - 2*rb*rT*cos(bet)*cos(gm)*cos(gt + Pi/6.)*sin(gb + Pi/6.) - 
    2*lc*rT*cos(gm)*cos(gt + Pi/6.)*cos(th4)*sin(alp)*sin(bet)*sin(gb + Pi/6.) - 2*rT*z*cos(gm)*sin(alp)*sin(gt + Pi/6.) + 2*rT*x*cos(bet)*sin(gm)*sin(gt + Pi/6.) + 
    2*rT*y*sin(alp)*sin(bet)*sin(gm)*sin(gt + Pi/6.) + 2*rb*rT*cos(bet)*sin(gm)*sin(gb + Pi/6.)*sin(gt + Pi/6.) + 
    2*lc*rT*cos(th4)*sin(alp)*sin(bet)*sin(gm)*sin(gb + Pi/6.)*sin(gt + Pi/6.) - 2*pow(rT,2)*pow(cos(bet),2)*cos(gm)*sin(gm)*pow(sin(gt + Pi/6.),2) + 
    2*pow(rT,2)*cos(gm)*pow(sin(alp),2)*sin(gm)*pow(sin(gt + Pi/6.),2) - 2*pow(rT,2)*cos(gm)*pow(sin(alp),2)*pow(sin(bet),2)*sin(gm)*pow(sin(gt + Pi/6.),2) - 
    2*cos(gb + Pi/6.)*(lc*rT*cos(bet)*cos(gm + gt + Pi/6.)*cos(th4) + rb*(-(rT*cos(gm)*cos(gt + Pi/6.)*sin(alp)*sin(bet)) + rT*sin(alp)*sin(bet)*sin(gm)*sin(gt + Pi/6.)) - 
       rb*rT*cos(alp)*sin(gm + gt + Pi/6.)) + pow(rT,2)*pow(cos(bet),2)*cos(2*gm)*sin((6*gt + Pi)/3.) - pow(rT,2)*cos(2*gm)*pow(sin(alp),2)*sin((6*gt + Pi)/3.) + 
    pow(rT,2)*cos(2*gm)*pow(sin(alp),2)*pow(sin(bet),2)*sin((6*gt + Pi)/3.) + 
    (pow(rT,2)*pow(cos(alp),2)*(-4*sin((6*(gm + gt) + Pi)/3.) - 2*sin((6*(-bet + gm + gt) + Pi)/3.) - 2*sin((6*(bet + gm + gt) + Pi)/3.)))/8. + 
    2*lc*rT*cos(gt + Pi/6.)*sin(alp)*sin(gm)*sin(th4) + 2*lc*rT*cos(gm)*sin(alp)*sin(gt + Pi/6.)*sin(th4) + 
    2*rT*cos(alp)*(cos(gm)*(-((y + lc*cos(th4)*sin(gb + Pi/6.))*sin(gt + Pi/6.)) + cos(gt + Pi/6.)*sin(bet)*(z - lc*sin(th4))) - 
       sin(gm)*(cos(gt + Pi/6.)*(y + lc*cos(th4)*sin(gb + Pi/6.)) + sin(bet)*sin(gt + Pi/6.)*(z - lc*sin(th4))))};


double row5[]={2*x - 2*lc*cos(gb + Pi/6.)*cos(th5) + 2*rT*cos(bet)*cos(gt + Pi/6.)*sin(gm) + 2*rb*sin(gb + Pi/6.) - 2*rT*cos(bet)*cos(gm)*sin(gt + Pi/6.),
   2*y + 2*rb*cos(gb + Pi/6.) + 2*rT*cos(gt + Pi/6.)*sin(alp)*sin(bet)*sin(gm) + 2*lc*cos(th5)*sin(gb + Pi/6.) - 2*rT*cos(gm)*sin(alp)*sin(bet)*sin(gt + Pi/6.) - 
    2*rT*cos(alp)*(cos(gm)*cos(gt + Pi/6.) + sin(gm)*sin(gt + Pi/6.)),2*z - 2*rT*cos(gm)*cos(gt + Pi/6.)*sin(alp) - 2*rT*sin(alp)*sin(gm)*sin(gt + Pi/6.) - 
    2*rT*cos(alp)*(cos(gt + Pi/6.)*sin(bet)*sin(gm) - cos(gm)*sin(bet)*sin(gt + Pi/6.)) - 2*lc*sin(th5),
   -2*rT*z*cos(alp)*cos(gm)*cos(gt + Pi/6.) + 2*pow(rT,2)*cos(alp)*pow(cos(gm),2)*pow(cos(gt + Pi/6.),2)*sin(alp) + 2*rT*y*cos(alp)*cos(gt + Pi/6.)*sin(bet)*sin(gm) + 
    2*pow(rT,2)*cos(alp)*pow(cos(gt + Pi/6.),2)*sin(alp)*pow(sin(bet),2)*pow(sin(gm),2) + 2*lc*rT*cos(alp)*cos(gt + Pi/6.)*cos(th5)*sin(bet)*sin(gm)*sin(gb + Pi/6.) - 
    (pow(rT,2)*cos(alp)*sin(alp)*(6 - 2*cos(2*bet) + cos((6*(bet - gm + gt) + Pi)/3.) + sin(2*(bet + gm - gt) + Pi/6.) + 2*sin(2*gm - 2*gt + Pi/6.)))/4. - 
    2*rT*y*cos(alp)*cos(gm)*sin(bet)*sin(gt + Pi/6.) - 2*rT*z*cos(alp)*sin(gm)*sin(gt + Pi/6.) - 2*lc*rT*cos(alp)*cos(gm)*cos(th5)*sin(bet)*sin(gb + Pi/6.)*sin(gt + Pi/6.) + 
    2*pow(rT,2)*cos(alp)*pow(cos(gm),2)*sin(alp)*pow(sin(bet),2)*pow(sin(gt + Pi/6.),2) + 2*pow(rT,2)*cos(alp)*sin(alp)*pow(sin(gm),2)*pow(sin(gt + Pi/6.),2) + 
    2*cos(gb + Pi/6.)*(rb*rT*cos(gm - gt - Pi/6.)*sin(alp) + rb*(rT*cos(alp)*cos(gt + Pi/6.)*sin(bet)*sin(gm) - rT*cos(alp)*cos(gm)*sin(bet)*sin(gt + Pi/6.))) + 
    pow(rT,2)*cos(alp)*sin(alp)*sin(2*gm)*sin((6*gt + Pi)/3.) - pow(rT,2)*cos(alp)*sin(alp)*pow(sin(bet),2)*sin(2*gm)*sin((6*gt + Pi)/3.) + 
    2*lc*rT*cos(alp)*cos(gm)*cos(gt + Pi/6.)*sin(th5) + 2*lc*rT*cos(alp)*sin(gm)*sin(gt + Pi/6.)*sin(th5) + 
    2*rT*sin(alp)*(sin(gm)*((y + lc*cos(th5)*sin(gb + Pi/6.))*sin(gt + Pi/6.) + cos(gt + Pi/6.)*sin(bet)*(z - lc*sin(th5))) + 
       cos(gm)*(cos(gt + Pi/6.)*(y + lc*cos(th5)*sin(gb + Pi/6.)) + sin(bet)*sin(gt + Pi/6.)*(-z + lc*sin(th5)))),
   2*rT*y*cos(bet)*cos(gt + Pi/6.)*sin(alp)*sin(gm) - 2*rT*x*cos(gt + Pi/6.)*sin(bet)*sin(gm) - 2*pow(rT,2)*cos(bet)*pow(cos(gt + Pi/6.),2)*sin(bet)*pow(sin(gm),2) + 
    2*pow(rT,2)*cos(bet)*pow(cos(gt + Pi/6.),2)*pow(sin(alp),2)*sin(bet)*pow(sin(gm),2) + 2*lc*rT*cos(bet)*cos(gt + Pi/6.)*cos(th5)*sin(alp)*sin(gm)*sin(gb + Pi/6.) - 
    2*rb*rT*cos(gt + Pi/6.)*sin(bet)*sin(gm)*sin(gb + Pi/6.) - 2*rT*y*cos(bet)*cos(gm)*sin(alp)*sin(gt + Pi/6.) + 2*rT*x*cos(gm)*sin(bet)*sin(gt + Pi/6.) - 
    2*lc*rT*cos(bet)*cos(gm)*cos(th5)*sin(alp)*sin(gb + Pi/6.)*sin(gt + Pi/6.) + 2*rb*rT*cos(gm)*sin(bet)*sin(gb + Pi/6.)*sin(gt + Pi/6.) - 
    2*pow(rT,2)*cos(bet)*pow(cos(gm),2)*sin(bet)*pow(sin(gt + Pi/6.),2) + 2*pow(rT,2)*cos(bet)*pow(cos(gm),2)*pow(sin(alp),2)*sin(bet)*pow(sin(gt + Pi/6.),2) + 
    2*cos(gb + Pi/6.)*(lc*rT*cos(th5)*sin(bet)*sin(gm - gt - Pi/6.) + rb*(rT*cos(bet)*cos(gt + Pi/6.)*sin(alp)*sin(gm) - rT*cos(bet)*cos(gm)*sin(alp)*sin(gt + Pi/6.))) + 
    pow(rT,2)*cos(bet)*sin(bet)*sin(2*gm)*sin((6*gt + Pi)/3.) - pow(rT,2)*cos(bet)*pow(sin(alp),2)*sin(bet)*sin(2*gm)*sin((6*gt + Pi)/3.) + 
    (pow(rT,2)*pow(cos(alp),2)*(2*cos(2*(bet + gm - gt) + Pi/6.) + 4*sin(2*bet) - 2*sin((6*(bet - gm + gt) + Pi)/3.)))/8. - 
    2*rT*cos(alp)*(cos(bet)*cos(gt + Pi/6.)*sin(gm)*(z - lc*sin(th5)) + cos(bet)*cos(gm)*sin(gt + Pi/6.)*(-z + lc*sin(th5))),
   2*rT*x*cos(bet)*cos(gm)*cos(gt + Pi/6.) + 2*rT*y*cos(gm)*cos(gt + Pi/6.)*sin(alp)*sin(bet) + 2*pow(rT,2)*pow(cos(bet),2)*cos(gm)*pow(cos(gt + Pi/6.),2)*sin(gm) + 
    2*rT*z*cos(gt + Pi/6.)*sin(alp)*sin(gm) - 2*pow(rT,2)*cos(gm)*pow(cos(gt + Pi/6.),2)*pow(sin(alp),2)*sin(gm) + 
    2*pow(rT,2)*cos(gm)*pow(cos(gt + Pi/6.),2)*pow(sin(alp),2)*pow(sin(bet),2)*sin(gm) + 2*rb*rT*cos(bet)*cos(gm)*cos(gt + Pi/6.)*sin(gb + Pi/6.) + 
    2*lc*rT*cos(gm)*cos(gt + Pi/6.)*cos(th5)*sin(alp)*sin(bet)*sin(gb + Pi/6.) - 2*rT*z*cos(gm)*sin(alp)*sin(gt + Pi/6.) + 2*rT*x*cos(bet)*sin(gm)*sin(gt + Pi/6.) + 
    2*rT*y*sin(alp)*sin(bet)*sin(gm)*sin(gt + Pi/6.) + 2*rb*rT*cos(bet)*sin(gm)*sin(gb + Pi/6.)*sin(gt + Pi/6.) + 
    2*lc*rT*cos(th5)*sin(alp)*sin(bet)*sin(gm)*sin(gb + Pi/6.)*sin(gt + Pi/6.) - 2*pow(rT,2)*pow(cos(bet),2)*cos(gm)*sin(gm)*pow(sin(gt + Pi/6.),2) + 
    2*pow(rT,2)*cos(gm)*pow(sin(alp),2)*sin(gm)*pow(sin(gt + Pi/6.),2) - 2*pow(rT,2)*cos(gm)*pow(sin(alp),2)*pow(sin(bet),2)*sin(gm)*pow(sin(gt + Pi/6.),2) + 
    2*cos(gb + Pi/6.)*(-(lc*rT*cos(bet)*cos(gm - gt - Pi/6.)*cos(th5)) + rb*rT*cos(alp)*sin(gm - gt - Pi/6.) + 
       rb*(rT*cos(gm)*cos(gt + Pi/6.)*sin(alp)*sin(bet) + rT*sin(alp)*sin(bet)*sin(gm)*sin(gt + Pi/6.))) - pow(rT,2)*pow(cos(bet),2)*cos(2*gm)*sin((6*gt + Pi)/3.) + 
    pow(rT,2)*cos(2*gm)*pow(sin(alp),2)*sin((6*gt + Pi)/3.) - pow(rT,2)*cos(2*gm)*pow(sin(alp),2)*pow(sin(bet),2)*sin((6*gt + Pi)/3.) + 
    (pow(rT,2)*pow(cos(alp),2)*(2*cos(2*(bet + gm - gt) + Pi/6.) + 4*cos(2*gm - 2*gt + Pi/6.) + 2*sin((6*(bet - gm + gt) + Pi)/3.)))/8. - 
    2*lc*rT*cos(gt + Pi/6.)*sin(alp)*sin(gm)*sin(th5) + 2*lc*rT*cos(gm)*sin(alp)*sin(gt + Pi/6.)*sin(th5) - 
    2*rT*cos(alp)*(cos(gm)*((y + lc*cos(th5)*sin(gb + Pi/6.))*sin(gt + Pi/6.) + cos(gt + Pi/6.)*sin(bet)*(z - lc*sin(th5))) - 
       sin(gm)*(cos(gt + Pi/6.)*(y + lc*cos(th5)*sin(gb + Pi/6.)) + sin(bet)*sin(gt + Pi/6.)*(-z + lc*sin(th5))))};


double row6[]={2*x - 2*lc*cos((-6*gb + Pi)/6.)*cos(th6) + sqrt(3)*rT*cos(bet)*cos(gt)*sin(gm) + rT*cos(bet)*sin(gm)*sin(gt) + 2*rb*sin((-6*gb + Pi)/6.) - 
    2*rT*cos(bet)*cos(gm)*sin((-6*gt + Pi)/6.),2*y + sqrt(3)*rb*cos(gb) - 2*rT*cos(alp)*cos(gm)*cos((-6*gt + Pi)/6.) + rb*sin(gb) + sqrt(3)*rT*cos(gt)*sin(alp)*sin(bet)*sin(gm) + 
    rT*sin(alp)*sin(bet)*sin(gm)*sin(gt) + 2*lc*cos(th6)*sin((-6*gb + Pi)/6.) - 2*rT*cos(gm)*sin(alp)*sin(bet)*sin((-6*gt + Pi)/6.) - 2*rT*cos(alp)*sin(gm)*sin((-6*gt + Pi)/6.),
   2*z - 2*rT*cos(gm)*cos((-6*gt + Pi)/6.)*sin(alp) - 2*rT*cos(alp)*cos((-6*gt + Pi)/6.)*sin(bet)*sin(gm) + 2*rT*cos(alp)*cos(gm)*sin(bet)*sin((-6*gt + Pi)/6.) - 
    2*rT*sin(alp)*sin(gm)*sin((-6*gt + Pi)/6.) - 2*lc*sin(th6),-2*rT*z*cos(alp)*cos(gm)*cos((-6*gt + Pi)/6.) + 2*rT*y*cos(gm)*cos((-6*gt + Pi)/6.)*sin(alp) + 
    sqrt(3)*rT*y*cos(alp)*cos(gt)*sin(bet)*sin(gm) + 2*rT*z*cos((-6*gt + Pi)/6.)*sin(alp)*sin(bet)*sin(gm) + rT*y*cos(alp)*sin(bet)*sin(gm)*sin(gt) + 
    2*lc*rT*cos(gm)*cos((-6*gt + Pi)/6.)*cos(th6)*sin(alp)*sin((-6*gb + Pi)/6.) + 2*lc*rT*cos(alp)*cos((-6*gt + Pi)/6.)*cos(th6)*sin(bet)*sin(gm)*sin((-6*gb + Pi)/6.) - 
    2*rT*y*cos(alp)*cos(gm)*sin(bet)*sin((-6*gt + Pi)/6.) - 2*rT*z*cos(gm)*sin(alp)*sin(bet)*sin((-6*gt + Pi)/6.) - 2*rT*z*cos(alp)*sin(gm)*sin((-6*gt + Pi)/6.) + 
    2*rT*y*sin(alp)*sin(gm)*sin((-6*gt + Pi)/6.) - 2*lc*rT*cos(alp)*cos(gm)*cos(th6)*sin(bet)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) + 
    2*lc*rT*cos(th6)*sin(alp)*sin(gm)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) - 
    2*cos((-6*gb + Pi)/6.)*(-(rb*rT*cos((-6*(gm + gt) + Pi)/6.)*sin(alp)) + rb*rT*cos(alp)*sin(bet)*sin((-6*(gm + gt) + Pi)/6.)) + sqrt(3)*lc*rT*cos(alp)*cos(gm)*cos(gt)*sin(th6) - 
    sqrt(3)*lc*rT*cos(gt)*sin(alp)*sin(bet)*sin(gm)*sin(th6) + lc*rT*cos(alp)*cos(gm)*sin(gt)*sin(th6) - lc*rT*sin(alp)*sin(bet)*sin(gm)*sin(gt)*sin(th6) + 
    2*lc*rT*cos(gm)*sin(alp)*sin(bet)*sin((-6*gt + Pi)/6.)*sin(th6) + 2*lc*rT*cos(alp)*sin(gm)*sin((-6*gt + Pi)/6.)*sin(th6),
   -2*rT*z*cos(alp)*cos(bet)*cos((-6*gt + Pi)/6.)*sin(gm) + sqrt(3)*rT*y*cos(bet)*cos(gt)*sin(alp)*sin(gm) - sqrt(3)*rT*x*cos(gt)*sin(bet)*sin(gm) - 
    2*pow(rT,2)*cos(bet)*pow(cos((-6*gt + Pi)/6.),2)*sin(bet)*pow(sin(gm),2) + 2*pow(rT,2)*pow(cos(alp),2)*cos(bet)*pow(cos((-6*gt + Pi)/6.),2)*sin(bet)*pow(sin(gm),2) + 
    2*pow(rT,2)*cos(bet)*pow(cos((-6*gt + Pi)/6.),2)*pow(sin(alp),2)*sin(bet)*pow(sin(gm),2) + pow(rT,2)*cos(bet)*cos(2*gt + Pi/6.)*sin(bet)*sin(2*gm) - 
    pow(rT,2)*pow(cos(alp),2)*cos(bet)*cos(2*gt + Pi/6.)*sin(bet)*sin(2*gm) - pow(rT,2)*cos(bet)*cos(2*gt + Pi/6.)*pow(sin(alp),2)*sin(bet)*sin(2*gm) + 
    rT*y*cos(bet)*sin(alp)*sin(gm)*sin(gt) - rT*x*sin(bet)*sin(gm)*sin(gt) + 2*lc*rT*cos(bet)*cos((-6*gt + Pi)/6.)*cos(th6)*sin(alp)*sin(gm)*sin((-6*gb + Pi)/6.) - 
    2*rb*rT*cos((-6*gt + Pi)/6.)*sin(bet)*sin(gm)*sin((-6*gb + Pi)/6.) + 2*rT*z*cos(alp)*cos(bet)*cos(gm)*sin((-6*gt + Pi)/6.) - 
    2*rT*y*cos(bet)*cos(gm)*sin(alp)*sin((-6*gt + Pi)/6.) + 2*rT*x*cos(gm)*sin(bet)*sin((-6*gt + Pi)/6.) - 
    2*lc*rT*cos(bet)*cos(gm)*cos(th6)*sin(alp)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) + 2*rb*rT*cos(gm)*sin(bet)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) - 
    2*pow(rT,2)*cos(bet)*pow(cos(gm),2)*sin(bet)*pow(sin((-6*gt + Pi)/6.),2) + 2*pow(rT,2)*pow(cos(alp),2)*cos(bet)*pow(cos(gm),2)*sin(bet)*pow(sin((-6*gt + Pi)/6.),2) + 
    2*pow(rT,2)*cos(bet)*pow(cos(gm),2)*pow(sin(alp),2)*sin(bet)*pow(sin((-6*gt + Pi)/6.),2) - 
    2*cos((-6*gb + Pi)/6.)*(rb*rT*cos(bet)*sin(alp)*sin((-6*(gm + gt) + Pi)/6.) + lc*rT*cos(th6)*sin(bet)*sin((-6*(gm + gt) + Pi)/6.)) + 
    sqrt(3)*lc*rT*cos(alp)*cos(bet)*cos(gt)*sin(gm)*sin(th6) + lc*rT*cos(alp)*cos(bet)*sin(gm)*sin(gt)*sin(th6) - 2*lc*rT*cos(alp)*cos(bet)*cos(gm)*sin((-6*gt + Pi)/6.)*sin(th6),
   sqrt(3)*rT*x*cos(bet)*cos(gm)*cos(gt) + pow(rT,2)*pow(cos(alp),2)*cos(2*gm)*cos(2*gt + Pi/6.) - pow(rT,2)*pow(cos(bet),2)*cos(2*gm)*cos(2*gt + Pi/6.) + 
    pow(rT,2)*cos(2*gm)*cos(2*gt + Pi/6.)*pow(sin(alp),2) - 2*rT*z*cos(alp)*cos(gm)*cos((-6*gt + Pi)/6.)*sin(bet) + sqrt(3)*rT*y*cos(gm)*cos(gt)*sin(alp)*sin(bet) - 
    pow(rT,2)*pow(cos(alp),2)*cos(2*gm)*cos(2*gt + Pi/6.)*pow(sin(bet),2) - pow(rT,2)*cos(2*gm)*cos(2*gt + Pi/6.)*pow(sin(alp),2)*pow(sin(bet),2) + 
    2*rT*y*cos(alp)*cos((-6*gt + Pi)/6.)*sin(gm) - 2*pow(rT,2)*pow(cos(alp),2)*cos(gm)*pow(cos((-6*gt + Pi)/6.),2)*sin(gm) + 
    2*pow(rT,2)*pow(cos(bet),2)*cos(gm)*pow(cos((-6*gt + Pi)/6.),2)*sin(gm) + 2*rT*z*cos((-6*gt + Pi)/6.)*sin(alp)*sin(gm) - 
    2*pow(rT,2)*cos(gm)*pow(cos((-6*gt + Pi)/6.),2)*pow(sin(alp),2)*sin(gm) + 2*pow(rT,2)*pow(cos(alp),2)*cos(gm)*pow(cos((-6*gt + Pi)/6.),2)*pow(sin(bet),2)*sin(gm) + 
    2*pow(rT,2)*cos(gm)*pow(cos((-6*gt + Pi)/6.),2)*pow(sin(alp),2)*pow(sin(bet),2)*sin(gm) + rT*x*cos(bet)*cos(gm)*sin(gt) + rT*y*cos(gm)*sin(alp)*sin(bet)*sin(gt) + 
    2*rb*rT*cos(bet)*cos(gm)*cos((-6*gt + Pi)/6.)*sin((-6*gb + Pi)/6.) + 2*lc*rT*cos(gm)*cos((-6*gt + Pi)/6.)*cos(th6)*sin(alp)*sin(bet)*sin((-6*gb + Pi)/6.) + 
    2*lc*rT*cos(alp)*cos((-6*gt + Pi)/6.)*cos(th6)*sin(gm)*sin((-6*gb + Pi)/6.) - 2*rT*y*cos(alp)*cos(gm)*sin((-6*gt + Pi)/6.) - 2*rT*z*cos(gm)*sin(alp)*sin((-6*gt + Pi)/6.) + 
    2*rT*x*cos(bet)*sin(gm)*sin((-6*gt + Pi)/6.) - 2*rT*z*cos(alp)*sin(bet)*sin(gm)*sin((-6*gt + Pi)/6.) + 2*rT*y*sin(alp)*sin(bet)*sin(gm)*sin((-6*gt + Pi)/6.) - 
    2*lc*rT*cos(alp)*cos(gm)*cos(th6)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) + 2*rb*rT*cos(bet)*sin(gm)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) + 
    2*lc*rT*cos(th6)*sin(alp)*sin(bet)*sin(gm)*sin((-6*gb + Pi)/6.)*sin((-6*gt + Pi)/6.) + 2*pow(rT,2)*pow(cos(alp),2)*cos(gm)*sin(gm)*pow(sin((-6*gt + Pi)/6.),2) - 
    2*pow(rT,2)*pow(cos(bet),2)*cos(gm)*sin(gm)*pow(sin((-6*gt + Pi)/6.),2) + 2*pow(rT,2)*cos(gm)*pow(sin(alp),2)*sin(gm)*pow(sin((-6*gt + Pi)/6.),2) - 
    2*pow(rT,2)*pow(cos(alp),2)*cos(gm)*pow(sin(bet),2)*sin(gm)*pow(sin((-6*gt + Pi)/6.),2) - 
    2*pow(rT,2)*cos(gm)*pow(sin(alp),2)*pow(sin(bet),2)*sin(gm)*pow(sin((-6*gt + Pi)/6.),2) - 
    2*cos((-6*gb + Pi)/6.)*(lc*rT*cos(bet)*cos((-6*(gm + gt) + Pi)/6.)*cos(th6) - rb*rT*cos((-6*(gm + gt) + Pi)/6.)*sin(alp)*sin(bet) + rb*rT*cos(alp)*sin((-6*(gm + gt) + Pi)/6.)) + 
    sqrt(3)*lc*rT*cos(alp)*cos(gm)*cos(gt)*sin(bet)*sin(th6) - sqrt(3)*lc*rT*cos(gt)*sin(alp)*sin(gm)*sin(th6) + lc*rT*cos(alp)*cos(gm)*sin(bet)*sin(gt)*sin(th6) - 
    lc*rT*sin(alp)*sin(gm)*sin(gt)*sin(th6) + 2*lc*rT*cos(gm)*sin(alp)*sin((-6*gt + Pi)/6.)*sin(th6) + 2*lc*rT*cos(alp)*sin(bet)*sin(gm)*sin((-6*gt + Pi)/6.)*sin(th6)};

   
  

   Eigen::MatrixXf A(6,6);

   A(0,0) = row1[0];    A(0,1) = row1[1];    A(0,2) = row1[2];    A(0,3) = row1[3];    A(0,4) = row1[4];    A(0,5) = row1[5];

   A(1,0) = row2[0];    A(1,1) = row2[1];    A(1,2) = row2[2];    A(1,3) = row2[3];    A(1,4) = row2[4];    A(1,5) = row2[5];

   A(2,0) = m31;    A(2,1) = m32;    A(2,2) = m33;    A(2,3) = m34;    A(2,4) = m35;    A(2,5) = m36;

   A(3,0) = m41;    A(3,1) = m42;    A(3,2) = m43;    A(3,3) = m44;    A(3,4) = m45;    A(3,5) = m46;

   A(4,0) = m51;    A(4,1) = m52;   A(4,2) = m53;
   A(4,3) = m54;
   A(4,4) = m55;
   A(4,5) = m65;

   A(5,0) = m61;
   A(5,1) = m62;
   A(5,2) = m63;
   A(5,3) = m64;
   A(5,4) = m65;
   A(5,5) = m66;



  
   std::cout << "Here is the matrix A:\n" << A << std::endl;
   std::cout << "The determinant of A is " << A.determinant() << std::endl;
   
}