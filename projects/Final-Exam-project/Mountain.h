#ifndef MOUNTAIN_H
#define MOUNTAIN_H

#include <string>

class Mountain {
private:
    std::string name;
    std::string country;
    int elevation;

public:
    Mountain();
    Mountain(const std::string& name, const std::string& country, int elevation);

void setName(const std::string& name);
std::string getName() const;

void setCountry(const std::string& country);
std::string getCountry() const;

void setElevation(int elevation);
int getElevation() const;
};

#endif