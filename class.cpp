#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int Task1();
int Task2();
int Task3();
int Task4();


class Town{

private:
  string name;
  int population;
  bool airport;

public:
  Town(string name, int population,bool airport){
    this->name = name;
    this->population = population;
    this->airport = airport;
  }

  string get_name(){
    return name;
  }

  int get_population(){
    return population;
  }

  bool get_value(){
    return airport;
  }

  void set_name(string new_name){
    name = new_name;
  }

  void set_population(int new_pop){
    population = new_pop;
  }

  void set_value(bool new_airport){
    airport = new_airport;
  }

  void display(){
  cout << " Name = " << get_name() << " population = " << get_population()
           << " Airport = " ;
           if (!airport) {
             cout << "FALSE" << '\n';
           }
           else{
             cout << "TRUE" << '\n';
           }

          }

};

class Point{
private:
  float x;
  float y;
public:
  Point(float x, float y){
    this->x = x;
    this->y = y;
  }
  Point(){
    this->x = 0;
    this->y = 0;
  }
  void SetXY (float new_x, float new_y){
    x = new_x;
    y = new_y;
  }
  float GetX(){
    return x;
  }
  float GetY(){
    return y;
  }
  void Move(float i, float j){
    i+=j;
  }
  void Display(){
    cout << "X = " << x << "Y = " << y << '\n';
  }

};

class Triangle{
public:
  float a,b,c;
  Triangle(float a, float b, float c){
    this->a = a;
    this->b = b;
    this->c = c;
  }
  Triangle(){
    this->a = 0;
    this->b = 0;
    this->c = 0;
  }

  void getArea(){
    float s, Area;
    s=(a+b+c)/2;
  	Area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout << "Area of the TRIANGLE is:-" << Area << '\n';
  }

};


int main(void) {

Task1();
Task2();
Task3();
Task4();

  return 0;
}



  int Task1(){
    
  }

  int Task2(){

  Town oslo("OSLO",1019000, true);
  Town bergen("BERGEN",275100,true);
  Town lillestrom("Lillesltrøm",14000,false);

  oslo.display();
  bergen.display();
  lillestrom.display();
}

int Task3(){
  int x, y, z , p, m , c;
  cout << " ENTER A VALUE FOR X1" << '\n';
  cin >> x;
  cout << " ENTER A VALUE FOR X2" << '\n';
  cin >> y;

  Point y1(x,y);

  cout << " ENTER A VALUE FOR Y1" << '\n';
  cin >> z;
  cout << " ENTER A VALUE FOR Y2" << '\n';
  cin >> p;

  Point y2(z,p);

  m = (y2.GetY()-y1.GetY() / y2.GetX()-y1.GetX());
  c = (y1.GetY() - ( m * y1.GetX()));

  cout << " Y = " << m << " X + " << c << '\n';

}

int Task4(){
  int q,w,e;
  cout << " ENTER A VALUE FOR A" << '\n';
  cin >> q;
  cout << " ENTER A VALUE FOR B" << '\n';
  cin >> w;
  cout << " ENTER A VALUE FOR C" << '\n';
  cin >> e;

  Triangle t(q,w,e);
  t.getArea();
}
