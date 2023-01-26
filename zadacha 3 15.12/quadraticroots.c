#include "quadraticroots.h"

QuadraticRootsResult findroots(long double a, long double b, long double c){
  long double the_discriminant = (b * b) - (4*a*c);
  QuadraticRootsResult roots;
  if(the_discriminant > 0){
    the_discriminant = sqrtl(the_discriminant);
    roots.x1 = (-b - the_discriminant) / (2 * a);
    roots.x2 = (-b + the_discriminant) / (2 * a);
    roots.norealroots = 0;
  }else if(the_discriminant == 0){
          roots.x1 = (-b) / (2 * a);
          roots.x2 = roots.x1;
          roots.norealroots = 0;
        }else roots.norealroots = 1;
  return roots;
}
