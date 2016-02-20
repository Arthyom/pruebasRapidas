# include <iostream>
# include <stdlib.h>
  using namespace std;

  typedef struct {
    int   numero;
    char  *nombre;
  }persona;

  int main(int argc, char const *argv[]) {
    /* C++ la mejora de c, contiene una cantidad inumerable de
      capacidades, sin embargo mantiene la escencia tradicional
      del viejo C */

      int a = 0 , b = 5;
      cout << a << " + " << b <<" "<< a+b;

      /* c++ incorpora la tipicas variables de C, sin embargo existen
        ahora entidades que podra significar mas que una simple variable */
      float  f;
      long   l;
      double d;
      char   c[] = "hola";
      bool   o;

      /* C++ conserva los mismo opeadores y estructuras de control que C++ */
      /* C y C++ son compatibles al grado de poder crear estructuras en C++*/
      /* las estructura de creacion o reservado de memoria tambine son compatibles
        llegando a poder usar malloc dentro de C++ */

      int * numero = (int*) malloc ( sizeof(int ) );

      int *numero2 = new int ();


    return 0;
  }
