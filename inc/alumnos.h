/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

//! Tipo de dato para almacenar los datos del alumno 
typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

extern const alumno_t ALUMNOS[];

extern const int CANTIDAD_ALUMNOS;

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
    *   @brief  Funcion para mostrar en pantalla los datos personales del alumno  
    *  
    * 	@param[in]  cadena      Referencia a un objeto que contiene los datos personales del alumno
    *	
    *   @param[in]  espacio     Referencia que  indica la cantidad de datos del alumno
    *
    *   
    *   @param[in]  alumno      Referencia al alumno 
    *
    *   @return         True            El procedimiento se completo sin errores
    *
    *   @return         False           El  procedimiento detecto un error
    *	
*/
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);


bool AlejandroPermingeat(char * cadena, size_t espacio);

bool EstebanVolentini(char * cadena, size_t espacio);

bool FedericoPacher(char * cadena, size_t espacio);

/**
    *   @brief  Funcion para mostrar en pantalla los datos personales del la lista de alumnos  
    *  
    *   @param[in]  cadena      Referencia a un objeto que contiene los datos personales del alumno
    *
    *   @param[in]  espacio     Referencia que  indica la cantidad de datos del alumno
    *
    *   @param[in]  alumnos[]   Referencia al listado de alumnos 
    *
    *   @param[in]  cantidad    Referencia que indica la cantidad de alumnos a mostrar en pantalla
    *
    *   @return         True            El procedimiento se completo sin errores
    *
    *   @return         False           El  procedimiento detecto un error
*/
bool SerializarAlumnos(char * cadena, size_t espacio, const alumno_t alumnos[], int cantidad);


/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
