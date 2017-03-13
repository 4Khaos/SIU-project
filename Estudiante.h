#ifndef __ESTUDIANTE__H__
#define __ESTUDIANTE__H__

#include <string>
#include <list>



class Estudiante
{
  public:
    Estudiante( );
    virtual ~Estudiante( );

    const std::string& GetCicloLectivo( ) const;
    const std::string& GetNombre( ) const;
    const std::string& GetApellido( ) const;
    const std::string& GetGradoAcademico( ) const;
    const std::string& GetGrado( ) const;
    const std::string& GetCdProgAcadBase( ) const;
    const std::string& GetNombreActualProgAcad( ) const;

    void SetCicloLectivo( const std::string& cicloLectivo );
    void SetNombre( const std::string& nombre );
    void SetApellido( const std::string& apellido );
    void SetGradoAcademico( const std::string& gradoAcademico );
    void SetGrado( const std::string& grado );
    void SetCdProgAcadBase( const std::string& cdProgAcadBase );
    void SetNombreActualProgAcad( const std::string& nombreActualProgAcad );

  protected:
    std::list < string > listaClase;
  protected:
    std::string cicloLectivo;
    std::string nombre;
    std::string apellido;
    std::string gradoAcademico;
    std::string grado;
    std::string cdProgAcadBase;
    std::string nombreActualProgAcad;


};

#endif // __ESTUDIANTE__H__
