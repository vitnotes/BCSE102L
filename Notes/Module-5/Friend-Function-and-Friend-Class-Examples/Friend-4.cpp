#include<iostream>
#include<conio.h>
using namespace std;
class Humidity;
 
class Temperature  {
private:
    float temp;
public:
    Temperature(float temp=0) { 
                      this->temp = temp; }
     friend void printWeather(Temperature &temperature, Humidity &humidity);
};
 
class Humidity {
private:
    int humidity;
public:
    Humidity(int humidity=0) { this->humidity = humidity; }
    friend void printWeather(Temperature &temperature, Humidity &humidity);
};

void printWeather(Temperature &temperature, Humidity &humidity)
{
    cout << "The temperature is " << temperature.temp <<
        " and the humidity is " << humidity.humidity << endl;
}

int main() {
    Temperature t(45.45);
    Humidity h(36);
    printWeather(t,h);
    getch();  
    return 0;
}


