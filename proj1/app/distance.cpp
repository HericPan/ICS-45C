#include <cmath>
#include "distance.hpp"

#define PI 3.14159265

inline double DegreeToRad(double degree)
{
    return degree*PI/180;
}

double LatitudeDiffByPole(const Location& l1, const Location& l2)
{
    if (l1.LatiPole == l2.LatiPole)
    {
        return fabs(l1.LatiDegree - l2.LatiDegree);
    } else {
        return l1.LatiDegree + l2.LatiDegree;
    }
}

double LongitudeDiffByPole(const Location& l1, const Location& l2)
{
    if (l1.LongPole == l2.LongPole)
    {
        return fabs(l1.LongDegree - l2.LongDegree);
    } else {
        return l1.LongDegree + l2.LongDegree;
    }
}

double calculateDistance(const Location& origin, Location& target)
{
    double lat1 = origin.LatiDegree;
    double lat2 = target.LatiDegree;
    // double lon1 = origin.LongDegree;
    // double lon2 = target.LongDegree;
    double dlat = LatitudeDiffByPole(origin, target);
    double dlon = LongitudeDiffByPole(origin,target);

    // start calculate the formulaes
    double a = pow(sin(DegreeToRad(dlat/2)), 2) 
        + cos(DegreeToRad(lat1))*cos(DegreeToRad(lat2))
            * pow(sin(DegreeToRad(dlon/2)) ,2);
    double c = 2 * atan2(sqrt(a), sqrt(1-a));

    const float R = 3959.9;
    double distance = R * c;

    target.distance = distance;

    return distance;
}


