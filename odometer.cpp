/********************************************************************
    Blessing Alagba
    v223e376
    Program 2
*/

#include "odometer.hpp"

    Odometer::Odometer()
        {
            miles_driven = 0;
            number_of_gallons = 0;
            fuel_efficiency = 0;
        }

    Odometer::Odometer(double Miles_driven, double Number_of_gallons)
        {
            miles_driven = Miles_driven;
            number_of_gallons = Number_of_gallons;
            fuel_efficiency = miles_driven/number_of_gallons;
        }
//mutator functions
    void Odometer::reset_odometer()
        {
            miles_driven = 0;
            number_of_gallons = 0;
            fuel_efficiency = 0;
        }

    double Odometer::get_fuel_efficiency()
        {
            return fuel_efficiency;
        }

    double Odometer::get_miles_driven()
        {
            return miles_driven;
        }

    double Odometer::get_number_of_gallons()
        {
            return number_of_gallons;
        }

//accessor functions
    void Odometer::add_trip(double Miles_driven, double Fuel)
        {
            miles_driven += Miles_driven;
            number_of_gallons += Fuel;
            fuel_efficiency = miles_driven/number_of_gallons;
        }
