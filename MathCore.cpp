#include "mathcore.h"
#include <cmath>

     states s = states::idle;

     void position::modify_x(int a){
     position::x = a;
     }

     void position::modify_y(int b){
     position::y = b;
     }

     int position::effect(int degree){

     float radian = degree * 3.1415927 / 180;

     float magnitude_of_effect = cos(radian);

     return magnitude_of_effect;
     }

     void position::process_effect(int constant){

     if(constant == 1){
     s = states::behind;
     }

     else if(constant == 0){
     s = states::perpendicular;
     }

     else if(constant < 0){
     s = states::facing;
     }

     else{
     s = states::idle;
     }
     }


     position matrix::operator*(const position& other)const{
     position result;

     result.x = this->x_axis.x * other.x + this->x_axis.y * other.y + this->x_axis.z * other.z;
     result.y = this->y_axis.x * other.x + this->y_axis.y * other.y + this->y_axis.z * other.z;
     result.z = this->z_axis.x * other.x + this->z_axis.y * other.y + this->z_axis.z * other.z;
     return result;
     }


     matrix matrix::move_on_x_axis(float theta){
     float radian = theta * 3.1415927 / 180;
     matrix m;
     m.x_axis.x = cos(0);
     m.x_axis.y = sin(0);
     m.x_axis.z = sin(0);
     m.y_axis.x = sin(0);
     m.y_axis.y = cos(radian);
     m.y_axis.z = -sin(radian);
     m.z_axis.x = sin(0);
     m.z_axis.y = sin(radian);
     m.z_axis.z = cos(radian);
     return m;
     }

    matrix matrix::move_on_y_axis(float theta){
     float y_radian = theta * 3.1415927 / 180;
     matrix n;
     n.x_axis.x = cos(y_radian);
     n.x_axis.y = sin(0);
     n.x_axis.z = sin(y_radian);
     n.y_axis.x =  sin(0);
     n.y_axis.y = cos(0);
     n.y_axis.z = sin(0);
     n.z_axis.x = -sin(y_radian);
     n.z_axis.y = sin(0);
     n.z_axis.z = cos(y_radian);
     return n;
     }

    matrix matrix::move_on_z_axis(float theta){
     float z_radian = theta * 3.1415927 / 180;
     matrix o;
     o.x_axis.x = cos(z_radian);
     o.x_axis.y = -sin(z_radian);
     o.x_axis.z = sin(0);
     o.y_axis.x =  sin(z_radian);
     o.y_axis.y = cos(z_radian);
     o.y_axis.z = sin(0);
     o.z_axis.x = sin(0);
     o.z_axis.y = sin(0);
     o.z_axis.z = cos(0);
     return o;
     }

     matrix matrix::operator*(const matrix& other)const{
     matrix product;

     product.x_axis.x = this->x_axis.x * other.x_axis.x + this->x_axis.y * other.y_axis.x + this->x_axis.z * other.z_axis.x;
     product.x_axis.y = this->x_axis.x * other.x_axis.y + this->x_axis.y * other.y_axis.y + this->x_axis.z * other.z_axis.y;
     product.x_axis.z = this->x_axis.x * other.x_axis.z + this->x_axis.y * other.y_axis.z + this->x_axis.z * other.z_axis.z;
     product.y_axis.x = this->y_axis.x * other.x_axis.x + this->y_axis.y * other.y_axis.x + this->y_axis.z * other.z_axis.x;
     product.y_axis.y = this->y_axis.x * other.x_axis.y + this->y_axis.y * other.y_axis.y + this->y_axis.z * other.z_axis.y;
     product.y_axis.z = this->y_axis.x * other.x_axis.z + this->y_axis.y * other.y_axis.z + this->y_axis.z * other.z_axis.z;
     product.z_axis.x = this->z_axis.x * other.x_axis.x + this->z_axis.y * other.y_axis.x + this->z_axis.z * other.z_axis.x;
     product.z_axis.y = this->z_axis.x * other.x_axis.y + this->z_axis.y * other.y_axis.y + this->z_axis.z * other.z_axis.y;
     product.z_axis.z = this->z_axis.x * other.x_axis.z + this->z_axis.y * other.y_axis.z + this->z_axis.z * other.z_axis.z;


     return product;
    }

     void position::modify_z(int c){
     position::z = c;
     }


     void matrix::modify_axisX(int m, int n, int o){
     x_axis.x = m;
     x_axis.y = n;
     x_axis.z = o;
     }

    void matrix::modify_axisY(int j, int k, int l){
    y_axis.x = j;
    y_axis.y = k;
    y_axis.z = l;
    }

    void matrix::modify_axisZ(int p, int q, int r){
    z_axis.x = p;
    z_axis.y = q;
    z_axis.z = r;
    }