#ifndef GPSCALCULATION_H
#define GPSCALCULATION_H

//https://www.movable-type.co.uk/scripts/latlong.html
//http://www.geomidpoint.com/destination/
#define rEarth 6371.01
#define epsilon 0.000001

#include <cmath>
#include <iostream>


class gpsCalculation
{
    public:
        gpsCalculation();
        virtual ~gpsCalculation();

        struct DDMMSS
        {
            double DD;
            double MM;
            double SS;
        };
        DDMMSS dmsLati, dmsLongi;
        struct cordinates
        {
            double latitude;
            double longitude;
        };
        struct DisABearStruct
        {
            double distance;       //km
            double bearing;     //degree
        };



        double rlati1, rlongi1;
        double rlati2, rlongi2;
        double dlati1, dlongi1;
        double dlati2, dlongi2;
        double dis,    brng;
        double rAngularDis;

        double deg2rad(double angle);
        double rad2deg(double angle);
        void getBearinAdistance(cordinates firstCor  , cordinates secondCor, DisABearStruct *disBer);
        void secondCordinateFromBrngAdis(cordinates initialCor, DisABearStruct disBear, cordinates *finalCor);
        void convert2dms(double degreeDecimal, DDMMSS *dms);
        void getCrossTrackDistance(DisABearStruct currentPointDisBer,  double curPoiber, double *ctd);
        void setLocation(cordinates *loc, double lati, double longi);
        void getXYcordinate(DisABearStruct disBearCor1, double *xCor, double *yCor);
    protected:

    private:
};

#endif // GPSCALCULATION_H
