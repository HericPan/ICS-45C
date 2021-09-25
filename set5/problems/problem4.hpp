#ifndef PROBLEM4_HPP
#define PROBLEM4_HPP

class DynamicPair
{
public:
    DynamicPair();
    DynamicPair(const DynamicPair& d2);
    ~DynamicPair();
    DynamicPair& operator=(const DynamicPair& d2);
    int getInt();
    double getDouble();
    void setInt(const int& right);
    void setDouble(const double& right);
    
private:
    int *ivalue; // <=0 else 0
    double *dvalue; // >=3 else ==3

};

#endif