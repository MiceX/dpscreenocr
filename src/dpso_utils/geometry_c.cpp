#include "geometry_c.h"


bool dpsoRectIsEmpty(const DpsoRect* rect)
{
    return !rect || rect->w <= 1 || rect->h <= 1;
}
