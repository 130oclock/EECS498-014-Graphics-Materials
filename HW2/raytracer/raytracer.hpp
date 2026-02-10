#include "ray.hpp"
#include "math.hpp"

Vec3 trace_impl(const Ray &ray, int bouncesLeft, bool discardEmission);

Vec3 randomHemisphereDirection_impl(const Vec3 &normal);

Vec3 cosWeightedHemisphere_impl(const Vec3 &normal);