#ifndef SENSOR_H
#define SENSOR_H
#include <QString>

class Sensor{
    QString id;
    QString place;
    double distance;

public:
    Sensor(QString i, QString p): id(i), place(p), distance(0.0) {}

    QString getID() const {return id;}
    QString getPlace() const {return place;}
    double getDistance() const {return distance;}

    void setID(QString i) {id = i;}
    void setPlace(QString p) {place = p;}
    void setDistance(double d) {distance = d;}
};

#endif // SENSOR_H
