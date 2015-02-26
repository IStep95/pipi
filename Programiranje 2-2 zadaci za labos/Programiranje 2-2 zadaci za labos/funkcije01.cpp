#include "funkcije01.h"
#include <math.h>
#define PI 3.141592
#define R 6371
double stupnjeviURadijane(double x){
	double y;
	y =  x * PI / 180.;
	return y;

}
double izracunajUdaljenost(double lat1, double lat2, double long1, double long2){
	double a,d;
	a = pow((sin((lat2 - lat1) / 2.)), 2) + cos(lat1) * cos(lat2) * pow((sin((long2 - long1) / 2.)), 2) ;
	d = R * 2 * atan2(sqrt(a), sqrt(1 - a));


	return d;
}