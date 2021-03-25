/**
 * @file circles.h
 * @author bgv (bgv@bgv.com)
 * @brief This contains some useful functions regarding circles like area, perimeter, etc.
 * @version 0.1
 * @date 2021-03-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef CIRCLES_H
#define CIRCLES_H


/**
 * @brief This function returns diameter given the radius of a circle.
 * If 'r' is the radius of the circle then it returns diameter 'd' ( d = 2 * r ).
 * @param _radius Radius of the circle (positive real number)
 * @return float Returns the diameter 'd' ( d = 2 * r ).
 */
float diameter_of_circle(float _radius);


/**
 * @brief This function returns radius given the diameter of a circle.
 * If 'd' is the diameter of the circle then it returns radius 'r' ( r = d / 2 ).
 * @param _diameter Diameter of the circle (positive real number)
 * @return float Returns the radius 'r' ( r =  d / 2 ).
 */
float radius_of_circle(float _diameter);


/**
 * @brief This func. returns perimeter of the circle given its radius.
 * If 'r' is the radius then it returns perimeter 'p' (p = 2 * pi * r) .
 * @param _radius Radius of the circle (positive real number)
 * @return float Returns perimeter 'p' (p = 2 * pi * r).
 */
float perimeter_of_circle(float _radius);


/**
 * @brief This func. returns area of the circle given its radius.
 * If 'r' is the radius of the circle then it returns area 'a' ( a = pi * r * r ).
 * @param _radius Radius of the circle (positive real number)
 * @return float Returns area 'a' ( a = pi * r * r ).
 */
float area_of_circle(float _radius);

#endif /* CIRCLES_H */