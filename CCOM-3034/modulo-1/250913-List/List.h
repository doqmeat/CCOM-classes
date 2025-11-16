// header file para List ADT

#ifndef LIST_H
#define LIST_H

class List
{
private:
	int *a;		// puntero hacia el arreglo dinámico
	int size; // tamaño del arreglo (cuantos elementos tiene)
	int cap;	// capacidad del arreglo (cuantos elementos puede aguantar)

public:
	List();													 // constructor
	~List();												 // destructor
	List(const List &l2);						 // copy constructor
	List(List &&l2);								 // move constructor
	List &operator=(const List &l2); // copy assignment constructor
	List &operator=(List &&l2);			 // move assignment constructor
	void insert(int value, int position);
	void remove(int position);
	void print() const;
	int getSize() const;
	int find(int value) const;
};

#endif