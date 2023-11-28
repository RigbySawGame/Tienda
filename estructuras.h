struct fecha{
	int d, m, a;
};
struct producto{
	double precio,cantidad;
	char codigo[20];
	char nombreP[200];
};
struct Vendedor{
	char nombreV[50];
	char codigo[20];
};
struct imprime{
	 producto produc;
	 Vendedor ven;
	 fecha fecVencimiento;
};
struct boletas{
	imprime dato;
	boletas *puntero;
};
//boleta *Ini, *Fin;
//int tope = 0, lim = 5;
boletas *InC, *FiC;
int topC = 0, lim = 5;