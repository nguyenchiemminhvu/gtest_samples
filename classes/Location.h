#ifndef LOCATION_H__
#define LOCATION_H__

#include <gtest/gtest.h>

class Location
{
public:
    Location();
    ~Location();

    void setLat(double l);
    void setLon(double l);
    void setAlt(double a);

    inline double getLat() { return lat; }
    inline double getLon() { return lon; }
    inline double getAlt() { return alt; }

private:
    double lat;
    double lon;
    double alt;
};

#endif
