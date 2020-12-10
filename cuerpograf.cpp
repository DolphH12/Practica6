#include "cuerpograf.h"

cuerpograf::cuerpograf(float x, float y, float vx, float vy, float m, float r):escala(0.05)
{
    esf = new cuerpo(x,y,vx,vy,m,r);
}

QRectF cuerpograf::boundingRect() const
{
    return QRectF(-1*escala*esf->getR(),-1*escala*esf->getR(),2*escala*esf->getR(),2*escala*esf->getR());
}

void cuerpograf::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::darkGreen);
    painter->drawEllipse(boundingRect());
}

void cuerpograf::setEscala(float s)
{
    escala = s;
}

void cuerpograf::actualizar(float dt)
{
    esf->actualizar(dt);
    setPos(esf->getPX()*escala,esf->getPY()*escala);
}

cuerpo *cuerpograf::getEsf()
{
    return esf;
}





