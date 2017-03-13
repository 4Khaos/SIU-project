#ifndef __CLASE__H__
#define __CLASE__H__

#include <string>
#include <list>
#include "Sesion.h"

class Clase
{
  public:
    Clase( );
    virtual ~Clase( );

    void add_sesion( );
  protected:
    typedef std::list <Sesion> TlistaSesion;
  protected:
    std::string nClase;
    std::string estadoClase; ///bool?
    std::string estadoInscripcion; ///bool?
    std::string fInicial;
    std::string fFinal;
    std::string capacidadAulaAsignada;
    std::string capacidadAualaSolicitada;
    std::string totalInscritos;

};

#endif // __CLASE__H__
