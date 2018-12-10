#include "car.h"
#include <stdbool.h>

struct CarImplementation{
  int speed;
  int max_speed;
  enum Color color;
  enum Type type;
  double fill_level;
  double acceleration_rate;
  double lowest_acceleration_rate;
  double highest_acceleration_rate;
  bool is_available;

};

struct CarImplementation aixam{0,45,RED,AIXAM,16.0,0.0,-8.0,1.0,true};
struct CarImplementation jeep1{0,196,SILVER,JEEP,80.0,0.0,-8.0,3.14,true};
struct CarImplementation jeep2{0,196,BLACK,JEEP,80.0,0.0,-8.0,3.14,true};
struct CarImplementation fiat_multipla1{0,170,GREEN,FIAT_MULTIPLA,65.0,0.0,-8.0,2.26,true};
struct CarImplementation fiat_multipla2{0,170,BLUE,FIAT_MULTIPLA,65.0,0.0,-8.0,2.26,true};
struct CarImplementation fiat_multipla3{0,170,ORANGE,FIAT_MULTIPLA,65.0,0.0,-8.0,2.26,true};

Car car_park[6] = {&aixam, &jeep1, &jeep2, &fiat_multipla1, &fiat_multipla2, &fiat_multipla3};
Car get_car(enum Type type){
  for (int i = 0; i < 6; i++) {
    if (car_park[i]->type==type&&car_park[i]->is_available==true) {
      car_park[i]->is_available = false;
      return car_park[i];
    }
  }
  return 0;
}
void set_acceleration_rate(Car car,double acceleration_rate){
  if (acceleration_rate > car->highest_acceleration_rate) {
    car->acceleration_rate = acceleration_rate;
  }
  else if (acceleration_rate < car->lowest_acceleration_rate) {
    car->acceleration_rate = acceleration_rate;
  }
  else{
    car->acceleration_rate = acceleration_rate;
  }
}
int get_speed(Car car){
  return car->speed;
}
enum Color get_color(Car car){
  return car->color;
}
double get_fill_level(Car car){
  return car->fill_level;
}
enum Type get_type(Car car){
  return car->type;
}
void init(){
  for (int i = 0; i < 6; i++) {
    car_park[i]->acceleration_rate = 0;
    car_park[i]->is_available = true;
    car_park[i]->speed = 0;

  }
}
double get_acceleration_rate(Car car){
  return car->acceleration_rate;
}
void accelerate(Car car){
  double speed = car->acceleration_rate * 3.6;
  if (car->max_speed >= speed + car->speed) {
    car->speed += speed;
  }
  else{
    car->speed = car->max_speed;
  }

}
