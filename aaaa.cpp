#include <iostream>
using namespace std;
class Clock
{
public:
    Clock(int newH, int newM, int newS); //构造函数
    void setTime(int newH, int newM, int newS);
    void showTime();

private:
    int hour, minute, second;
};

Clock::Clock(int newH, int newM, int newS)
{
    hour = newH;
    minute = newM;
    second = newS;
}
inline void Clock::showTime() { cout << hour << ":" << minute << ":" << second << endl; }

int main()
{
    Clock c(12, 10, 16); 
    c.showTime();     
    
    return 0;
}