#pragma once

    enum class states{
    idle, behind, perpendicular, facing
    };

   //position vector
   class position{

     public:
     int x;
     int y;
     int z;

      void modify_x(int a);
      void modify_y(int b);
      void modify_z(int c);

      int effect(int degree);
      void process_effect(int constant);
   };

   class matrix{

     public:
      /*overloaded * operator for multiplying
      between position and matrix
 */
      position operator*(const position& other)const;

      /*overloaded * operator for multiplying
      between matrix and matrix
*/

      matrix move_on_x_axis(float theta);
      matrix move_on_y_axis(float theta);
      matrix move_on_z_axis(float theta);

      matrix operator*(const matrix& other)const;

     struct axis{
      float x;
      float y;
      float z;

   };

      void modify_axisX(int m, int n, int o);
      void modify_axisY(int j, int k, int l);
      void modify_axisZ(int p, int q, int r);

   axis x_axis;
   axis y_axis;
   axis z_axis;

   };