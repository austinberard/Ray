//
//  Color.h
//  Ray
//
//  Created by Austin Berard on 4/20/16.
//  Copyright © 2016 Austin Berard. All rights reserved.
//

#ifndef Color_h
#define Color_h

class Color {
    double red, green, blue, special;
    
public:
    Color();
    
    Color(double, double, double, double);
    
    // method functions
    
    double getColorRed() { return red; }
    double getColorGreen() { return green; }
    double getColorBlue() { return blue; }
    double getColorSpecial() { return special; }
    
    void setColorRed(double r) { red = r; }
    void setColorGreen(double g) { green = g; }
    void setColorBlue(double b) { blue = b; }
    void setColorSpecial(double s) { special = s; };
};

Color::Color () {
    red = 0.5;
    green = 0.5;
    blue = 0.5;
//    special = 0;
}

Color::Color (double r, double g, double b, double s) {
    red = r;
    green = g;
    blue = b;
    special = s;
    
}

#endif /* Color_h */
