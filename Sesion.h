#ifndef __SESION__H__
#define __SESION__H__

#include <string>

class Sesion
{
  public:
    Sesion( );
    virtual ~Sesion( );

    const std::string& GetHoraInicioClase( ) const;
    const std::string& GetHoraFinClase( ) const;
    const std::string& GetSeccion( ) const;
    const std::string& GetDia( ) const;
    const std::string& GetIdInstalacion( ) const;

    void SetHoraInicioClase( const std::string& cicloLectivo );
    void SetHoraFinClase( const std::string& cicloLectivo );
    void SetSeccion( const std::string& cicloLectivo );
    void SetDia( const std::string& cicloLectivo );
    void SetIdInstalacion( const std::string& cicloLectivo );

  protected:
    std::string horaInicioClase;
    std::string horaFinClase;
    std::string seccion;
    std::string dia;
    std::string idInstalacion;
};

#include "Sesion.hxx"
#endif // __SESION__H__
