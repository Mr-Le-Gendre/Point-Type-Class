#ifndef POINTTYPE_H
#define POINTTYPE_H

#include <cmath>

// Template class for PointType
template <typename T>
class PointType {
private:
    T x, y;  // X and Y coordinates

public:
    // Constructors
    PointType();  // Default constructor
    PointType(T xCoord, T yCoord);  // Parameterized constructor

    // Setters
    void setX(T xCoord);
    void setY(T yCoord);

    // Getters
    T getX() const;
    T getY() const;

    // Function to calculate distance
    T distance(const PointType<T>& other) const;

    // Overload the subtraction operator to return distance
    T operator-(const PointType<T>& other) const;
};

// Template implementation must be in the same file as the declaration for templates

// Default constructor
template <typename T>
PointType<T>::PointType() : x(0), y(0) {}

// Parameterized constructor
template <typename T>
PointType<T>::PointType(T xCoord, T yCoord) : x(xCoord), y(yCoord) {}

// Setters
template <typename T>
void PointType<T>::setX(T xCoord) { x = xCoord; }

template <typename T>
void PointType<T>::setY(T yCoord) { y = yCoord; }

// Getters
template <typename T>
T PointType<T>::getX() const { return x; }

template <typename T>
T PointType<T>::getY() const { return y; }

// Distance function
template <typename T>
T PointType<T>::distance(const PointType<T>& other) const {
    T xDiff = x - other.x;
    T yDiff = y - other.y;
    return static_cast<T>(std::sqrt(xDiff * xDiff + yDiff * yDiff));
}

// Overloaded subtraction operator
template <typename T>
T PointType<T>::operator-(const PointType<T>& other) const {
    return distance(other);
}

#endif