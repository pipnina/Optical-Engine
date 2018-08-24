#ifndef MIRROR_H
#define MIRROR_H

#include "Components/component.h"

class Mirror : public Component
{
    public:
        Mirror();

        float focal_ratio;
        float diameter;
        float conic_constant;
        float central_hole_size;

        int set_focal_ratio(float ratio);
        void set_conic_constant(float constant);
        int set_diameter(float dia);
        int set_hole_size(float size);
};

#endif // MIRROR_H
