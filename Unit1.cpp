//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{



	//Label1->Caption = (object.getPlayer(0).getName()).c_str();
	//std::string have to be converted to Unicode String. std::stringVariable.c_str(); helps

	Button1->Left = (Form1->Width - Button1->Width)/2;
	Button2->Left = Button1 -> Left;
	Button3->Left = Button1 -> Left;

	Button1 ->  Top  = 50;
	Button2 -> Top = Button1 -> Top + Button1 -> Height + 20;
	Button3 -> Top = Button2 -> Top + Button2 -> Height + 20;

	Button4 -> Visible = false;
	Button4 -> Enabled = false;

	Button6 -> Visible = false;
	Button6 -> Enabled = false;

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Button1 -> Visible = false;
	Button1 -> Enabled = false;

	Button2 -> Visible = false;
	Button2 -> Enabled = false;

	Button3 -> Visible = false;
	Button3 -> Enabled = false;

	Button4 -> Left = (Form1->Width - Button4->Width)/2;
	Button4 -> Top  = Button1 -> Top;

	Button6 -> Left = (Form1->Width - Button6->Width)/2;
	Button6 -> Top = Button4 -> Top + Button2 -> Height + 20;

	Button4 -> Visible = true;
	Button4 -> Enabled = true;

	Button6 -> Visible = true;
	Button6 -> Enabled = true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
	Button1 -> Visible = true;
	Button1 -> Enabled = true;

	Button2 -> Visible = true;
	Button2 -> Enabled = true;

	Button3 -> Visible = true;
	Button3 -> Enabled = true;

	Button4 -> Visible = false;
	Button4 -> Enabled = false;

	Button6 -> Visible = false;
	Button6 -> Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
	Form2 -> Visible = true;
	Form1 -> Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
    Application -> Terminate();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Form3 -> Visible = true;
}
//---------------------------------------------------------------------------

