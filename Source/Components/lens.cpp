#include "lens.h"

Lens::Lens()
{

}


int Lens::set_type(int newType)
{
    if(newType == LENS_TYPE_ASYMMETRICAL || LENS_TYPE_SYMMETRICAL)
    {
        type = newType;
        return 1;
    }
    else
    {
        std::cout << "Requested lens type not valid\n";
        return 0;
    }
}


int Lens::set_side1_focal_ratio(float ratio)
{
    if(ratio == 0)
    {
        std::cout << "Focal ratio cannot be zero!\n";
        return 0;
    }
    else
    {
        side1_focal_ratio = ratio;
        return 1;
    }
}

int Lens::set_side1_conic_constant(float conic)
{

    side1_focal_ratio = conic;
    return 1;
}

int Lens::set_side2_focal_ratio(float ratio)
{
    if(ratio == 0)
    {
        std::cout << "Focal ratio cannot be zero!\n";
        return 0;
    }
    else
    {
        side2_focal_ratio = ratio;
        return 1;
    }
}

int Lens::set_side2_conic_constant(float conic)
{

    side2_focal_ratio = conic;
    return 1;
}
int Lens::set_diameter(float newDia)
{
    if(newDia >=0.1)
    {
        diameter = newDia;
        return 1;
    }
    else
    {
        std::cout << "Diameter must be at least 0.1mm!\n";
        return 0;
    }
}
