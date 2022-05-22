#include<string>
#include<cassert>
using namespace std::string_literals;
int main() {
    //bool
    assert(true);
   assert(false== not true);
   assert((true and true)==true);
   assert((true or false)==true);
   assert((false or false)==not true);

   //double
    assert(1.42<1.82);
    assert(4.53!=42.34);
    assert(2.62==1.31+1.31);
    assert(4.24-2.14==2.10);
    assert(4.50/1.50==3.0);
    assert(32.44>23.56);
  // unssigned
   assert(2u==1u*2u);
   assert(8u>2u);
   assert(321u!=3u*43u);
   assert(24u/2u==12);
   assert(3u<7u);
   //char

   assert('a'!='d');
   assert(65=='A');
   assert(65+32=='a');
   assert(65+1=='B');
   assert('d'+'q'==0xD5);
   assert('C'-'A'==2);
   assert('C'>'A');
   assert('A'<'a');

//string
   assert(10==std::string("hola q tal").length());
   assert(12=="hola a todos"s.length());

}
