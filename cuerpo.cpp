#include "cuerpo.h"
#include <math.h>
#include <cmath>

cuerpo::cuerpo(float PX_, float PY_, float VX_, float VY_, float mass, float R_)
{
    PX = PX_;
    PY = PY_;
    VX = VX_;
    VY = VY_;
    masa = mass;
    AX = 0;
    AY = 0;
    G = 6.67384*(pow(10,-11));
    R = R_;
}

float cuerpo::getPY() const
{
    return PY;
}

float cuerpo::getMasa() const
{
    return masa;
}

float cuerpo::getR() const
{
    return R;
}

float cuerpo::getPX() const
{
    return PX;
}


void cuerpo::acelerar(float px2_, float py2_, float mass2)
{
    radio = pow((pow((px2_-PX),2)+pow((py2_-PY),2)),1/2);
    AX = G*mass2*(px2_-PX)/pow(radio,2);
    AY = G*mass2*(py2_-PY)/pow(radio,2);
}

void cuerpo::actualizar(float dt)
{
    VX = VX + (AX*dt);
    VY = VY + (AY*dt);
    PX = PX + (VX*dt);
    PY = PY + (VY*dt);
}









