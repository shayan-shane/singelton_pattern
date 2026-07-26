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

void DataBase::set_speed(const double &new_speed_x, const double &new_speed_y, const double &new_speed_z)
{
    speed.at(0) = new_speed_x;
    speed.at(1) = new_speed_y;
    speed.at(2) = new_speed_z;
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
