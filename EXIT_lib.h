/**
 * \file EXTI_lib.h
 * \brief Librería hardware para el periférico EXTI del microcontrolador STM32L4+.
 * \details Esta cabecera declara las estructuras de datos, constantes, macros y
 * el mapeo de registros para el módulo EXTI (Extended Interrupt and Event Controller).
 * Las definiciones siguen una nomenclatura estándar para el acceso a registros de memoria mapeada.
 *
 * \author Luis Andrés Castillo Chicaiza
 * \version 1.0
 * \date 2025
 * \copyright Unlicensed
 *
 * La nomenclatura seguida es:
 *
 * ESTRUCTURA DE MODULO         ==>   s + MODULEname + [MODULEnumber]
 * REGISTRO MMIO                ==>   r + MODULEname + [MODULEnumber] + _ + REGISTERname + [REGISTERnumber]
 * BITFIELD O BIT DE REGISTRO   ==>   b + MODULEname + [MODULEnumber] + _ + BITFIELDname
 * CONSTANTES DE BITFIELD       ==>   k + MODULEname + _ + BITFIELDname + _ + CONSTANTname
 * MASCARAS DE REGISTRO         ==>   m + MODULEname + _ + REGISTERname + _ + BITFIELDname
 * TIPO DE REGISTRO             ==>   __ + MODULEname + _ + REGISTERname + _t
 * TIPO DE ESTRUCTURA           ==>   __ + MODULEname + _t
 *
 * La estructura del archivo es:
 *
 * 1. Definicion de registros
 * a. Tipos de datos
 * b. Mascaras
 * c. Constantes
 * 2. Definicion de estructura del modulo
 * a. Tipos
 * b. Mascaras
 * c. Macros de acceso
 * 3. Macros de acceso a registros
 * a. Acceso completo
 * b. Acceso a campos
 */

#ifndef EXTI_LIB_H_
#define EXTI_LIB_H_

#include <stdint.h>

/************************************************************************************************
 * 1. DEFINICION DE REGISTROS
 ************************************************************************************************/

/*================================== IMR1 ==================================*/
/* a. Tipos de datos */
/**
 * \brief  Estructura de datos para el registro IMR1 (Interrupt mask register 1).
 * \details Este registro permite enmascarar (desactivar) o no enmascarar (activar) la 
 * solicitud de interrupción para cada una de las líneas EXTI de 0 a 31.
 */
typedef union {
  uint32_t w; /*!< Acceso a la palabra completa de 32 bits del registro */

  struct{
    uint32_t IM0  : 1; /*!< Bit 0: Interrupt Mask on line 0 */
    uint32_t IM1  : 1; /*!< Bit 1: Interrupt Mask on line 1 */
    uint32_t IM2  : 1; /*!< Bit 2: Interrupt Mask on line 2 */
    uint32_t IM3  : 1; /*!< Bit 3: Interrupt Mask on line 3 */
    uint32_t IM4  : 1; /*!< Bit 4: Interrupt Mask on line 4 */
    uint32_t IM5  : 1; /*!< Bit 5: Interrupt Mask on line 5 */
    uint32_t IM6  : 1; /*!< Bit 6: Interrupt Mask on line 6 */
    uint32_t IM7  : 1; /*!< Bit 7: Interrupt Mask on line 7 */
    uint32_t IM8  : 1; /*!< Bit 8: Interrupt Mask on line 8 */
    uint32_t IM9  : 1; /*!< Bit 9: Interrupt Mask on line 9 */
    uint32_t IM10 : 1; /*!< Bit 10: Interrupt Mask on line 10 */
    uint32_t IM11 : 1; /*!< Bit 11: Interrupt Mask on line 11 */
    uint32_t IM12 : 1; /*!< Bit 12: Interrupt Mask on line 12 */
    uint32_t IM13 : 1; /*!< Bit 13: Interrupt Mask on line 13 */
    uint32_t IM14 : 1; /*!< Bit 14: Interrupt Mask on line 14 */
    uint32_t IM15 : 1; /*!< Bit 15: Interrupt Mask on line 15 */
    uint32_t IM16 : 1; /*!< Bit 16: Interrupt Mask on line 16 */
    uint32_t IM17 : 1; /*!< Bit 17: Interrupt Mask on line 17 */
    uint32_t IM18 : 1; /*!< Bit 18: Interrupt Mask on line 18 */
    uint32_t IM19 : 1; /*!< Bit 19: Interrupt Mask on line 19 */
    uint32_t IM20 : 1; /*!< Bit 20: Interrupt Mask on line 20 */
    uint32_t IM21 : 1; /*!< Bit 21: Interrupt Mask on line 21 */
    uint32_t IM22 : 1; /*!< Bit 22: Interrupt Mask on line 22 */
    uint32_t IM23 : 1; /*!< Bit 23: Interrupt Mask on line 23 */
    uint32_t IM24 : 1; /*!< Bit 24: Interrupt Mask on line 24 */
    uint32_t IM25 : 1; /*!< Bit 25: Interrupt Mask on line 25 */
    uint32_t IM26 : 1; /*!< Bit 26: Interrupt Mask on line 26 */
    uint32_t IM27 : 1; /*!< Bit 27: Interrupt Mask on line 27 */
    uint32_t IM28 : 1; /*!< Bit 28: Interrupt Mask on line 28 */
    uint32_t IM29 : 1; /*!< Bit 29: Interrupt Mask on line 29 */
    uint32_t IM30 : 1; /*!< Bit 30: Interrupt Mask on line 30 */
    uint32_t IM31 : 1; /*!< Bit 31: Interrupt Mask on line 31 */
  } b; /*!< Acceso a los campos de bits del registro */
} __EXTI_IMR1_t;

/* b. Mascaras */
/* MASCARAS DE REGISTRO: m + MODULEname + _ + REGISTERname + _ + BITFIELDname */
/* Mascaras para el registro EXTI_IMR1 */
#define mEXTI_IMR1_IM0        (1u << 0)
#define mEXTI_IMR1_IM1        (1u << 1)
#define mEXTI_IMR1_IM2        (1u << 2)
#define mEXTI_IMR1_IM3        (1u << 3)
#define mEXTI_IMR1_IM4        (1u << 4)
#define mEXTI_IMR1_IM5        (1u << 5)
#define mEXTI_IMR1_IM6        (1u << 6)
#define mEXTI_IMR1_IM7        (1u << 7)
#define mEXTI_IMR1_IM8        (1u << 8)
#define mEXTI_IMR1_IM9        (1u << 9)
#define mEXTI_IMR1_IM10       (1u << 10)
#define mEXTI_IMR1_IM11       (1u << 11)
#define mEXTI_IMR1_IM12       (1u << 12)
#define mEXTI_IMR1_IM13       (1u << 13)
#define mEXTI_IMR1_IM14       (1u << 14)
#define mEXTI_IMR1_IM15       (1u << 15)
#define mEXTI_IMR1_IM16       (1u << 16)
#define mEXTI_IMR1_IM17       (1u << 17)
#define mEXTI_IMR1_IM18       (1u << 18)
#define mEXTI_IMR1_IM19       (1u << 19)
#define mEXTI_IMR1_IM20       (1u << 20)
#define mEXTI_IMR1_IM21       (1u << 21)
#define mEXTI_IMR1_IM22       (1u << 22)
#define mEXTI_IMR1_IM23       (1u << 23)
#define mEXTI_IMR1_IM24       (1u << 24)
#define mEXTI_IMR1_IM25       (1u << 25)
#define mEXTI_IMR1_IM26       (1u << 26)
#define mEXTI_IMR1_IM27       (1u << 27)
#define mEXTI_IMR1_IM28       (1u << 28)
#define mEXTI_IMR1_IM29       (1u << 29)
#define mEXTI_IMR1_IM30       (1u << 30)
#define mEXTI_IMR1_IM31       (1u << 31)

/* c. Constantes */
/* Para los bits del registro IMR1, no se definen constantes.
 * Cada bit es una bandera simple donde '1' significa 'no enmascarado' (activo)
 * y '0' significa 'enmascarado' (inactivo). Usar 1 y 0 directamente
 * es más claro y estándar para este tipo de configuración.
 */


/*================================== EMR1 ==================================*/
 /* a. Tipos de datos */
/**
 * \brief  Estructura de datos para el registro EMR1 (Event mask register 1).
 * \details Este registro permite enmascarar (desactivar) o no enmascarar (activar)
 * la generación de EVENTOS para cada una de las líneas EXTI de 0 a 31.
 */
typedef union {
  uint32_t w; /*!< Acceso a la palabra completa de 32 bits del registro */

  struct{
    uint32_t EM0   : 1; /*!< Bit 0: Event Mask on line 0  */
    uint32_t EM1   : 1; /*!< Bit 1: Event Mask on line 1  */
    uint32_t EM2   : 1; /*!< Bit 2: Event Mask on line 2  */
    uint32_t EM3   : 1; /*!< Bit 3: Event Mask on line 3  */
    uint32_t EM4   : 1; /*!< Bit 4: Event Mask on line 4  */
    uint32_t EM5   : 1; /*!< Bit 5: Event Mask on line 5  */
    uint32_t EM6   : 1; /*!< Bit 6: Event Mask on line 6  */
    uint32_t EM7   : 1; /*!< Bit 7: Event Mask on line 7  */
    uint32_t EM8   : 1; /*!< Bit 8: Event Mask on line 8  */
    uint32_t EM9   : 1; /*!< Bit 9: Event Mask on line 9  */
    uint32_t EM10  : 1; /*!< Bit 10: Event Mask on line 10 */
    uint32_t EM11  : 1; /*!< Bit 11: Event Mask on line 11 */
    uint32_t EM12  : 1; /*!< Bit 12: Event Mask on line 12 */
    uint32_t EM13  : 1; /*!< Bit 13: Event Mask on line 13 */
    uint32_t EM14  : 1; /*!< Bit 14: Event Mask on line 14 */
    uint32_t EM15  : 1; /*!< Bit 15: Event Mask on line 15 */
    uint32_t EM16  : 1; /*!< Bit 16: Event Mask on line 16 */
    uint32_t EM17  : 1; /*!< Bit 17: Event Mask on line 17 */
    uint32_t EM18  : 1; /*!< Bit 18: Event Mask on line 18 */
    uint32_t EM19  : 1; /*!< Bit 19: Event Mask on line 19 */
    uint32_t EM20  : 1; /*!< Bit 20: Event Mask on line 20 */
    uint32_t EM21  : 1; /*!< Bit 21: Event Mask on line 21 */
    uint32_t EM22  : 1; /*!< Bit 22: Event Mask on line 22 */
    uint32_t EM23  : 1; /*!< Bit 23: Event Mask on line 23 */
    uint32_t EM24  : 1; /*!< Bit 24: Event Mask on line 24 */
    uint32_t EM25  : 1; /*!< Bit 25: Event Mask on line 25 */
    uint32_t EM26  : 1; /*!< Bit 26: Event Mask on line 26 */
    uint32_t EM27  : 1; /*!< Bit 27: Event Mask on line 27 */
    uint32_t EM28  : 1; /*!< Bit 28: Event Mask on line 28 */
    uint32_t EM29  : 1; /*!< Bit 29: Event Mask on line 29 */
    uint32_t EM30  : 1; /*!< Bit 30: Event Mask on line 30 */
    uint32_t EM31  : 1; /*!< Bit 31: Event Mask on line 31 */
  } b; /*!< Acceso a los campos de bits del registro */
} __EXTI_EMR1_t;

/* b. Mascaras */
/* MASCARAS DE REGISTRO: m + MODULEname + _ + REGISTERname + _ + BITFIELDname */
/* Mascaras para el registro EXTI_EMR1 */
#define mEXTI_EMR1_EM0        (1u << 0)
#define mEXTI_EMR1_EM1        (1u << 1)
#define mEXTI_EMR1_EM2        (1u << 2)
#define mEXTI_EMR1_EM3        (1u << 3)
#define mEXTI_EMR1_EM4        (1u << 4)
#define mEXTI_EMR1_EM5        (1u << 5)
#define mEXTI_EMR1_EM6        (1u << 6)
#define mEXTI_EMR1_EM7        (1u << 7)
#define mEXTI_EMR1_EM8        (1u << 8)
#define mEXTI_EMR1_EM9        (1u << 9)
#define mEXTI_EMR1_EM10       (1u << 10)
#define mEXTI_EMR1_EM11       (1u << 11)
#define mEXTI_EMR1_EM12       (1u << 12)
#define mEXTI_EMR1_EM13       (1u << 13)
#define mEXTI_EMR1_EM14       (1u << 14)
#define mEXTI_EMR1_EM15       (1u << 15)
#define mEXTI_EMR1_EM16       (1u << 16)
#define mEXTI_EMR1_EM17       (1u << 17)
#define mEXTI_EMR1_EM18       (1u << 18)
#define mEXTI_EMR1_EM19       (1u << 19)
#define mEXTI_EMR1_EM20       (1u << 20)
#define mEXTI_EMR1_EM21       (1u << 21)
#define mEXTI_EMR1_EM22       (1u << 22)
#define mEXTI_EMR1_EM23       (1u << 23)
#define mEXTI_EMR1_EM24       (1u << 24)
#define mEXTI_EMR1_EM25       (1u << 25)
#define mEXTI_EMR1_EM26       (1u << 26)
#define mEXTI_EMR1_EM27       (1u << 27)
#define mEXTI_EMR1_EM28       (1u << 28)
#define mEXTI_EMR1_EM29       (1u << 29)
#define mEXTI_EMR1_EM30       (1u << 30)
#define mEXTI_EMR1_EM31       (1u << 31)

/* c. Constantes */
/* Para los bits del registro EMR1, no se definen constantes.
 * Cada bit es una bandera simple donde '1' significa 'no enmascarado' (activo)
 * y '0' significa 'enmascarado' (inactivo). Usar 1 y 0 directamente
 * es más claro y estándar para este tipo de configuración.
 */


/*================================== RTSR1 ==================================*/
/* a. Tipos de datos */
/**
 * \brief  Estructura de datos para el registro RTSR1 (Rising trigger selection register 1).
 * \details Este registro configura si una línea EXTI generará una interrupción o evento 
 * al detectar un flanco de subida.
 */
typedef union{
  uint32_t w; /*!< Acceso a la palabra completa de 32 bits del registro */
  
  struct{
    uint32_t RT0        : 1; /*!< Bit 0: Rising trigger event configuration of line 0 */
    uint32_t RT1        : 1; /*!< Bit 1: Rising trigger event configuration of line 1 */
    uint32_t RT2        : 1; /*!< Bit 2: Rising trigger event configuration of line 2 */
    uint32_t RT3        : 1; /*!< Bit 3: Rising trigger event configuration of line 3 */
    uint32_t RT4        : 1; /*!< Bit 4: Rising trigger event configuration of line 4 */
    uint32_t RT5        : 1; /*!< Bit 5: Rising trigger event configuration of line 5 */
    uint32_t RT6        : 1; /*!< Bit 6: Rising trigger event configuration of line 6 */
    uint32_t RT7        : 1; /*!< Bit 7: Rising trigger event configuration of line 7 */
    uint32_t RT8        : 1; /*!< Bit 8: Rising trigger event configuration of line 8 */
    uint32_t RT9        : 1; /*!< Bit 9: Rising trigger event configuration of line 9 */
    uint32_t RT10       : 1; /*!< Bit 10: Rising trigger event configuration of line 10 */
    uint32_t RT11       : 1; /*!< Bit 11: Rising trigger event configuration of line 11 */
    uint32_t RT12       : 1; /*!< Bit 12: Rising trigger event configuration of line 12 */
    uint32_t RT13       : 1; /*!< Bit 13: Rising trigger event configuration of line 13 */
    uint32_t RT14       : 1; /*!< Bit 14: Rising trigger event configuration of line 14 */
    uint32_t RT15       : 1; /*!< Bit 15: Rising trigger event configuration of line 15 */
    uint32_t RT16       : 1; /*!< Bit 16: Rising trigger event configuration of line 16 */
    uint32_t reserved0  : 1; /*!< Bit 17: Reserved */
    uint32_t RT18       : 1; /*!< Bit 18: Rising trigger event configuration of line 18 */
    uint32_t RT19       : 1; /*!< Bit 19: Rising trigger event configuration of line 19 */
    uint32_t RT20       : 1; /*!< Bit 20: Rising trigger event configuration of line 20 */
    uint32_t RT21       : 1; /*!< Bit 21: Rising trigger event configuration of line 21 */
    uint32_t RT22       : 1; /*!< Bit 22: Rising trigger event configuration of line 22 */
    uint32_t reserved1  : 9; /*!< Bits 23-31: Reserved */
  } b; /*!< Acceso a los campos de bits del registro */
} __EXTI_RTSR1_t;

/* b. Mascaras */
#define mEXTI_RTSR1_RT0        (1u << 0)
#define mEXTI_RTSR1_RT1        (1u << 1)
#define mEXTI_RTSR1_RT2        (1u << 2)
#define mEXTI_RTSR1_RT3        (1u << 3)
#define mEXTI_RTSR1_RT4        (1u << 4)
#define mEXTI_RTSR1_RT5        (1u << 5)
#define mEXTI_RTSR1_RT6        (1u << 6)
#define mEXTI_RTSR1_RT7        (1u << 7)
#define mEXTI_RTSR1_RT8        (1u << 8)
#define mEXTI_RTSR1_RT9        (1u << 9)
#define mEXTI_RTSR1_RT10       (1u << 10)
#define mEXTI_RTSR1_RT11       (1u << 11)
#define mEXTI_RTSR1_RT12       (1u << 12)
#define mEXTI_RTSR1_RT13       (1u << 13)
#define mEXTI_RTSR1_RT14       (1u << 14)
#define mEXTI_RTSR1_RT15       (1u << 15)
#define mEXTI_RTSR1_RT16       (1u << 16)
#define mEXTI_RTSR1_RT18       (1u << 18)
#define mEXTI_RTSR1_RT19       (1u << 19)
#define mEXTI_RTSR1_RT20       (1u << 20)
#define mEXTI_RTSR1_RT21       (1u << 21)
#define mEXTI_RTSR1_RT22       (1u << 22)

/* c. Constantes */
/* Para los bits del registro RTSR1, no se definen constantes.
 * Cada bit es una bandera simple donde '1' significa 'flanco de subida activado'
 * y '0' significa 'desactivado'. Usar 1 y 0 directamente es más claro.
 */


/*================================== FTSR1 ==================================*/
/* a. Tipos de datos */
/**
 * \brief  Estructura de datos para el registro FTSR1 (Falling trigger selection register 1).
 * \details Este registro configura si una línea EXTI generará una interrupción o evento 
 * al detectar un flanco de bajada.
 */
typedef union{
  uint32_t w; /*!< Acceso a la palabra completa de 32 bits del registro */
  
  struct{
    uint32_t FT0       : 1; /*!< Bit 0: Falling trigger event configuration of line 0 */
    uint32_t FT1       : 1; /*!< Bit 1: Falling trigger event configuration of line 1 */
    uint32_t FT2       : 1; /*!< Bit 2: Falling trigger event configuration of line 2 */
    uint32_t FT3       : 1; /*!< Bit 3: Falling trigger event configuration of line 3 */
    uint32_t FT4       : 1; /*!< Bit 4: Falling trigger event configuration of line 4 */
    uint32_t FT5       : 1; /*!< Bit 5: Falling trigger event configuration of line 5 */
    uint32_t FT6       : 1; /*!< Bit 6: Falling trigger event configuration of line 6 */
    uint32_t FT7       : 1; /*!< Bit 7: Falling trigger event configuration of line 7 */
    uint32_t FT8       : 1; /*!< Bit 8: Falling trigger event configuration of line 8 */
    uint32_t FT9       : 1; /*!< Bit 9: Falling trigger event configuration of line 9 */
    uint32_t FT10      : 1; /*!< Bit 10: Falling trigger event configuration of line 10 */
    uint32_t FT11      : 1; /*!< Bit 11: Falling trigger event configuration of line 11 */
    uint32_t FT12      : 1; /*!< Bit 12: Falling trigger event configuration of line 12 */
    uint32_t FT13      : 1; /*!< Bit 13: Falling trigger event configuration of line 13 */
    uint32_t FT14      : 1; /*!< Bit 14: Falling trigger event configuration of line 14 */
    uint32_t FT15      : 1; /*!< Bit 15: Falling trigger event configuration of line 15 */
    uint32_t FT16      : 1; /*!< Bit 16: Falling trigger event configuration of line 16 */
    uint32_t reserved0 : 1; /*!< Bit 17: Reserved */
    uint32_t FT18      : 1; /*!< Bit 18: Falling trigger event configuration of line 18 */
    uint32_t FT19      : 1; /*!< Bit 19: Falling trigger event configuration of line 19 */
    uint32_t FT20      : 1; /*!< Bit 20: Falling trigger event configuration of line 20 */
    uint32_t FT21      : 1; /*!< Bit 21: Falling trigger event configuration of line 21 */
    uint32_t FT22      : 1; /*!< Bit 22: Falling trigger event configuration of line 22 */
    uint32_t reserved1 : 9; /*!< Bits 23-31: Reserved */
  } b; /*!< Acceso a los campos de bits del registro */
} __EXTI_FTSR1_t;

/* b. Mascaras */
#define mEXTI_FTSR1_FT0         (1u << 0)
#define mEXTI_FTSR1_FT1         (1u << 1)
#define mEXTI_FTSR1_FT2         (1u << 2)
#define mEXTI_FTSR1_FT3         (1u << 3)
#define mEXTI_FTSR1_FT4         (1u << 4)
#define mEXTI_FTSR1_FT5         (1u << 5)
#define mEXTI_FTSR1_FT6         (1u << 6)
#define mEXTI_FTSR1_FT7         (1u << 7)
#define mEXTI_FTSR1_FT8         (1u << 8)
#define mEXTI_FTSR1_FT9         (1u << 9)
#define mEXTI_FTSR1_FT10        (1u << 10)
#define mEXTI_FTSR1_FT11        (1u << 11)
#define mEXTI_FTSR1_FT12        (1u << 12)
#define mEXTI_FTSR1_FT13        (1u << 13)
#define mEXTI_FTSR1_FT14        (1u << 14)
#define mEXTI_FTSR1_FT15        (1u << 15)
#define mEXTI_FTSR1_FT16        (1u << 16)
#define mEXTI_FTSR1_FT18        (1u << 18)
#define mEXTI_FTSR1_FT19        (1u << 19)
#define mEXTI_FTSR1_FT20        (1u << 20)
#define mEXTI_FTSR1_FT21        (1u << 21)
#define mEXTI_FTSR1_FT22        (1u << 22)

/* c. Constantes */
/* Para los bits del registro FTSR1, no se definen constantes.
 * Cada bit es una bandera simple donde '1' significa 'flanco de bajada activado'
 * y '0' significa 'desactivado'. Usar 1 y 0 directamente es más claro.
 */


/*================================== SWIER1 ==================================*/
/* a. Tipos de datos */
/**
 * \brief  Estructura de datos para el registro SWIER1 (Software interrupt event register 1).
 * \details Permite generar una solicitud de interrupción o evento por software. Escribir un '1'
 * en un bit genera el evento en la línea correspondiente.
 */
typedef union{
  uint32_t w; /*!< Acceso a la palabra completa de 32 bits del registro */
  
  struct{
    uint32_t SWI0       : 1; /*!< Bit 0: Software interrupt on line 0 */
    uint32_t SWI1       : 1; /*!< Bit 1: Software interrupt on line 1 */
    uint32_t SWI2       : 1; /*!< Bit 2: Software interrupt on line 2 */
    uint32_t SWI3       : 1; /*!< Bit 3: Software interrupt on line 3 */
    uint32_t SWI4       : 1; /*!< Bit 4: Software interrupt on line 4 */
    uint32_t SWI5       : 1; /*!< Bit 5: Software interrupt on line 5 */
    uint32_t SWI6       : 1; /*!< Bit 6: Software interrupt on line 6 */
    uint32_t SWI7       : 1; /*!< Bit 7: Software interrupt on line 7 */
    uint32_t SWI8       : 1; /*!< Bit 8: Software interrupt on line 8 */
    uint32_t SWI9       : 1; /*!< Bit 9: Software interrupt on line 9 */
    uint32_t SWI10      : 1; /*!< Bit 10: Software interrupt on line 10 */
    uint32_t SWI11      : 1; /*!< Bit 11: Software interrupt on line 11 */
    uint32_t SWI12      : 1; /*!< Bit 12: Software interrupt on line 12 */
    uint32_t SWI13      : 1; /*!< Bit 13: Software interrupt on line 13 */
    uint32_t SWI14      : 1; /*!< Bit 14: Software interrupt on line 14 */
    uint32_t SWI15      : 1; /*!< Bit 15: Software interrupt on line 15 */
    uint32_t SWI16      : 1; /*!< Bit 16: Software interrupt on line 16 */
    uint32_t reserved0  : 1; /*!< Bit 17: Reserved */
    uint32_t SWI18      : 1; /*!< Bit 18: Software interrupt on line 18 */
    uint32_t SWI19      : 1; /*!< Bit 19: Software interrupt on line 19 */
    uint32_t SWI20      : 1; /*!< Bit 20: Software interrupt on line 20 */
    uint32_t SWI21      : 1; /*!< Bit 21: Software interrupt on line 21 */
    uint32_t SWI22      : 1; /*!< Bit 22: Software interrupt on line 22 */
    uint32_t reserved1  : 9; /*!< Bits 23-31: Reserved */
  } b; /*!< Acceso a los campos de bits del registro */
} __EXTI_SWIER1_t;

/* b. Mascaras */
#define mEXTI_SWIER1_SWI0        (1u << 0)
#define mEXTI_SWIER1_SWI1        (1u << 1)
#define mEXTI_SWIER1_SWI2        (1u << 2)
#define mEXTI_SWIER1_SWI3        (1u << 3)
#define mEXTI_SWIER1_SWI4        (1u << 4)
#define mEXTI_SWIER1_SWI5        (1u << 5)
#define mEXTI_SWIER1_SWI6        (1u << 6)
#define mEXTI_SWIER1_SWI7        (1u << 7)
#define mEXTI_SWIER1_SWI8        (1u << 8)
#define mEXTI_SWIER1_SWI9        (1u << 9)
#define mEXTI_SWIER1_SWI10       (1u << 10)
#define mEXTI_SWIER1_SWI11       (1u << 11)
#define mEXTI_SWIER1_SWI12       (1u << 12)
#define mEXTI_SWIER1_SWI13       (1u << 13)
#define mEXTI_SWIER1_SWI14       (1u << 14)
#define mEXTI_SWIER1_SWI15       (1u << 15)
#define mEXTI_SWIER1_SWI16       (1u << 16)
#define mEXTI_SWIER1_SWI18       (1u << 18)
#define mEXTI_SWIER1_SWI19       (1u << 19)
#define mEXTI_SWIER1_SWI20       (1u << 20)
#define mEXTI_SWIER1_SWI21       (1u << 21)
#define mEXTI_SWIER1_SWI22       (1u << 22)

/* c. Constantes */
/* Para los bits del registro SWIER1, no se definen constantes.
 * Escribir un '1' en un bit es una acción directa para generar una 
 * interrupción, no una configuración permanente.
 */

 
/*================================== PR1 ==================================*/
/* a. Tipos de datos */
/**
 * \brief  Estructura de datos para el registro PR1 (Pending register 1).
 * \details Indica si un evento de disparo ha ocurrido en una línea. Un bit se pone a '1'
 * por hardware cuando ocurre un evento. Se limpia escribiendo un '1' en el bit.
 */
typedef union{
  uint32_t w; /*!< Acceso a la palabra completa de 32 bits del registro */
  
  struct{
    uint32_t PIF0       : 1; /*!< Bit 0: Pending interrupt flag on line 0 */
    uint32_t PIF1       : 1; /*!< Bit 1: Pending interrupt flag on line 1 */
    uint32_t PIF2       : 1; /*!< Bit 2: Pending interrupt flag on line 2 */
    uint32_t PIF3       : 1; /*!< Bit 3: Pending interrupt flag on line 3 */
    uint32_t PIF4       : 1; /*!< Bit 4: Pending interrupt flag on line 4 */
    uint32_t PIF5       : 1; /*!< Bit 5: Pending interrupt flag on line 5 */
    uint32_t PIF6       : 1; /*!< Bit 6: Pending interrupt flag on line 6 */
    uint32_t PIF7       : 1; /*!< Bit 7: Pending interrupt flag on line 7 */
    uint32_t PIF8       : 1; /*!< Bit 8: Pending interrupt flag on line 8 */
    uint32_t PIF9       : 1; /*!< Bit 9: Pending interrupt flag on line 9 */
    uint32_t PIF10      : 1; /*!< Bit 10: Pending interrupt flag on line 10 */
    uint32_t PIF11      : 1; /*!< Bit 11: Pending interrupt flag on line 11 */
    uint32_t PIF12      : 1; /*!< Bit 12: Pending interrupt flag on line 12 */
    uint32_t PIF13      : 1; /*!< Bit 13: Pending interrupt flag on line 13 */
    uint32_t PIF14      : 1; /*!< Bit 14: Pending interrupt flag on line 14 */
    uint32_t PIF15      : 1; /*!< Bit 15: Pending interrupt flag on line 15 */
    uint32_t PIF16      : 1; /*!< Bit 16: Pending interrupt flag on line 16 */
    uint32_t reserved0  : 1; /*!< Bit 17: Reserved */
    uint32_t PIF18      : 1; /*!< Bit 18: Pending interrupt flag on line 18 */
    uint32_t PIF19      : 1; /*!< Bit 19: Pending interrupt flag on line 19 */
    uint32_t PIF20      : 1; /*!< Bit 20: Pending interrupt flag on line 20 */
    uint32_t PIF21      : 1; /*!< Bit 21: Pending interrupt flag on line 21 */
    uint32_t PIF22      : 1; /*!< Bit 22: Pending interrupt flag on line 22 */
    uint32_t reserved1  : 9; /*!< Bits 23-31: Reserved */
  } b; /*!< Acceso a los campos de bits del registro */
} __EXTI_PR1_t;

/* b. Mascaras */
#define mEXTI_PR1_PIF0        (1u << 0)
#define mEXTI_PR1_PIF1        (1u << 1)
#define mEXTI_PR1_PIF2        (1u << 2)
#define mEXTI_PR1_PIF3        (1u << 3)
#define mEXTI_PR1_PIF4        (1u << 4)
#define mEXTI_PR1_PIF5        (1u << 5)
#define mEXTI_PR1_PIF6        (1u << 6)
#define mEXTI_PR1_PIF7        (1u << 7)
#define mEXTI_PR1_PIF8        (1u << 8)
#define mEXTI_PR1_PIF9        (1u << 9)
#define mEXTI_PR1_PIF10       (1u << 10)
#define mEXTI_PR1_PIF11       (1u << 11)
#define mEXTI_PR1_PIF12       (1u << 12)
#define mEXTI_PR1_PIF13       (1u << 13)
#define mEXTI_PR1_PIF14       (1u << 14)
#define mEXTI_PR1_PIF15       (1u << 15)
#define mEXTI_PR1_PIF16       (1u << 16)
#define mEXTI_PR1_PIF18       (1u << 18)
#define mEXTI_PR1_PIF19       (1u << 19)
#define mEXTI_PR1_PIF20       (1u << 20)
#define mEXTI_PR1_PIF21       (1u << 21)
#define mEXTI_PR1_PIF22       (1u << 22)

/* c. Constantes */
/* Para los bits del registro PR1, no se definen constantes.
 * Cada bit es una bandera de estado (flag) donde '1' significa 'evento pendiente'.
 * El registro se limpia escribiendo '1' en los bits pendientes.
 */


/*================================== IMR2 ==================================*/
/* a. Tipos de datos */
/**
 * \brief  Estructura de datos para el registro IMR2 (Interrupt mask register 2).
 * \details Este registro permite enmascarar (desactivar) o no enmascarar (activar) la 
 * solicitud de interrupción para las líneas EXTI de 32 a 40.
 */
typedef union{
  uint32_t w; /*!< Acceso a la palabra completa de 32 bits del registro */
  
  struct{
    uint32_t IM32       : 1; /*!< Bit 0: Interrupt Mask on line 32 */
    uint32_t IM33       : 1; /*!< Bit 1: Interrupt Mask on line 33 */
    uint32_t IM34       : 1; /*!< Bit 2: Interrupt Mask on line 34 */
    uint32_t IM35       : 1; /*!< Bit 3: Interrupt Mask on line 35 */
    uint32_t IM36       : 1; /*!< Bit 4: Interrupt Mask on line 36 */
    uint32_t IM37       : 1; /*!< Bit 5: Interrupt Mask on line 37 */
    uint32_t IM38       : 1; /*!< Bit 6: Interrupt Mask on line 38 */
    uint32_t IM39       : 1; /*!< Bit 7: Interrupt Mask on line 39 */
    uint32_t IM40       : 1; /*!< Bit 8: Interrupt Mask on line 40 */
    uint32_t reserved0  : 23; /*!< Bits 9-31: Reserved */
  } b; /*!< Acceso a los campos de bits del registro */
} __EXTI_IMR2_t;

/* b. Mascaras */
#define mEXTI_IMR2_IM32        (1u << 0)
#define mEXTI_IMR2_IM33        (1u << 1)
#define mEXTI_IMR2_IM34        (1u << 2)
#define mEXTI_IMR2_IM35        (1u << 3)
#define mEXTI_IMR2_IM36        (1u << 4)
#define mEXTI_IMR2_IM37        (1u << 5)
#define mEXTI_IMR2_IM38        (1u << 6)
#define mEXTI_IMR2_IM39        (1u << 7)
#define mEXTI_IMR2_IM40        (1u << 8)

/* c. Constantes */
/* Para los bits del registro IMR2, no se definen constantes.
 * Cada bit es una bandera simple donde '1' significa 'no enmascarado' (activo)
 * y '0' significa 'enmascarado' (inactivo). Usar 1 y 0 directamente
 * es más claro y estándar para este tipo de configuración.
 */


/*================================== EMR2 ==================================*/
/* a. Tipos de datos */
/**
 * \brief  Estructura de datos para el registro EMR2 (Event mask register 2).
 * \details Este registro permite enmascarar (desactivar) o no enmascarar (activar) la 
 * solicitud de evento para las líneas EXTI de 32 a 40.
 */
typedef union{
  uint32_t w; /*!< Acceso a la palabra completa de 32 bits del registro */
  
  struct{
    uint32_t EM32       : 1; /*!< Bit 0: Event Mask on line 32 */
    uint32_t EM33       : 1; /*!< Bit 1: Event Mask on line 33 */
    uint32_t EM34       : 1; /*!< Bit 2: Event Mask on line 34 */
    uint32_t EM35       : 1; /*!< Bit 3: Event Mask on line 35 */
    uint32_t EM36       : 1; /*!< Bit 4: Event Mask on line 36 */
    uint32_t EM37       : 1; /*!< Bit 5: Event Mask on line 37 */
    uint32_t EM38       : 1; /*!< Bit 6: Event Mask on line 38 */
    uint32_t EM39       : 1; /*!< Bit 7: Event Mask on line 39 */
    uint32_t EM40       : 1; /*!< Bit 8: Event Mask on line 40 */
    uint32_t reserved0  : 23; /*!< Bits 9-31: Reserved */
  } b; /*!< Acceso a los campos de bits del registro */
} __EXTI_EMR2_t;

/* b. Mascaras */
#define mEXTI_EMR2_EM32        (1u << 0)
#define mEXTI_EMR2_EM33        (1u << 1)
#define mEXTI_EMR2_EM34        (1u << 2)
#define mEXTI_EMR2_EM35        (1u << 3)
#define mEXTI_EMR2_EM36        (1u << 4)
#define mEXTI_EMR2_EM37        (1u << 5)
#define mEXTI_EMR2_EM38        (1u << 6)
#define mEXTI_EMR2_EM39        (1u << 7)
#define mEXTI_EMR2_EM40        (1u << 8)

/* c. Constantes */
/* Para los bits del registro EMR2, no se definen constantes.
 * Cada bit es una bandera simple donde '1' significa 'no enmascarado' (activo)
 * y '0' significa 'enmascarado' (inactivo). Usar 1 y 0 directamente
 * es más claro y estándar para este tipo de configuración.
 */


/*================================== RTSR2 ==================================*/
/* a. Tipos de datos */
/**
 * \brief  Estructura de datos para el registro RTSR2 (Rising trigger selection register 2).
 * \details Este registro configura si una línea EXTI (35-38) generará una interrupción
 * o evento al detectar un flanco de subida.
 */
typedef union{
  uint32_t w; /*!< Acceso a la palabra completa de 32 bits del registro */

  struct{
    uint32_t reserved0  : 3; /*!< Bits 0-2: Reserved */
    uint32_t RT35       : 1; /*!< Bit 3: Rising trigger event configuration of line 35 */
    uint32_t RT36       : 1; /*!< Bit 4: Rising trigger event configuration of line 36 */
    uint32_t RT37       : 1; /*!< Bit 5: Rising trigger event configuration of line 37 */
    uint32_t RT38       : 1; /*!< Bit 6: Rising trigger event configuration of line 38 */
    uint32_t reserved1  : 25; /*!< Bits 7-31: Reserved */
  } b; /*!< Acceso a los campos de bits del registro */
} __EXTI_RTSR2_t;

/* b. Mascaras */
#define mEXTI_RTSR2_RT35        (1u << 3)
#define mEXTI_RTSR2_RT36        (1u << 4)
#define mEXTI_RTSR2_RT37        (1u << 5)
#define mEXTI_RTSR2_RT38        (1u << 6)

/* c. Constantes */
/* Para los bits del registro RTSR2, no se definen constantes.
 * Cada bit es una bandera simple donde '1' significa 'flanco de subida activado'
 * y '0' significa 'desactivado'. Usar 1 y 0 directamente es más claro.
 */


/*================================== FTSR2 ==================================*/
/* a. Tipos de datos */
/**
 * \brief  Estructura de datos para el registro FTSR2 (Falling trigger selection register 2).
 * \details Este registro configura si una línea EXTI (35-38) generará una interrupción
 * o evento al detectar un flanco de bajada.
 */
typedef union{
  uint32_t w; /*!< Acceso a la palabra completa de 32 bits del registro */
  
  struct{
    uint32_t reserved0  : 3; /*!< Bits 0-2: Reserved */
    uint32_t FT35       : 1; /*!< Bit 3: Falling trigger event configuration of line 35 */
    uint32_t FT36       : 1; /*!< Bit 4: Falling trigger event configuration of line 36 */
    uint32_t FT37       : 1; /*!< Bit 5: Falling trigger event configuration of line 37 */
    uint32_t FT38       : 1; /*!< Bit 6: Falling trigger event configuration of line 38 */
    uint32_t reserved1  : 25; /*!< Bits 7-31: Reserved */
  } b; /*!< Acceso a los campos de bits del registro */
} __EXTI_FTSR2_t;

/* b. Mascaras */
#define mEXTI_FTSR2_FT35        (1u << 3)
#define mEXTI_FTSR2_FT36        (1u << 4)
#define mEXTI_FTSR2_FT37        (1u << 5)
#define mEXTI_FTSR2_FT38        (1u << 6)

/* c. Constantes */
/* Para los bits del registro FTSR2, no se definen constantes.
 * Cada bit es una bandera simple donde '1' significa 'flanco de bajada activado'
 * y '0' significa 'desactivado'. Usar 1 y 0 directamente es más claro.
 */


/*================================== SWIER2 ==================================*/
/* a. Tipos de datos */
/**
 * \brief  Estructura de datos para el registro SWIER2 (Software interrupt event register 2).
 * \details Permite generar una solicitud de interrupción o evento por software para las
 * líneas 35 a 38. Escribir un '1' en un bit genera el evento en la línea correspondiente.
 */
typedef union{
  uint32_t w; /*!< Acceso a la palabra completa de 32 bits del registro */
  
  struct{
    uint32_t reserved0  : 3; /*!< Bits 0-2: Reserved */
    uint32_t SWI35      : 1; /*!< Bit 3: Software interrupt on line 35 */
    uint32_t SWI36      : 1; /*!< Bit 4: Software interrupt on line 36 */
    uint32_t SWI37      : 1; /*!< Bit 5: Software interrupt on line 37 */
    uint32_t SWI38      : 1; /*!< Bit 6: Software interrupt on line 38 */
    uint32_t reserved1  : 25; /*!< Bits 7-31: Reserved */
  } b; /*!< Acceso a los campos de bits del registro */
} __EXTI_SWIER2_t;

/* b. Mascaras */
#define mEXTI_SWIER2_SWI35        (1u << 3)
#define mEXTI_SWIER2_SWI36        (1u << 4)
#define mEXTI_SWIER2_SWI37        (1u << 5)
#define mEXTI_SWIER2_SWI38        (1u << 6)

/* c. Constantes */
/* Para los bits del registro SWIER2, no se definen constantes.
 * Escribir un '1' en un bit es una acción directa para generar una 
 * interrupción, no una configuración permanente.
 */


/*================================== PR2 ==================================*/
/* a. Tipos de datos */
/**
 * \brief  Estructura de datos para el registro PR2 (Pending register 2).
 * \details Indica si un evento de disparo ha ocurrido en las líneas 35 a 38. Un bit se pone a '1'
 * por hardware cuando ocurre un evento. Se limpia escribiendo un '1' en el bit pendiente.
 */
typedef union{
  uint32_t w; /*!< Acceso a la palabra completa de 32 bits del registro */
  
  struct{
    uint32_t reserved0  : 3; /*!< Bits 0-2: Reserved */
    uint32_t PIF35      : 1; /*!< Bit 3: Pending interrupt flag on line 35 */
    uint32_t PIF36      : 1; /*!< Bit 4: Pending interrupt flag on line 36 */
    uint32_t PIF37      : 1; /*!< Bit 5: Pending interrupt flag on line 37 */
    uint32_t PIF38      : 1; /*!< Bit 6: Pending interrupt flag on line 38 */
    uint32_t reserved1  : 25; /*!< Bits 7-31: Reserved */
  } b; /*!< Acceso a los campos de bits del registro */
} __EXTI_PR2_t;

/* b. Mascaras */
#define mEXTI_PR2_PIF35        (1u << 3)
#define mEXTI_PR2_PIF36        (1u << 4)
#define mEXTI_PR2_PIF37        (1u << 5)
#define mEXTI_PR2_PIF38        (1u << 6)

/* c. Constantes */
/* Para los bits del registro PR2, no se definen constantes.
 * Cada bit es una bandera de estado (flag) donde '1' significa 'evento pendiente'.
 * El registro se limpia escribiendo '1' en los bits pendientes.
 */


/************************************************************************************************
 * 2. Definicion de estructura del modulo
 ************************************************************************************************/


/* a. Tipos */
/**
 * \brief  Estructura del módulo EXTI.
 * \details Esta estructura mapea todo el bloque de registros del periférico EXTI,
 * permitiendo el acceso a cada registro como un miembro de la estructura.
 * Incluye campos reservados para alinear correctamente los registros según
 * el mapa de memoria del microcontrolador.
 */
typedef struct {
    volatile __EXTI_IMR1_t    IMR1;           /*!< Offset 0x00: Interrupt mask register 1 */
    volatile __EXTI_EMR1_t    EMR1;           /*!< Offset 0x04: Event mask register 1 */
    volatile __EXTI_RTSR1_t   RTSR1;          /*!< Offset 0x08: Rising trigger selection register 1 */
    volatile __EXTI_FTSR1_t   FTSR1;          /*!< Offset 0x0C: Falling trigger selection register 1 */
    volatile __EXTI_SWIER1_t  SWIER1;         /*!< Offset 0x10: Software interrupt event register 1 */
    volatile __EXTI_PR1_t     PR1;            /*!< Offset 0x14: Pending register 1 */
    uint32_t                  _RESERVED_0x18; /* 0x18 */
    uint32_t                  _RESERVED_0x1C; /* 0x1C */
    volatile __EXTI_IMR2_t    IMR2;           /*!< Offset 0x20: Interrupt mask register 2 */
    volatile __EXTI_EMR2_t    EMR2;           /*!< Offset 0x24: Event mask register 2 */
    volatile __EXTI_RTSR2_t   RTSR2;          /*!< Offset 0x28: Rising trigger selection register 2 */
    volatile __EXTI_FTSR2_t   FTSR2;          /*!< Offset 0x2C: Falling trigger selection register 2 */
    volatile __EXTI_SWIER2_t  SWIER2;         /*!< Offset 0x30: Software interrupt event register 2 */
    volatile __EXTI_PR2_t     PR2;            /*!< Offset 0x34: Pending register 2 */
} __EXTI_t;


/* b. Mascaras */
/**
 * \brief  Máscaras a nivel de registro para bits válidos y reservados.
 * \details Estas máscaras facilitan operaciones seguras sobre los registros,
 * permitiendo modificar únicamente los bits funcionales y evitando escrituras
 * accidentales en zonas reservadas por el hardware.
 */

/* EXTI_IMR1 Register Masks */
#define mEXTI_IMR1_VALID     (0xFFFFFFFFU)  /*!< Máscara de todos los bits válidos en IMR1 */
#define mEXTI_IMR1_RESERVED  (0x00000000U)  /*!< Máscara de todos los bits reservados en IMR1 */

/* EXTI_EMR1 Register Masks */
#define mEXTI_EMR1_VALID     (0xFFFFFFFFU)  /*!< Máscara de todos los bits válidos en EMR1 */
#define mEXTI_EMR1_RESERVED  (0x00000000U)  /*!< Máscara de todos los bits reservados en EMR1 */

/* EXTI_RTSR1 Register Masks */
#define mEXTI_RTSR1_VALID    (0x007DFFFFU)  /*!< Máscara de todos los bits válidos en RTSR1 */
#define mEXTI_RTSR1_RESERVED (0xFF820000U)  /*!< Máscara de todos los bits reservados en RTSR1 */

/* EXTI_FTSR1 Register Masks */
#define mEXTI_FTSR1_VALID    (0x007DFFFFU)  /*!< Máscara de todos los bits válidos en FTSR1 */
#define mEXTI_FTSR1_RESERVED (0xFF820000U)  /*!< Máscara de todos los bits reservados en FTSR1 */

/* EXTI_SWIER1 Register Masks */
#define mEXTI_SWIER1_VALID   (0x007DFFFFU)  /*!< Máscara de todos los bits válidos en SWIER1 */
#define mEXTI_SWIER1_RESERVED (0xFF820000U) /*!< Máscara de todos los bits reservados en SWIER1 */

/* EXTI_PR1 Register Masks */
#define mEXTI_PR1_VALID      (0x007DFFFFU)  /*!< Máscara de todos los bits válidos en PR1 */
#define mEXTI_PR1_RESERVED   (0xFF820000U)  /*!< Máscara de todos los bits reservados en PR1 */

/* EXTI_IMR2 Register Masks */
#define mEXTI_IMR2_VALID     (0x000001FFU)  /*!< Máscara de todos los bits válidos en IMR2 */
#define mEXTI_IMR2_RESERVED  (0xFFFFFE00U)  /*!< Máscara de todos los bits reservados en IMR2 */

/* EXTI_EMR2 Register Masks */
#define mEXTI_EMR2_VALID     (0x000001FFU)  /*!< Máscara de todos los bits válidos en EMR2 */
#define mEXTI_EMR2_RESERVED  (0xFFFFFE00U)  /*!< Máscara de todos los bits reservados en EMR2 */

/* EXTI_RTSR2 Register Masks */
#define mEXTI_RTSR2_VALID    (0x00000078U)  /*!< Máscara de todos los bits válidos en RTSR2 (bits 3-6) */
#define mEXTI_RTSR2_RESERVED (0xFFFFFF87U)  /*!< Máscara de todos los bits reservados en RTSR2 */

/* EXTI_FTSR2 Register Masks */
#define mEXTI_FTSR2_VALID    (0x00000078U)  /*!< Máscara de todos los bits válidos en FTSR2 (bits 3-6) */
#define mEXTI_FTSR2_RESERVED (0xFFFFFF87U)  /*!< Máscara de todos los bits reservados en FTSR2 */

/* EXTI_SWIER2 Register Masks */
#define mEXTI_SWIER2_VALID   (0x00000078U)  /*!< Máscara de todos los bits válidos en SWIER2 (bits 3-6) */
#define mEXTI_SWIER2_RESERVED (0xFFFFFF87U) /*!< Máscara de todos los bits reservados en SWIER2 */

/* EXTI_PR2 Register Masks */
#define mEXTI_PR2_VALID      (0x00000078U)  /*!< Máscara de todos los bits válidos en PR2 (bits 3-6) */
#define mEXTI_PR2_RESERVED   (0xFFFFFF87U)  /*!< Máscara de todos los bits reservados en PR2 */


/************************************************************************************************
 * 3. Macros de acceso a registros
 ************************************************************************************************/

/* a. Macros de acceso corto a registros */
/**
 * \brief  Macros para acceso directo a la palabra completa (32 bits) de cada registro EXTI.
 * \details Siguen la nomenclatura: r + MODULEname + _ + REGISTERname.
 * Permiten una forma más corta y legible de acceder a los registros.
 * Ej: rEXTI_IMR1 en lugar de sEXTI->IMR1.w
 */
#define rEXTI_IMR1        (sEXTI->IMR1.w)
#define rEXTI_EMR1        (sEXTI->EMR1.w)
#define rEXTI_RTSR1       (sEXTI->RTSR1.w)
#define rEXTI_FTSR1       (sEXTI->FTSR1.w)
#define rEXTI_SWIER1      (sEXTI->SWIER1.w)
#define rEXTI_PR1         (sEXTI->PR1.w)
#define rEXTI_IMR2        (sEXTI->IMR2.w)
#define rEXTI_EMR2        (sEXTI->EMR2.w)
#define rEXTI_RTSR2       (sEXTI->RTSR2.w)
#define rEXTI_FTSR2       (sEXTI->FTSR2.w)
#define rEXTI_SWIER2      (sEXTI->SWIER2.w)
#define rEXTI_PR2         (sEXTI->PR2.w)

/* b. Macros de acceso corto a bits y campos de bits */
/**
 * \brief  Macros para acceso directo a cada bit o campo de bit individual de los registros EXTI.
 * \details Siguen la nomenclatura: b + MODULEname + _ + BITFIELDname.
 * Permiten manipular bits específicos sin afectar el resto del registro.
 * Ej: bEXTI_IM5 = 1; en lugar de sEXTI->IMR1.b.IM5 = 1;
 */

/* EXTI_IMR1 Fields */
#define bEXTI_IM0         (sEXTI->IMR1.b.IM0)
#define bEXTI_IM1         (sEXTI->IMR1.b.IM1)
#define bEXTI_IM2         (sEXTI->IMR1.b.IM2)
#define bEXTI_IM3         (sEXTI->IMR1.b.IM3)
#define bEXTI_IM4         (sEXTI->IMR1.b.IM4)
#define bEXTI_IM5         (sEXTI->IMR1.b.IM5)
#define bEXTI_IM6         (sEXTI->IMR1.b.IM6)
#define bEXTI_IM7         (sEXTI->IMR1.b.IM7)
#define bEXTI_IM8         (sEXTI->IMR1.b.IM8)
#define bEXTI_IM9         (sEXTI->IMR1.b.IM9)
#define bEXTI_IM10        (sEXTI->IMR1.b.IM10)
#define bEXTI_IM11        (sEXTI->IMR1.b.IM11)
#define bEXTI_IM12        (sEXTI->IMR1.b.IM12)
#define bEXTI_IM13        (sEXTI->IMR1.b.IM13)
#define bEXTI_IM14        (sEXTI->IMR1.b.IM14)
#define bEXTI_IM15        (sEXTI->IMR1.b.IM15)
#define bEXTI_IM16        (sEXTI->IMR1.b.IM16)
#define bEXTI_IM17        (sEXTI->IMR1.b.IM17)
#define bEXTI_IM18        (sEXTI->IMR1.b.IM18)
#define bEXTI_IM19        (sEXTI->IMR1.b.IM19)
#define bEXTI_IM20        (sEXTI->IMR1.b.IM20)
#define bEXTI_IM21        (sEXTI->IMR1.b.IM21)
#define bEXTI_IM22        (sEXTI->IMR1.b.IM22)
#define bEXTI_IM23        (sEXTI->IMR1.b.IM23)
#define bEXTI_IM24        (sEXTI->IMR1.b.IM24)
#define bEXTI_IM25        (sEXTI->IMR1.b.IM25)
#define bEXTI_IM26        (sEXTI->IMR1.b.IM26)
#define bEXTI_IM27        (sEXTI->IMR1.b.IM27)
#define bEXTI_IM28        (sEXTI->IMR1.b.IM28)
#define bEXTI_IM29        (sEXTI->IMR1.b.IM29)
#define bEXTI_IM30        (sEXTI->IMR1.b.IM30)
#define bEXTI_IM31        (sEXTI->IMR1.b.IM31)

/* EXTI_EMR1 Fields */
#define bEXTI_EM0         (sEXTI->EMR1.b.EM0)
#define bEXTI_EM1         (sEXTI->EMR1.b.EM1)
#define bEXTI_EM2         (sEXTI->EMR1.b.EM2)
#define bEXTI_EM3         (sEXTI->EMR1.b.EM3)
#define bEXTI_EM4         (sEXTI->EMR1.b.EM4)
#define bEXTI_EM5         (sEXTI->EMR1.b.EM5)
#define bEXTI_EM6         (sEXTI->EMR1.b.EM6)
#define bEXTI_EM7         (sEXTI->EMR1.b.EM7)
#define bEXTI_EM8         (sEXTI->EMR1.b.EM8)
#define bEXTI_EM9         (sEXTI->EMR1.b.EM9)
#define bEXTI_EM10        (sEXTI->EMR1.b.EM10)
#define bEXTI_EM11        (sEXTI->EMR1.b.EM11)
#define bEXTI_EM12        (sEXTI->EMR1.b.EM12)
#define bEXTI_EM13        (sEXTI->EMR1.b.EM13)
#define bEXTI_EM14        (sEXTI->EMR1.b.EM14)
#define bEXTI_EM15        (sEXTI->EMR1.b.EM15)
#define bEXTI_EM16        (sEXTI->EMR1.b.EM16)
#define bEXTI_EM17        (sEXTI->EMR1.b.EM17)
#define bEXTI_EM18        (sEXTI->EMR1.b.EM18)
#define bEXTI_EM19        (sEXTI->EMR1.b.EM19)
#define bEXTI_EM20        (sEXTI->EMR1.b.EM20)
#define bEXTI_EM21        (sEXTI->EMR1.b.EM21)
#define bEXTI_EM22        (sEXTI->EMR1.b.EM22)
#define bEXTI_EM23        (sEXTI->EMR1.b.EM23)
#define bEXTI_EM24        (sEXTI->EMR1.b.EM24)
#define bEXTI_EM25        (sEXTI->EMR1.b.EM25)
#define bEXTI_EM26        (sEXTI->EMR1.b.EM26)
#define bEXTI_EM27        (sEXTI->EMR1.b.EM27)
#define bEXTI_EM28        (sEXTI->EMR1.b.EM28)
#define bEXTI_EM29        (sEXTI->EMR1.b.EM29)
#define bEXTI_EM30        (sEXTI->EMR1.b.EM30)
#define bEXTI_EM31        (sEXTI->EMR1.b.EM31)

/* EXTI_RTSR1 Fields */
#define bEXTI_RT0         (sEXTI->RTSR1.b.RT0)
#define bEXTI_RT1         (sEXTI->RTSR1.b.RT1)
#define bEXTI_RT2         (sEXTI->RTSR1.b.RT2)
#define bEXTI_RT3         (sEXTI->RTSR1.b.RT3)
#define bEXTI_RT4         (sEXTI->RTSR1.b.RT4)
#define bEXTI_RT5         (sEXTI->RTSR1.b.RT5)
#define bEXTI_RT6         (sEXTI->RTSR1.b.RT6)
#define bEXTI_RT7         (sEXTI->RTSR1.b.RT7)
#define bEXTI_RT8         (sEXTI->RTSR1.b.RT8)
#define bEXTI_RT9         (sEXTI->RTSR1.b.RT9)
#define bEXTI_RT10        (sEXTI->RTSR1.b.RT10)
#define bEXTI_RT11        (sEXTI->RTSR1.b.RT11)
#define bEXTI_RT12        (sEXTI->RTSR1.b.RT12)
#define bEXTI_RT13        (sEXTI->RTSR1.b.RT13)
#define bEXTI_RT14        (sEXTI->RTSR1.b.RT14)
#define bEXTI_RT15        (sEXTI->RTSR1.b.RT15)
#define bEXTI_RT16        (sEXTI->RTSR1.b.RT16)
#define bEXTI_RT18        (sEXTI->RTSR1.b.RT18)
#define bEXTI_RT19        (sEXTI->RTSR1.b.RT19)
#define bEXTI_RT20        (sEXTI->RTSR1.b.RT20)
#define bEXTI_RT21        (sEXTI->RTSR1.b.RT21)
#define bEXTI_RT22        (sEXTI->RTSR1.b.RT22)

/* EXTI_FTSR1 Fields */
#define bEXTI_FT0         (sEXTI->FTSR1.b.FT0)
#define bEXTI_FT1         (sEXTI->FTSR1.b.FT1)
#define bEXTI_FT2         (sEXTI->FTSR1.b.FT2)
#define bEXTI_FT3         (sEXTI->FTSR1.b.FT3)
#define bEXTI_FT4         (sEXTI->FTSR1.b.FT4)
#define bEXTI_FT5         (sEXTI->FTSR1.b.FT5)
#define bEXTI_FT6         (sEXTI->FTSR1.b.FT6)
#define bEXTI_FT7         (sEXTI->FTSR1.b.FT7)
#define bEXTI_FT8         (sEXTI->FTSR1.b.FT8)
#define bEXTI_FT9         (sEXTI->FTSR1.b.FT9)
#define bEXTI_FT10        (sEXTI->FTSR1.b.FT10)
#define bEXTI_FT11        (sEXTI->FTSR1.b.FT11)
#define bEXTI_FT12        (sEXTI->FTSR1.b.FT12)
#define bEXTI_FT13        (sEXTI->FTSR1.b.FT13)
#define bEXTI_FT14        (sEXTI->FTSR1.b.FT14)
#define bEXTI_FT15        (sEXTI->FTSR1.b.FT15)
#define bEXTI_FT16        (sEXTI->FTSR1.b.FT16)
#define bEXTI_FT18        (sEXTI->FTSR1.b.FT18)
#define bEXTI_FT19        (sEXTI->FTSR1.b.FT19)
#define bEXTI_FT20        (sEXTI->FTSR1.b.FT20)
#define bEXTI_FT21        (sEXTI->FTSR1.b.FT21)
#define bEXTI_FT22        (sEXTI->FTSR1.b.FT22)

/* EXTI_SWIER1 Fields */
#define bEXTI_SWI0        (sEXTI->SWIER1.b.SWI0)
#define bEXTI_SWI1        (sEXTI->SWIER1.b.SWI1)
#define bEXTI_SWI2        (sEXTI->SWIER1.b.SWI2)
#define bEXTI_SWI3        (sEXTI->SWIER1.b.SWI3)
#define bEXTI_SWI4        (sEXTI->SWIER1.b.SWI4)
#define bEXTI_SWI5        (sEXTI->SWIER1.b.SWI5)
#define bEXTI_SWI6        (sEXTI->SWIER1.b.SWI6)
#define bEXTI_SWI7        (sEXTI->SWIER1.b.SWI7)
#define bEXTI_SWI8        (sEXTI->SWIER1.b.SWI8)
#define bEXTI_SWI9        (sEXTI->SWIER1.b.SWI9)
#define bEXTI_SWI10       (sEXTI->SWIER1.b.SWI10)
#define bEXTI_SWI11       (sEXTI->SWIER1.b.SWI11)
#define bEXTI_SWI12       (sEXTI->SWIER1.b.SWI12)
#define bEXTI_SWI13       (sEXTI->SWIER1.b.SWI13)
#define bEXTI_SWI14       (sEXTI->SWIER1.b.SWI14)
#define bEXTI_SWI15       (sEXTI->SWIER1.b.SWI15)
#define bEXTI_SWI16       (sEXTI->SWIER1.b.SWI16)
#define bEXTI_SWI18       (sEXTI->SWIER1.b.SWI18)
#define bEXTI_SWI19       (sEXTI->SWIER1.b.SWI19)
#define bEXTI_SWI20       (sEXTI->SWIER1.b.SWI20)
#define bEXTI_SWI21       (sEXTI->SWIER1.b.SWI21)
#define bEXTI_SWI22       (sEXTI->SWIER1.b.SWI22)

/* EXTI_PR1 Fields */
#define bEXTI_PIF0        (sEXTI->PR1.b.PIF0)
#define bEXTI_PIF1        (sEXTI->PR1.b.PIF1)
#define bEXTI_PIF2        (sEXTI->PR1.b.PIF2)
#define bEXTI_PIF3        (sEXTI->PR1.b.PIF3)
#define bEXTI_PIF4        (sEXTI->PR1.b.PIF4)
#define bEXTI_PIF5        (sEXTI->PR1.b.PIF5)
#define bEXTI_PIF6        (sEXTI->PR1.b.PIF6)
#define bEXTI_PIF7        (sEXTI->PR1.b.PIF7)
#define bEXTI_PIF8        (sEXTI->PR1.b.PIF8)
#define bEXTI_PIF9        (sEXTI->PR1.b.PIF9)
#define bEXTI_PIF10       (sEXTI->PR1.b.PIF10)
#define bEXTI_PIF11       (sEXTI->PR1.b.PIF11)
#define bEXTI_PIF12       (sEXTI->PR1.b.PIF12)
#define bEXTI_PIF13       (sEXTI->PR1.b.PIF13)
#define bEXTI_PIF14       (sEXTI->PR1.b.PIF14)
#define bEXTI_PIF15       (sEXTI->PR1.b.PIF15)
#define bEXTI_PIF16       (sEXTI->PR1.b.PIF16)
#define bEXTI_PIF18       (sEXTI->PR1.b.PIF18)
#define bEXTI_PIF19       (sEXTI->PR1.b.PIF19)
#define bEXTI_PIF20       (sEXTI->PR1.b.PIF20)
#define bEXTI_PIF21       (sEXTI->PR1.b.PIF21)
#define bEXTI_PIF22       (sEXTI->PR1.b.PIF22)

/* EXTI_IMR2 Fields */
#define bEXTI_IM32        (sEXTI->IMR2.b.IM32)
#define bEXTI_IM33        (sEXTI->IMR2.b.IM33)
#define bEXTI_IM34        (sEXTI->IMR2.b.IM34)
#define bEXTI_IM35        (sEXTI->IMR2.b.IM35)
#define bEXTI_IM36        (sEXTI->IMR2.b.IM36)
#define bEXTI_IM37        (sEXTI->IMR2.b.IM37)
#define bEXTI_IM38        (sEXTI->IMR2.b.IM38)
#define bEXTI_IM39        (sEXTI->IMR2.b.IM39)
#define bEXTI_IM40        (sEXTI->IMR2.b.IM40)

/* EXTI_EMR2 Fields */
#define bEXTI_EM32        (sEXTI->EMR2.b.EM32)
#define bEXTI_EM33        (sEXTI->EMR2.b.EM33)
#define bEXTI_EM34        (sEXTI->EMR2.b.EM34)
#define bEXTI_EM35        (sEXTI->EMR2.b.EM35)
#define bEXTI_EM36        (sEXTI->EMR2.b.EM36)
#define bEXTI_EM37        (sEXTI->EMR2.b.EM37)
#define bEXTI_EM38        (sEXTI->EMR2.b.EM38)
#define bEXTI_EM39        (sEXTI->EMR2.b.EM39)
#define bEXTI_EM40        (sEXTI->EMR2.b.EM40)

/* EXTI_RTSR2 Fields */
#define bEXTI_RT35        (sEXTI->RTSR2.b.RT35)
#define bEXTI_RT36        (sEXTI->RTSR2.b.RT36)
#define bEXTI_RT37        (sEXTI->RTSR2.b.RT37)
#define bEXTI_RT38        (sEXTI->RTSR2.b.RT38)

/* EXTI_FTSR2 Fields */
#define bEXTI_FT35        (sEXTI->FTSR2.b.FT35)
#define bEXTI_FT36        (sEXTI->FTSR2.b.FT36)
#define bEXTI_FT37        (sEXTI->FTSR2.b.FT37)
#define bEXTI_FT38        (sEXTI->FTSR2.b.FT38)

/* EXTI_SWIER2 Fields */
#define bEXTI_SWI35       (sEXTI->SWIER2.b.SWI35)
#define bEXTI_SWI36       (sEXTI->SWIER2.b.SWI36)
#define bEXTI_SWI37       (sEXTI->SWIER2.b.SWI37)
#define bEXTI_SWI38       (sEXTI->SWIER2.b.SWI38)

/* EXTI_PR2 Fields */
#define bEXTI_PIF35       (sEXTI->PR2.b.PIF35)
#define bEXTI_PIF36       (sEXTI->PR2.b.PIF36)
#define bEXTI_PIF37       (sEXTI->PR2.b.PIF37)
#define bEXTI_PIF38       (sEXTI->PR2.b.PIF38)


#endif /* EXTI_LIB_H_ */