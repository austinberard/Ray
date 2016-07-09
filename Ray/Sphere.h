//
//  Sphere.h
//  Ray
//
//  Created by Austin Berard on 4/20/16.
//  Copyright © 2016 Austin Berard. All rights reserved.
//

#ifndef Sphere_h
#define Sphere_h

#include "math.h"
#include "Object.h"
#include "Vect.h"
#include "Color.h"

class Sphere : public Object {
    Vect center;
    double radius;
    Color color;
    
public:
    Sphere();
    
    Sphere(Vect, double, Color);
    
    // method functions
    
    Vect getSphereCenter () { return center; }
    double getSphereRadius () { return radius; }
    Color getSphereColor () { return color; }
    
};

Sphere::Sphere () {
    center = Vect(0,0,0);
    radius = 1.0;
    color = Color(0.5,0.5,0.5,0);
}

Sphere::Sphere (Vect c, double r, Color cv) {
    center = c;
    radius = r;
    color = cv;
}


#endif /* Sphere_h */
