#if!defined(calc_H)
#define calc_H 
#include "define_point.h" //包含头函数
Point::Point(double a,double b) //定义构造函数，前面的头函数中仅仅声明了函数
{
　　X=a;
　　Y=b;
}
Point::Point(Point &a) //定义复制的构造函数
{
　　X=a.X;
　　Y=a.Y;
}
double Point::Distance(Point &a) //求两点间的距离
{
　　double dis;
　　dis=sqrt((X-a.X)*(X-a.X)+(Y-a.Y)*(Y-a.Y));
　　return dis;
}
Line::Line(Point &a1,Point &a2,Cow &a3):a(a1),b(a2),cw(a3) //给Line的私有变量初始化
{ //对象间的初始化，因此需要复制的构造函数
}
Line::Line(Line &s) //定义复制的构造函数
{
　　a=s.a;
　　b=s.b;
　　cw=s.cw;
}
void Line::Display() //显示线段
{
　　a.Display();
　　b.Display();
　　cout<<"Color="<<cw.Color<<","<<"width="<<cw.Width<<endl;
}
double Line::Distance()
{
　　double x,y;
　　x=a.getX()-b.getX();
　　y=a.getY()-b.getY();
　　return sqrt(x*x+y*y);
}
double Line::Area()
{
　　return cw.Width * Distance();
}
#endif
