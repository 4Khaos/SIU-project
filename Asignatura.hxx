#ifndef __ASIGNATURA__H__
#define __ASIGNATURA__H__

#include <string>

//---------------------------------------------------
Aisgnatura::
Asignatura( )
  :  idCurso ( "" ),
     asignatura( "" ),
     cclLvo( "" ),
     grado ( "" ),
     orgAcad ( "" ),
     descrFmal ( "" ),
     catalogo ( "" ),
     sesion ( "" ),
     componente ( "" ),
     descripcion ( "" )
{
}

//---------------------------------------------------

Asignatura::
~Asignatura( )
{
}

//---------------------------------------------------

const std::string& Asignatura::
GetIdCurso( ) const
{
    return ( this->idCurso );
}

//---------------------------------------------------

const std::string& Asignatura::
GetNombreAsignatura( ) const
{
    return ( this->nombreAsignatura );
}

//---------------------------------------------------

const std::string& Asignatura::
GetCclLvo ( ) const
{
        return ( this->cclLvo );
}

//---------------------------------------------------

const std::string& Asignatura::
GetGrado ( ) const
{
    return ( this->grado );
}

//---------------------------------------------------

const std::string& Asignatura::
GetOrgAcad ( ) const
{
    return ( this->orgAcad );
}

//---------------------------------------------------

const std::string& Asignatura::
GetDescrFmal( ) const
{
    return ( this->descrFmal);
}

//---------------------------------------------------

const std::string& Asignatura::
GetCatalogo ( ) const
{
    return ( this->catalogo );
}

//---------------------------------------------------

const std::string& Asignatura::
GetSesion ( ) const
{
    return ( this->sesion);
}

//---------------------------------------------------

const std::string& Asignatura::
GetComponente ( ) const
{
    return ( this->componente );
}


//---------------------------------------------------

const std::string& Asignatura::
GetDescripcion ( ) const
{
    return ( this->descripcion );
}

//---------------------------------------------------

void Asignatura::
SetIdCurso( const std::string& idCurso )
{
    this->idCurso = idCurso;
}

//---------------------------------------------------

void Asignatura::
SetNombreAsignatura ( const std::string& nombreAsignatura )
{
    this->nombreAsignatura = nombreAsignatura;
}

//---------------------------------------------------

void Asignatura::
SetCclLvo ( const std::string& cclLvo )
{
    this->cclLvo = cclLvo;
}

//---------------------------------------------------

void Asignatura::
SetGrado ( const std::string& grado )
{
    this->grado = grado;
}

//---------------------------------------------------

void Asignatura::
SetOrgAcad ( const std::string& orgAcad )
{
    this->orgAcad = orgAcad;
}

//---------------------------------------------------

void Asignatura::
SetDescrFmal ( const std::string& descrFmal )
{
    this->orgAcad = orgAcad;
}

//---------------------------------------------------

void Asignatura::
SetCatalogo ( const std::string& catalogo )
{
    this->catalogo = catalogo;
}

//---------------------------------------------------

void Asignatura::
SetSesion ( const std::string& sesion )
{
    this->sesion = sesion;
}

//---------------------------------------------------

void Asignatura::
SetComponente ( const std::string& componente )
{
    this->componente = componente;
}

//---------------------------------------------------

void Asignatura::
SetDescripcion ( const std::string& descripcion )
{
    this->descripcion = descripcion;
}

//eof - Asignatura.h
