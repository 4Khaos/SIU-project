#ifndef __SIU__H__
#define __SIU__H__

#include <string>
#include <list>
#include "Asignatura.h"

class SIU
{
  public:
    int cargar_info_asign (string file);
    int cargar_info_est (string file);
    int horario_est (int IdEst);
    void salir ();

    void add_estudiante ( );
    void add_asignatura ( );
  protected:
    typedef std::list < Asignatura > listaAsignaturas;
    typedef std::list < Estudiante > listaEstudiantes;
};

#endif // __SIU__H__
