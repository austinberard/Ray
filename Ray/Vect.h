//
//  Vect.h
//  
//
//  Created by Austin Berard on 4/20/16.
//
//

#ifndef Vect_h
#define Vect_h

#include "math.h"
class Vect {
    double x, y, z;
    
public:
    Vect();
    
    Vect(double, double, double);
    
    // method functions
    
    double getVectX() { return x; }
    double getVectY() { return y; }
    double getVectZ() { return z; }
    
    double magnitude () {
        return sqrt((x*x) + (y*y) + (z*z));
    }
    
    Vect normalize () {
        double magnitude = sqrt((x*x) + (y*y) + (z*z));
        return Vect (x/magnitude, y/magnitude, x/magnitude);
    }
    
    Vect negative () {
        return Vect (-x, -y, -z);
    }
    
    double dotProduct (Vect v) {
        return x*v.getVectX() + y*v.getVectY() + z*v.getVectZ();
    }
    
    Vect crossProduct (Vect v) {
        return Vect (y*v.getVectZ() - z*v.getVectY(),
                     z*v.getVectX() - x*v.getVectZ(),
                     x*v.getVectY() - y*v.getVectX());
    }
    
    Vect vectAdd (Vect v) {
        return Vect (x + v.getVectX(),
                     y + v.getVectY(),
                     z + v.getVectZ());
    }
    
    Vect vectMult (double scalar) {
        return Vect (x*scalar, y*scalar, z*scalar);
    }
};

Vect::Vect () {
    x = 0;
    y = 0;
    z = 0;
}

Vect::Vect (double i, double j, double k) {
    x = i;
    y = j;
    z = k;
}

#endif /* Vect_h */
