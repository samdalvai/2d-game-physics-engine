#ifndef PARTICLE_H
#define PARTICLE_H

#include "Vec2.h"
#include <SDL2/SDL2_gfxPrimitives.h>

struct Particle {
    int radius;

    Vec2 position;
    Vec2 velocity;
    Vec2 acceleration;
    Uint32 color;

    Vec2 sumForces;

    float mass;
    float invMass;

    Particle(float x, float y, float mass);
    ~Particle();

    void AddForce(const Vec2& force);
    void ClearForces();

    void Integrate(float dt);
};

#endif
