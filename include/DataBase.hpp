#ifndef __DATABASE_HPP__
#define __DATABASE_HPP__

class DataBase
{
private:
    static DataBase *db;
    DataBase();

public:
    static DataBase *get_instance();
};

#endif