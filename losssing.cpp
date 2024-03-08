# include <iostream>
# include <cmath>

#define Pi 3.1428


using namespace std;

int main()
{
   double rb = 227.74, rT = 186, gb = 0.406, gt = 0.109, lst = 182, lc = 12.5, alp = 0, bet = 0, gm = 0, x,y,z = 160;
   double th1br1,th2br1,th3br1,th4br1,th5br1,th6br1;
   double th1br2,th2br2,th3br2,th4br2,th5br2,th6br2;
   double r,phi,inc=0.5,dr=(Pi/180);
   int fail=0;

  for(r=0;r<=20;r=r+inc)
  {
    for(phi=0;phi<360;phi=phi+5)
    {
        x=r*cos(phi*dr);
        y=r*sin(phi*dr);

        cout<<"\n x,y "<<x<<" "<<y<<"\n";

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


      if(isnan(th1br1)||isnan(th2br1)||isnan(th3br1)||isnan(th4br1)||isnan(th5br1)||isnan(th6br1))
      {
        fail=1;
        cout<< " \n IK failed \n";
        break;
      }
      
    }

    if(fail==1)
      break;
      
  }

  cout<<"\n rad: "<<r;
  cout<<"\n phi: "<<phi<<"\n";

   
   
    return 0;
}

 