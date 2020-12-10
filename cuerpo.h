#ifndef CUERPO_H
#define CUERPO_H


class cuerpo
{
private:
    float PX;
    float PY;
    float VX;
    float VY;
    float radio; //distancia entre 2 planetas
    float masa;
    float AX;
    float AY;
    float G;
    float R;//Radio de un planeta

public:
    cuerpo(float PX_,float PY_,float VX_,float VY_,float mass, float R_);

    float getPX() const;
    float getPY() const;
    float getMasa() const;
    float getR() const;

    void acelerar(float px2_,float py2_, float mass2);
    void actualizar(float dt);
};

#endif // CUERPO_H











