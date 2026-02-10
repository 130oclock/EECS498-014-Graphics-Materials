#include "ray.hpp"
#include "math.hpp"

Vec3 trace(const Ray &ray, int bouncesLeft, bool discardEmission);

Vec3 randomHemisphereDirection(const Vec3 &normal);

Vec3 cosWeightedHemisphere(const Vec3 &normal);