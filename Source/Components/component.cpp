#include "component.h"

Component::Component()
{

}


void Component::setTilt(float newTilt)
{
    tilt = newTilt;
}

void Component::setOffset(float newOffset)
{
    //Probably want to change this, so that it checks for collisions
    //-with other components in the future

    offset = newOffset;
}
