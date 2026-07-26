#include "../include/DataBase.hpp"
#include <iostream>

DataBase *DataBase::db = nullptr;

// instructor
DataBase::DataBase()
{
}

DataBase *DataBase::get_instance()
{
    if (db == nullptr)
    {
        db = new DataBase();
        return db;
    }
    return db;
}

void DataBase::set_speed(const vector<double> &new_speed)
{
    speed = new_speed;
}
double DataBase::get_speed()
{
    return speed;
}
void DataBase::set_steer(const double &new_steer)
{
    steer = new_steer;
}
double DataBase::get_steer()
{
    return steer;
}
