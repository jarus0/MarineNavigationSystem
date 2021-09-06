#include "gpsCalculation.h"
using namespace std;
gpsCalculation::gpsCalculation()
{
    //ctor
}

gpsCalculation::~gpsCalculation()
{
    //dtor
}


double gpsCalculation::deg2rad(double angle)
{
	return angle*M_PI/180;
}

double gpsCalculation::rad2deg(double angle)
{
	return angle*180/M_PI;
}

void gpsCalculation::getBearinAdistance(cordinates firstCor, cordinates secondCor, DisABearStruct *disBer)
{
    double  temporaryVariable1,
            temporaryVariable2,
            temporaryVariable3,
            temporaryVariable4;

    double rlati1  = deg2rad(firstCor.latitude);
	double rlati2  = deg2rad(secondCor.latitude);

	double rlatDiffe = deg2rad(secondCor.latitude-firstCor.latitude);
	double rlongDiffe = deg2rad(secondCor.longitude-firstCor.longitude);


	temporaryVariable1 = pow (sin(rlatDiffe/2), 2) +
                        cos(rlati1) * cos(rlati2) * pow(sin(rlongDiffe/2), 2);
	temporaryVariable2 = 2 * atan2(sqrt(temporaryVariable1), sqrt(1-temporaryVariable1));

	disBer->distance = rEarth * temporaryVariable2;

	temporaryVariable3 = sin(rlongDiffe) * cos(rlati2);
	temporaryVariable4 = cos(rlati1) * sin(rlati2) -
						sin(rlati1)* cos(rlati2) * cos(rlongDiffe);
	disBer->bearing = atan2(temporaryVariable3, temporaryVariable4);
	disBer->bearing = rad2deg(disBer->bearing);
	disBer->bearing = fmod(disBer->bearing+360, 360);

}

void gpsCalculation::secondCordinateFromBrngAdis(cordinates initialCor, DisABearStruct disBear, cordinates *finalCor)
{

    rAngularDis = disBear.distance/rEarth;
	brng 		= deg2rad(disBear.bearing);
	rlati1		= deg2rad(initialCor.latitude);
    rlongi1 	= deg2rad(initialCor.longitude);



	rlati2  = asin (
					sin(rlati1) * cos (rAngularDis) +
					cos (rlati1) * sin (rAngularDis) * cos (brng)
				  );
	rlongi2 = rlongi1 + atan2 (
								sin(brng) * sin(rAngularDis) * cos(rlati1),
								cos (rAngularDis) - sin (rlati1)* sin (rlati2)
							);
    finalCor->latitude = rad2deg(rlati2);
	finalCor->longitude= rad2deg(rlongi2);

}

void gpsCalculation::convert2dms(double degreeDecimal, DDMMSS *dms)
{

	dms->DD = (int)degreeDecimal;
	dms->MM = 60 * (degreeDecimal - dms->DD);
	dms->SS = 60 * (dms->MM - (int)dms->MM);

    dms->DD = (int)dms->DD;
	dms->MM = (int)dms->MM;
	dms->SS = (int)dms->SS;

}
void gpsCalculation::getCrossTrackDistance(gpsCalculation::DisABearStruct currentPointDisBer,  double curPoiber, double *ctd)
{
    double angulerDistance = currentPointDisBer.distance / rEarth;
    *ctd = asin (  sin(angulerDistance) * sin (currentPointDisBer.bearing - curPoiber) ) * rEarth;
}

void gpsCalculation::setLocation(cordinates *loc, double lati, double longi)
{
    loc->latitude  =  lati;
    loc->longitude =  longi;
}

void gpsCalculation::getXYcordinate(DisABearStruct disBearCor1, double *xCor, double *yCor)
{
    double slope = tan (   deg2rad(disBearCor1.bearing)   );
    *xCor =   sqrt( pow (disBearCor1.distance, 2) / (1 + pow(slope, 2) ) );
    *yCor = slope * (*xCor);
    if(disBearCor1.bearing > 90 && disBearCor1.bearing <= 270)
    {
        *xCor *= -1;
        *yCor *= -1;
    }


}
