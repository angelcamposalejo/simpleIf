#pragma once  //______________________________________ ejerciciosIf.h  
#include "Resource.h"
class ejerciciosIf : public Win::Dialog
{
public:
	ejerciciosIf()
	{
	}
	~ejerciciosIf()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Textbox tbxEntrada;
	Win::Button btChecar;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(177);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(89);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"ejerciciosIf";
		lb1.Create(NULL, L"Número", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 12, 16, 64, 25, hWnd, 1000);
		tbxEntrada.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 86, 18, 84, 25, hWnd, 1001);
		btChecar.Create(NULL, L"Checar", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 55, 54, 55, 28, hWnd, 1002);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		tbxEntrada.Font = fontArial014A;
		btChecar.Font = fontArial014A;
	}
	//_________________________________________________
	void btChecar_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btChecar.IsEvent(e, BN_CLICKED)) {btChecar_Click(e); return true;}
		return false;
	}
};
