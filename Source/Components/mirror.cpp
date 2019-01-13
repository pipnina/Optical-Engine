#include "mirror.h"

Mirror::Mirror()
{
	name = "Mirror";
}

int Mirror::set_focal_ratio(float ratio)
{
    if(ratio == 0)
    {
        return 1;
    }
    else
    {
        focal_ratio = ratio;
        return 0;
    }
}
void Mirror::set_conic_constant(float constant)
{
    conic_constant = constant;
}
int Mirror::set_diameter(float dia)
{
    if(dia == 0)
    {
        return 1;
    }
    else
    {
        diameter = dia;
        return 0;
    }
}
int Mirror::set_hole_size(float size)
{
    if(size >= central_hole_size)
    {
        return 1;
    }
    else
    {
        central_hole_size = size;
        return 0;
    }
}
