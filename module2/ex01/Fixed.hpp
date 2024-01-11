 #ifndef DEF_FIXED
 #define DEF_FIXED

 #include <iostream>
 #include <string>
 #include <cmath>

 class Fixed {
   public:
   Fixed();
   ~Fixed();
   Fixed(int const nbi);
   Fixed(float const nbf);
   Fixed(Fixed const &copie);
   Fixed &operator=(Fixed const &copie);
   
   int getRawBits( void ) const;
   void setRawBits( int const raw );
   float toFloat( void ) const;
   int toInt( void ) const;
   
   bool operator==(Fixed const &fix) const;
   bool operator<(Fixed const &fix) const;
   bool operator>(Fixed const &fix) const;
   bool operator<=(Fixed const &fix) const;
   bool operator>=(Fixed const &fix) const;
   bool operator!=(Fixed const &fix) const;

   private:
   int _fixed_point;
   static int const _fractional_bits;
 };

std::ostream    &operator<<(std::ostream &new_out, Fixed const &fixed);

 #endif