/********************************************************************
    Blessing Alagba
    v223e376
    Program 2
*/


#include <iostream>
#include "odometer.hpp"

using namespace std;

int main()
{
  //declaring object
  Odometer simulation;
  Odometer simulation_two(50,5), simulation_three(10,2);

 //Testing our data:
    cout << "Testing First: " << endl;
    cout << simulation.get_fuel_efficiency() << endl;
    cout << simulation.get_miles_driven() << endl;
    cout << simulation.get_number_of_gallons() << endl;

    cout << "Resetting data: " << endl;
    simulation.reset_odometer();
    cout << simulation.get_fuel_efficiency() << endl;
    cout << simulation.get_miles_driven() << endl;
    cout << simulation.get_number_of_gallons() << endl;

    cout << "Testing Second: " << endl;
    cout << simulation_two.get_fuel_efficiency() << endl;
    cout << simulation_two.get_miles_driven() << endl;
    cout << simulation_two.get_number_of_gallons() << endl;

    cout << "Resetting data: " << endl;
    simulation_two.reset_odometer();
    cout << simulation_two.get_fuel_efficiency() << endl;
    cout << simulation_two.get_miles_driven() << endl;
    cout << simulation_two.get_number_of_gallons() << endl;

    cout << "Testing Third: " << endl;
    cout << simulation_three.get_fuel_efficiency() << endl;
    cout << simulation_three.get_miles_driven() << endl;
    cout << simulation_three.get_number_of_gallons() << endl;

    cout << "Testing add trip" << endl;
    simulation_three.add_trip(100,20);
    cout << simulation_three.get_fuel_efficiency() << endl;
    cout << simulation_three.get_miles_driven() << endl;
    cout << simulation_three.get_number_of_gallons() << endl;

    cout << "Resetting data: " << endl;
    simulation_three.reset_odometer();
    cout << simulation_three.get_fuel_efficiency() << endl;
    cout << simulation_three.get_miles_driven() << endl;
    cout << simulation_three.get_number_of_gallons() << endl;

    return 0;

}
