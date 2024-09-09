#include <iostream>
#include "PointType.h"

int main() {
    // Create PointType objects for integers
    PointType<int> p1(3, 4);
    PointType<int> p2(0, 0);

    // Create PointType objects for doubles
    PointType<double> p3(5.5, 7.2);
    PointType<double> p4(2.1, 3.8);

    // Print distance between integer points
    std::cout << "Distance between p1 and p2: " << p1 - p2 << std::endl;

    // Print distance between double points
    std::cout << "Distance between p3 and p4: " << p3 - p4 << std::endl;

    return 0;
}
