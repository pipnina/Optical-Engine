#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

class Component
{
    public:
        Component();

        float offset;
        float tilt;
        std::string name;

        void setTilt(float newTilt);
        void setOffset(float newOffset);

};

#endif // COMPONENT_H
