#ifndef __ASIGNATURA__H__
#define __ASIGNATURA__H__

#include <string>
#include <list>
#include "Clase.h"

class Asignatura
{
  public:
    Asignatura( );
    virtual ~Asignatura( );


    const std::string& GetIdCurso( ) const;
    const std::string& GetNombreAsignatura( ) const;
    const std::string& GetCclLvo( ) const;
    const std::string& GetGrado( ) const;
    const std::string& GetOrgAcad( ) const;
    const std::string& GetDescrFmal( ) const;
    const std::string& GetCatalogo( ) const;
    const std::string& GetSesion( ) const;
    const std::string& GetComponente( ) const;
    const std::string& GetDescripcion( ) const;

    void SetIdCurso( const std::string& idCurso );
    void SetNombreAsignatura( const std::string& nombreAsignatura );
    void SetCclLvo( const std::string& cclLvo );
    void SetGrado( const std::string& grado );
    void SetOrgAcad( const std::string& orgAcad );
    void SetDescrFmal( const std::string& descrFmal );
    void SetCatalogo( const std::string& catalogo );
    void SetSesion( const std::string& sesion );
    void SetComponente( const std::string& componente );
    void SetDescripcion( const std::string& descripcion );

    void add_clase( );
  protected:
    typedef std::list < Clase > listaClase;
  protected:
    std::string idCurso;
    std::string nombreAsignatura;
    std::string cclLvo;
    std::string grado;
    std::string orgAcad;
    std::string descrFmal;
    std::string catalogo;
    std::string sesion;
    std::string componente;
    std::string descripcion;

};

#include "Asignatura.hxx"
#endif // __ASIGNATURA__H__

