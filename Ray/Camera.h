//
//  Camera.h
//  Ray
//
//  Created by Austin Berard on 4/20/16.
//  Copyright © 2016 Austin Berard. All rights reserved.
//

#ifndef Camera_h
#define Camera_h

#include "math.h"
#include "Vect.h"

class Camera {
    Vect campos, camdir, camright, camdown;
    
public:
    Camera();
    
    Camera(Vect, Vect, Vect, Vect);
    
    // method functions
    
    Vect getCameraPosition () { return campos; }
    Vect getCameraDirection () { return camdir; }
    Vect getCameraRight () { return camright; }
    Vect getCameraDown () { return camdown; }
    
};

Camera::Camera () {
    campos = Vect(0,0,0);
    camdir = Vect(0,0,1);
    camright = Vect(0,0,0);
    camdown = Vect(0,0,0);
}

Camera::Camera (Vect pos, Vect dir, Vect right, Vect down) {
    campos = pos;
    camdir = dir;
    camright = right;
    camdown = down;
}

#endif /* Camera_h */
