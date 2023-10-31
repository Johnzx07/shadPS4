#include "libc_math.h"

#include <cmath>

namespace Core::Libraries::LibC::math {

float PS4_SYSV_ABI atan2f(float y, float x) { return std::atan2f(y, x); }

float PS4_SYSV_ABI acosf(float num) { return std::acosf(num); }

float PS4_SYSV_ABI tanf(float num) { return std::tanf(num); }

float PS4_SYSV_ABI asinf(float num) { return std::asinf(num); }

double PS4_SYSV_ABI pow(double base, double exponent) { return std::pow(base, exponent); }

double PS4_SYSV_ABI _Sin(double x) { return std::sin(x); }
}  // namespace Core::Libraries::LibC::math