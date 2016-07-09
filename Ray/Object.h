//
//  Object.h
//  Ray
//
//  Created by Austin Berard on 4/20/16.
//  Copyright © 2016 Austin Berard. All rights reserved.
//

#ifndef Object_h
#define Object_h

#include "Ray.h"
#include "Vect.h"
#include "Color.h"

class Object {
public:
    Object();
    
    // method functions
    Color getObjectColor () { return Color (0.0, 0.0, 0.0, 0.0); }
    
    double findIntersection(Ray ray) {
        return 0;
    }
    
};

Object::Object () {}

#endif /* Object_h */
