#include "jarus.h"

jarus::jarus()
{

}

jarus::~jarus()
{
    //dtor
}

// This function converts decimal degrees to radians
double jarus::deg2rad(double deg) {
  return (deg * M_PI / 180);
}

//  This function converts radians to decimal degrees
double jarus::rad2deg(double rad) {
  return (rad * 180 / M_PI);
}

double jarus::distanceEarth(double lat1d, double lon1d, double lat2d, double lon2d) {
  double lat1r, lon1r, lat2r, lon2r, u, v;
  lat1r = deg2rad(lat1d);
  lon1r = deg2rad(lon1d);
  lat2r = deg2rad(lat2d);
  lon2r = deg2rad(lon2d);
  u = sin((lat2r - lat1r)/2);
  v = sin((lon2r - lon1r)/2);
  return 2.0 * earthRadiusKm * asin(sqrt(u * u + cos(lat1r) * cos(lat2r) * v * v));
}

void jarus::secondLocationFromBearingAdistance(double lat1, double lon1, double bearing, double distance, double *secLati, double *secLongi)
{
    double rlat1 = deg2rad(lat1);
    double rlon1 = deg2rad(lon1);
    double rbearing = deg2rad(bearing);
    double rdistance = distance / earthRadiusKm; 	//normalize linear distance to radian angle
    double rlat = asin( sin(rlat1) * cos(rdistance) + cos(rlat1) * sin(rdistance) * cos(rbearing) );


    float rlon;

    if ( abs(cos(rlat))  < 0.000001)
        rlon=rlon1;
    else
        rlon = fmod((rlon1 - asin( sin(rbearing)* sin(rdistance) / cos(rlat) ) + M_PI ) , (2*M_PI)) - M_PI;

    *secLati = rad2deg(rlat);
    *secLongi = rad2deg(rlon);

}
void jarus::getCordinateFromLatiLongi(double *xCor, double *yCor, double lati, double longi)
{
    *xCor = earthRadiusKm * cos(deg2rad(lati)) * cos(deg2rad(longi));
    *yCor = earthRadiusKm * cos(deg2rad(lati)) * sin(deg2rad(longi));
}
