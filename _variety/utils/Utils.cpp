#include "Utils.h"
#include <cmath>

static const float EPSILON = 0.0001f; // Tolerance value

bool IsEqual(float x, float y)
{ 
   return fabsf(x - y) < EPSILON;
}
bool isGreaterThanOrEqual(float x, float y)
{ 
   return x > y || IsEqual(x, y);
}

bool isLessThanOrEqual(float x, float y)
{ 
   return x < y || IsEqual(x, y);
}
