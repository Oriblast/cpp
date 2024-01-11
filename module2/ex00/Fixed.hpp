 #ifndef DEF_FIXED
 #define DEF_FIXED

 #include <iostream>
 #include <string>

 class Fixed {
   public:
   Fixed();
   ~Fixed();
   Fixed(Fixed const &copie);
   Fixed &operator=(Fixed const &copie);
   int getRawBits( void ) const;
   void setRawBits( int const raw );

   private:
   int _fixed_point;
   static int const _fractional_bits;
 };

 #endif