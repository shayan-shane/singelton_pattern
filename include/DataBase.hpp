#ifndef __DATABASE_HPP__
#define __DATABASE_HPP__

#inclede <vector>

class DataBase
{
private:
    static DataBase *db;
    DataBase();

    vector<double> speed{0.0, 0.0, 0.0};
    double steer{0.0};

public:
    static DataBase *get_instance();

    void set_speed(const vector<double> &new_speed);
    double get_speed();
    void set_steer(const double &new_steer);
    double get_steer();
};

#endif
