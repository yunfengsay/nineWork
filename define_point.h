#if!defined(define_point_H)
#define define_point.h
#include <iostream>
#include <cmath>
using namespace std;

class Point{
	private:
		double X,Y; //横坐标、纵坐标作为私有变量
	public:
		Point(double=0,double=0); //构造函数
		Point(Point &); //复制的构造函数
	void Display() //显示坐标点
	{
		cout<<X<<","<<Y<<endl;
	}
	double Distance(Point &); //两点间距离的函数,参数是点类的引用，也可以用友元函数
	int getX()
　　{
　　　　return X; //得到横坐标的值
　　}

　　int getY()
　　{
　　　　return Y; //得到纵坐标的值
　　}

};
struct Cow //color和width,结构体,结构体内的变量是public的
{
　　int Color;
　　int Width;
};
class Line //定义线段类
{
　　private:
　		Point a,b; //线段类的私有数据成员是点类的对象
		Cow cw; //线段有颜色和宽度
　　public:
		Line(Point &,Point &,Cow &); //线段的构造函数,由两个点、颜色和宽度构成
　　	void Display();
　　	Line(Line &); //复制的构造函数
　　	double Distance(); //两点间的距离
　　	double Area(); //线段的面积
};
#endif

