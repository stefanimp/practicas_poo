//
// Created by stefan on 13/03/2023.
//

#ifndef PRACTICA_4_INFORME_H
#define PRACTICA_4_INFORME_H

/**
 * @brief
 */
class Informe
{
private:
    static long _numInformes;  ///< Número de informes instanciados
    int _idI = 0;              ///< Identificador de cada informe
    int _idPiloto = 0;    ///< Identificador del piloto que realiza el informe
    long _fechaEstelar = 0;    ///< Fecha del informe en formato aaaammdd
    std::string _datosInforme; ///< Contenido del informe

public:
    Informe ( );
    Informe ( long fecha );
    Informe ( const Informe& orig );
    virtual ~Informe ( );
    Informe& setDatosInforme ( std::string datosInforme );
    std::string getDatosInforme ( ) const;
    Informe& setFechaEstelar ( long fechaEstelar );
    long getFechaEstelar ( ) const;
    Informe& setIdPiloto ( int idPiloto );
    int getIdPiloto ( ) const;
    int getIdI ( ) const;
    std::string toCSV () const;
    Informe& operator= ( const Informe& otro );
};

#endif //PRACTICA_4_INFORME_H
