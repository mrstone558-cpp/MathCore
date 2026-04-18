#pragma once
 #include <cstdint>


  //position vector
   class position{

     public:
     int x;
     int y;
     int z;

      void modify_x(const int& a);
      void modify_y(const int& b);
      void modify_z(const int& c);


      float get_magnitude(float& a, position& p);
      position get_normalised_vector(const int& magnitude, position& k);

      position operator+(const position& other)const;
      int operator*(const position& other)const;

   };

    position cross_product(position& given, position& given2);

   class matrix{

     public:
      /*overloaded * operator for multiplying
      between position and matrix
 */
position operator*(const position& other)const;

      /*overloaded * operator for multiplying
      between matrix and matrix
*/
      matrix operator*(const matrix& other)const;
      matrix operator+(const matrix& other)const;
      matrix operator-(const matrix& other)const;

      matrix move_on_x_axis(const float& theta);
      matrix move_on_y_axis(const float& theta);
      matrix move_on_z_axis(const float& theta);


     struct axis{
      float x;
      float y;
      float z;

   };

      void modify_axisX(const int& m, const int& n, const int& o);
      void modify_axisY(const int& j, const int& k, const int& l);
      void modify_axisZ(const int& p, const int& q, const int& r);

   axis x_axis;
   axis y_axis;
   axis z_axis;

   };

   matrix matify(position& x);