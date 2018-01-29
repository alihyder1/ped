#pragma once

#include <iostream>

class TCalendario {

	private:
	
	    int _dia;
	    int _mes;
	    int _anyo;

	    char* _mensaje;


	public:
	
	
	    inline TCalendario ();
	    TCalendario (int, int, int, char*);
	    TCalendario (TCalendario &);
	    inline ~TCalendario ();
	    TCalendario & operator = (const TCalendario&);
	
        bool ModFecha (int, int, int);
        bool ModMensaje (char *);
	
	    bool operator == (const TCalendario &);
	    bool operator != (const TCalendario &);
	    bool operator > (const TCalendario &);
	    bool operator < (const TCalendario &);
	
        TCalendario operator--(int);
        TCalendario & operator--();
        
        TCalendario operator+(int);
        TCalendario operator-(int);
        
        TCalendario operator++(int);
        TCalendario & operator++();
	
	    int Dia()  const {return _dia;};
	    int Mes()  const {return _mes;};
	    int Anyo() const {return _anyo;};
	    char* Mensaje() const {return _mensaje;};

	
	
	friend std::ostream & operator << (std::ostream &, const TCalendario &);
	
	// establece una fecha a la minim
	void Vacio ();
};

TCalendario::TCalendario () :
	_dia(1),
	_mes(1), 
	_anyo(1900),
	_mensaje(nullptr)
{}

TCalendario::~TCalendario () :
	_dia(1),
	_mes(1), 
	_anyo(1900),
	_mensaje(nullptr)
{}








