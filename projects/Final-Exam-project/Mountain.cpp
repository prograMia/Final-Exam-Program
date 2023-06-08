#include "Mountain.h"

Mountain::Mountain() {
  
}
Mountain:: Mountain(const std::string& name, const std:: string& country, int elevation) {
  this->name = name;
  this->country = country;
  this->elevation = elevation;
}

void Mountain::setName(const std::string& name) {
  this->name = name;
}

std::string Mountain::getName() const {
  return name;
}

void Mountain::setCountry(const std::string& country) {
  this->country = country;
}

std::string Mountain::getCountry() const{
  return country;
}

void Mountain::setElevation(int elevation) {
  this->elevation = elevation;
}

int Mountain::getElevation() const {
  return elevation;
}