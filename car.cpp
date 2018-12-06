#include "car.h"
#include <stdbool.h>


struct CarImplementation{
  int speed;
  enum Color color;
  enum Type type;
  double fill_level;
  double acceleration_rate;
  bool is_available;

};

static CarImplementation aixam{0,RED,AIXAM,16.0,0.0,true};
static CarImplementation jeep{0,RED,AIXAM,16.0,0.0,true};
static CarImplementation fiat_multipla{0,GREEN,AIXAM,65.0,0.0,true};

Car get_car(enum Type type){
  return 0;
}
void set_acceleration_rate(Car car,double acceleration_rate){

}
int get_speed(Car car){
  return 0;
}
enum Color get_color(Car car){
  return RED;
}
double get_fill_level(Car car){
  return 0;
}
enum Type get_type(Car car){
  return AIXAM;
}
void init(){

}
double get_acceleration_rate(Car car){
  return 0;
}
void accelerate(Car car){

}
