//
//  Ray.h
//  Ray
//
//  Created by Austin Berard on 4/20/16.
//  Copyright © 2016 Austin Berard. All rights reserved.
//

#ifndef Ray_h
#define Ray_h

#include "Vect.h"

class Ray {
    Vect origin, direction;
    
public:
    Ray();
    
    Ray(Vect, Vect);
    
    // method functions
    
    Vect getRayOrigin () { return origin; }
    Vect getRayDirection () { return direction; }
    
};

Ray::Ray () {
    origin = Vect(0,0,0);
    direction = Vect(1,0,0);
}

Ray::Ray (Vect o, Vect d) {
    origin = o;
    direction = d;
}


#endif /* Ray_h */
