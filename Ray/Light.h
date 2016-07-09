//
//  Light.h
//  Ray
//
//  Created by Austin Berard on 4/20/16.
//  Copyright © 2016 Austin Berard. All rights reserved.
//

#ifndef Light_h
#define Light_h

#include "Vect.h"
#include "Color.h"

class Light {
    Vect position;
    Color color;
    
public:
    Light();
    
    Light(Vect, Color);
    
    // method functions
    
    virtual Vect getLightPosition () { return position; }
    virtual Color getLightColor () { return color; }
    
};

Light::Light () {
    position = Vect(0,0,0);
    color = Color(1,1,1,0);
}

Light::Light (Vect p, Color c) {
    position = p;
    color = c;
}
#endif /* Light_h */
