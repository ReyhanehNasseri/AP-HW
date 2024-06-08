#include<iostream>
using namespace std;
class shapes {
    public:
    string name;
    double VolumeCube(double x , double y , double z){
        return x * y * z;
    }

    double VolumeCylinder(double r, double h ){
        return (r*r*3.14) * h ;
    }

    double VolumeCicularPyramid(double r , double h ){
        return ((r*r*3.14) * h)/3 ;
    }

     double VolumeSquarePyramid(double a , double h ){
        return ((a*a) * h)/3 ;
    }


};

int main(){
    shapes pyramid1;
    cout<<pyramid1.VolumeCicularPyramid(2,3)<<endl;

  return 0;  
}