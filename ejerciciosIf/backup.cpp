#include "stdafx.h"  //________________________________________ ejerciciosIf.cpp
#include "ejerciciosIf.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	ejerciciosIf app;
	return app.BeginDialog(IDI_ejerciciosIf, hInstance);
}

void ejerciciosIf::Window_Open(Win::Event& e)
{
}

void ejerciciosIf::btChecar_Click(Win::Event& e)
{
	const double entrada = tbxEntrada.DoubleValue;
	if (entrada < 10.0)
	{
		this->MessageBox(L"Número menor que 10", L"Prueba", MB_OK);
	}
}

