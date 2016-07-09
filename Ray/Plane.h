//
//  Plane.h
//  Ray
//
//  Created by Austin Berard on 4/23/16.
//  Copyright © 2016 Austin Berard. All rights reserved.
//

#ifndef Plane_h
#define Plane_h


#include "math.h"
#include "Object.h"
#include "Vect.h"
#include "Color.h"

class Plane : public Object {
    Vect normal;
    double distance;
    Color color;
    
public:
    Plane();
    
    Plane(Vect, double, Color);
    
    // method functions
    
    Vect getPlaneNormal () { return normal; }
    double getPlaneDistance () { return distance; }
    Color getPlaneColor () { return color; }
    
    Vect getNormalAt (Vect point) {
        return normal;
    }
    
    double findIntersection (Ray ray) {
        Vect ray_direction = ray.getRayDirection();
        
        double a = ray_direction.dotProduct(normal);
        
        if(a == 0){
            //ray is parallel to the plane
            return -1;
        }
        else {
            double b = normal.dotProduct(ray.getRayOrigin().vectAdd(normal.vectMult(distance).negative()));
            
            return -1*b/a;
        }
        
    }
    
};

Plane::Plane () {
    normal = Vect(1,0,0);
    distance = 0;
    color = Color(0.5,0.5,0.5,0);
}

Plane::Plane (Vect n, double d, Color c) {
    normal = n;
    distance = d;
    color = c;
}

#endif /* Plane_h */
