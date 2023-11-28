bool estaVacia(int tope){
	if (tope == 0)
		return true;
	else 
		return false;
}
bool estaLlena(int tope, int limite){
	if (tope == limite)
		return true;
	else
		return false;
}
void insertarNodo(boletas *&Ini,boletas *&Fin, imprime dato){
	boletas *Aux = new boletas;
	Aux->dato = dato;
	Aux->puntero = NULL;
	if (Ini == NULL)Ini = Fin = Aux;
	else{
		Fin->puntero = Aux;
		Fin = Aux;
		Fin->puntero = NULL;
	}
}
void Encolar(int &tope, int limite, imprime dato, boletas *&Ini, boletas *&Fin){
	if (!estaLlena(tope, limite)){
		insertarNodo(Ini, Fin, dato);
		tope++;
	}
}
imprime DesenColar(int &tope, boletas *&Ini, boletas *&Fin){
	imprime dato;
	if (Ini != NULL)dato = Ini->dato;
	if (!estaVacia(tope)){
		if (Ini == Fin && Ini != NULL)Ini = Fin = NULL;
		else Ini = Ini->puntero;
		tope--;
	}
	return dato;
}