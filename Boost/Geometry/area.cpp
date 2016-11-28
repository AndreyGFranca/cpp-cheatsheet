#include <iostream>

#include <boost/geometry.hpp>
#include <boost/geometry/geometries/point_xy.hpp>
#include <boost/geometry/geometries/polygon.hpp>

namespace bg = boost::geometry; 

int main()
{
    // Calculate the area of a cartesian polygon
    bg::model::polygon<bg::model::d2::point_xy<double> > poly;
    bg::read_wkt("POLYGON((0 0,0 7,4 2,2 0,0 0))", poly);
    double area = bg::area(poly);
    std::cout << "Area: " << area << std::endl;

    // Calculate the area of a spherical equatorial polygon
    bg::model::polygon<bg::model::point<float, 2, bg::cs::spherical_equatorial<bg::degree> > > sph_poly;
    bg::read_wkt("POLYGON((0 0,0 45,45 0,0 0))", sph_poly);
    area = bg::area(sph_poly);
    std::cout << "Area: " << area << std::endl;

    return 0;
}
