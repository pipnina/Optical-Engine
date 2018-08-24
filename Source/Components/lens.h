#ifndef LENS_H
#define LENS_H

#include <iostream>
#include "Components/component.h"

#define LENS_TYPE_SYMMETRICAL 1
#define LENS_TYPE_ASYMMETRICAL 2

class Lens : public Component
{
    public:
        Lens();

        int type;
        float diameter;

        float side1_focal_ratio;
        float side1_conic_constant;

        float side2_focal_ratio;
        float side2_conic_constant;

        float thickness;

        int set_type(int newType);
        int set_side1_focal_ratio(float ratio);
        int set_side1_conic_constant(float conic);
        int set_side2_focal_ratio(float ratio);
        int set_side2_conic_constant(float conic);
        int set_diameter(float newDia);
};

#endif // LENS_H
