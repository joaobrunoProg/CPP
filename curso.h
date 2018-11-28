#ifndef CURSO_H_INCLUDED
#define CURSO_H_INCLUDED

class Curso {

	private :
		
		string nomeCurso;		
		
	public :
		
		Curso();
		~Curso();
		void getNomeCurso();
		string setNomeCurso(string nomeCurso);	
};

#endif