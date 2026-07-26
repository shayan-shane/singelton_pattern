#ifndef __DATABASE_HPP__
#define __DATABASE_HPP__

class DataBase
{
private:
    static DataBase *db;
    DataBase() = default;

public:
    DataBase *get_instance();
};

#endif