#include "../include/DataBase.hpp"

DataBase *DataBase::db = nullptr;

DataBase *DataBase::get_instance()
{
    if (db == nullptr)
    {
        db = new DataBase();
        return db;
    }
    return db;
}
