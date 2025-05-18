#ifndef HOUSE_H
#define HOUSE_H
#include "Sensor.h"
#include <QVector>

class House{
    QVector<Sensor> sensors;
    QString address;
    QString emailUK;

public:
    House(): sensors(), address(){};
    House(QVector<Sensor> s, QString a): sensors(s), address(a) {};

    QVector<Sensor>& getSensors() { return sensors; }
    const QVector<Sensor>& getSensors() const { return sensors; }
    QString getAddress() const {return address;}
    QString getEmailUK() const {return emailUK;}

    void setAddress(QString a) {address = a;}
    void setSensors(QVector<Sensor> s) {sensors = s;}
    void setEmailUK(QString e) {emailUK = e;}

    void addSensor(Sensor sensor) {sensors.append(sensor);}

    bool updateSensorDistance(const QString& sensorId, double distance) {
        for (Sensor& sensor : sensors) {
            if (sensor.getID() == sensorId) {
                sensor.setDistance(distance);
                return true;
            }
        }
        return false;
    }


};

#endif // HOUSE_H
