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
