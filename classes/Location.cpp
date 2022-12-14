#include "Location.h"

Location::Location()
    : lat(0.0f), lon(0.0f), alt(0.0f)
{

}

Location::~Location()
{

}

void Location::setLat(double l)
{
    lat = l;
}

void Location::setLon(double l)
{
    lon = l;
}

void Location::setAlt(double a)
{
    alt = a;
}