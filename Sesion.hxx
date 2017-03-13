#ifndef __SESION__HXX__
#define __SESION__HXX__

#include <string>

//---------------------------------------------------

Sesion::
Sesion ( )
  :  horaInicioClase ( "" ),
     horaFinaClase ( "" ),
     seccion ( "" ),
     dia ( "" ),
     instalacion ( "" )
{
}

//---------------------------------------------------

Sesion::
~Sesion ( )
{
}

//---------------------------------------------------

const std::string& Sesion::
GetHoraInicioClase ( ) const
{
    return ( this->horaInicioClase );
}

//---------------------------------------------------

const std::string& Sesion::
GetHoraFinClse ( ) const
{
    return ( this->horaFinClase );
}

//---------------------------------------------------

const std::string& Sesion::
GetSeccion ( ) const
{
    return ( this->seccion );
}

//---------------------------------------------------

const std::string& Sesion::
GetDia ( ) const
{
    return ( this->dia );
}

//---------------------------------------------------

const std::string& Sesion::
GetIdInstalacion ( ) const
{
    return ( this->idInstalacion );
}

//---------------------------------------------------

void Sesion::
SetSesion ( const std::string& horaInicioClase )
{
    this->horaInicioClase = horaInicioClase;
}

//---------------------------------------------------

void Sesion::
SetHoraFinClase ( const std::string& horaFinClase )
{
    this->horaFinClase = horaFinClase;
}

//---------------------------------------------------

void Sesion::
SetSeccion ( const std:string& seccion )
{
    this->seccion = seccion;
}

//---------------------------------------------------

void Sesion::
SetDia ( const std::string& dia )
{
    this->dia = dia;
}

//---------------------------------------------------

void Sesion::
SetIdInstalacion ( const std::string idInstalacion )
{
    this->idInstalacion = idInstalacion;
}
//eof - Asignatura.h
