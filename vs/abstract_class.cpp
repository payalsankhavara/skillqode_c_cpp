#include<iostream>
using namespace std;
class Shape         //abstract class
{
    protected:
        int width;
        int height;
    public:
        virtual int getArea() =0;   //pure virtual function (abstract)
        //fflush(stdin);
        void setwidth(int w)
        {
            width = w;

        }
        void setheight(int h)
        {
            height=h;
        }
};
class Rectangle : public Shape
{
    public:
        int getArea()
        {
            return(width*height);
        }
};
class Triangle : public Shape
{
    public:
        int getArea()
        {
            return (width * height)/2;
        }
};
int main()
{
    Rectangle Rect;
    Triangle Tri;
    Rect.setwidth(5);
    Rect.setheight(7);

    cout<<"Total Rectangle area:"<<Rect.getArea()<<endl;
    Tri.setwidth(5);
    Tri.setheight(7);
    cout<<"Total Triangle area:"<<Tri.getArea()<<endl;
    return 0;
}
