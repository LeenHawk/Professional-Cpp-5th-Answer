import std;
using namespace std;

class Point{
    private:
        double m_x,m_y,m_z;
    public:
        Point(double x,double y,double z):m_x(x),m_y(y),m_z(z){};
        double getX() const{
            return this->m_x;
        };
        double getY() const{
            return this->m_y;
        };
        double getZ() const{
            return this->m_z;
        };
};

void printPoint(const Point& point){
    std::cout<<std::format("The position of the Point is: x:{},y:{},z:{}.\n",point.getX(),point.getY(),point.getZ());
}

int main(){
    Point point(1,2,3);
    printPoint(point);
}