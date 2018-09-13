/********************************************************************
    Blessing Alagba
    v223e376
    Program 2

    Description: This program mplements an odometer class it consists of the fuel and mileage
                 that is entered by the user and it calculates the miles driven and fuel
                 efficiency, it also resets the odometer back to zero.

    Pseudo code:-
        Class Name: Odometer
        Data:
         miles_driven - contains the miles driven
         number_of_gallons - contains the number of gallons
         fuel_efficiency - contains the fuel efficiency
        Mutator Functions:
         reset_odometer - it resets the odometer back to 0
         add_trip - it takes in the values of miles driven and fuel
        Accessor Functions:
         get_miles_driven - it returns the miles driven
         get_fuel_efficiency - it returns the fuel efficiency
         get_number_of_gallons - it retunrs the number of gallons
*/

class Odometer
{
  double miles_driven;
  double number_of_gallons;
  double fuel_efficiency;

public:
  //default constructor
  Odometer();

  //constructor
  Odometer(double Miles_driven, double Number_of_gallons);

  void reset_odometer();
  //accessor functions
  double get_fuel_efficiency();
  double get_miles_driven();
  double get_number_of_gallons();


  void add_trip(double Miles_driven, double Fuel);
};
