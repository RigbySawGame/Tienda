#include <iostream>
#include <string.h>
#include "estructuras.h"
#include "funciones.h"
#include "frmColas.h"
#include "frmTambo.h"
#include "usuario.h"
using namespace TIENDA;

void main(){
	Application::EnableVisualStyles();
	Application::Run(gcnew usuario);
}