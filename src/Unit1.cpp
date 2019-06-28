//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

int step = 0;
int row = 0;
int *an[5];

int iq = 0;
int res = 0;

bool cha = true;

int result[] = { 0, 0, 0, 0, 0 };
int tabel[5][12] = {
    { 4, 5, 1, 2, 6, 3, 6, 2, 1, 3, 4, 5 },
    { 2, 6, 1, 2, 1, 3, 5, 6, 4, 3, 4, 5 },
    { 8, 2, 3, 8, 7, 4, 5, 1, 7, 6, 1, 2 },
    { 3, 4, 3, 7, 8, 6, 5, 4, 1, 2, 5, 6 },
    { 7, 6, 8, 2, 1, 5, 1, 6, 3, 2, 4, 5 }
};

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
    for (int i = 0; i < 5; i++) {
        an[i] = new int[12];
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    if (Edit1->Text.Length() < 3) {
        ShowMessage("Недопустимая длинна имени испытуемого");
        return;
    }
    if (Edit2->Text.Length() == 0) {
        ShowMessage("Введите возраст испытуемого");
        return;
    }
    for (int i = 0; i < 5; i++) {
        result[i] = 0;
    }
    step = 0;
    row = 0;
    res = 0;
    iq = 0;
    Image1->Picture->LoadFromFile("img/test-raven-" + IntToStr(row + 1) + "-" + IntToStr(step + 1) + ".bmp");
    Button1->Visible = false;
    RadioGroup1->Items->Add('1');
    RadioGroup1->Items->Add('2');
    RadioGroup1->Items->Add('3');
    RadioGroup1->Items->Add('4');
    RadioGroup1->Items->Add('5');
    RadioGroup1->Items->Add('6');

    Edit1->ReadOnly = true;
    Edit2->ReadOnly = true;
    Button2->Visible = true;
    RadioGroup1->Visible = true;
    Image1->Visible = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
    if (tabel[row][step] == RadioGroup1->ItemIndex + 1) {
        result[row] += 1;
        iq++;
    }

    if ((step + 1) == 12 && (row + 1) == 5) {
        Button1->Visible = true;
        Button2->Visible = false;
        RadioGroup1->Visible = false;
        RadioGroup1->Items->Clear();
        Image1->Visible = false;
        for (int i = 0; i < 5; i++) {
            result[i] = 0;
        }
        step = 0;
        row = 0;
        switch (iq) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9: res = 50; break;
        case 10: res = 55; break;
        case 11: res = 57; break;
        case 12: res = 58; break;
        case 13: res = 59; break;
        case 14: res = 61; break;
        case 15: res = 62; break;
        case 16:
        case 17: res = 65; break;
        case 18: res = 66; break;
        case 19: res = 67; break;
        case 20: res = 69; break;
        case 21: res = 70; break;
        case 22: res = 71; break;
        case 23: res = 72; break;
        case 24: res = 74; break;
        case 25: res = 75; break;
        case 26: res = 76; break;
        case 27: res = 77; break;
        case 28: res = 79; break;
        case 29: res = 80; break;
        case 30: res = 82; break;
        case 31: res = 83; break;
        case 32: res = 84; break;
        case 33: res = 86; break;
        case 34: res = 87; break;
        case 35: res = 89; break;
        case 36: res = 90; break;
        case 37: res = 91; break;
        case 38: res = 92; break;
        case 39: res = 94; break;
        case 40: res = 95; break;
        case 41: res = 96; break;
        case 42: res = 97; break;
        case 43: res = 99; break;
        case 44: res = 100; break;
        case 45: res = 102; break;
        case 46: res = 104; break;
        case 47: res = 106; break;
        case 48: res = 108; break;
        case 49: res = 110; break;
        case 50: res = 112; break;
        case 51: res = 114; break;
        case 52: res = 116; break;
        case 53: res = 118; break;
        case 54: res = 120; break;
        case 55: res = 122; break;
        case 56: res = 124; break;
        case 57: res = 126; break;
        case 58: res = 128; break;
        case 59: res = 130; break;
        case 60: res = 130; break;
        }
        int yo = StrToInt(Edit2->Text);
        if (yo <= 30) {
            yo = 100;
        } else if(yo > 30 && yo <= 35) {
            yo = 97;
        } else if (yo > 35 && yo <= 40) {
            yo = 93;
        } else if (yo > 40 && yo <= 45) {
            yo = 88;
        } else if (yo > 45 && yo <= 50) {
            yo = 82;
        } else if (yo > 50 && yo <= 55) {
            yo = 76;
        } else {
            yo = 70;
        }
        int iqqq = (res * 100) / yo;
        if (iqqq >= 0 && iqqq <= 20) {
            ShowMessage("Поздравляем, " + Edit1->Text + ", вы завершили тест!\nРезультаты: " + IntToStr(iqqq) + " идиотия, самая большая степень слабоумия");
        } else if (iqqq > 20 && iqqq <= 50) {
            ShowMessage("Поздравляем, " + Edit1->Text + ", вы завершили тест!\nРезультаты: " + IntToStr(iqqq) + " имбицильность, средняя степень слабоумия");
        } else if (iqqq > 50 && iqqq <= 70) {
            ShowMessage("Поздравляем, " + Edit1->Text + ", вы завершили тест!\nРезультаты: " + IntToStr(iqqq) + " дебильное слабоумие");
        } else if (iqqq > 70 && iqqq <= 80) {
            ShowMessage("Поздравляем, " + Edit1->Text + ", вы завершили тест!\nРезультаты: " + IntToStr(iqqq) + " небольшая степень слабоумия");
        } else if (iqqq > 80 && iqqq <= 90) {
            ShowMessage("Поздравляем, " + Edit1->Text + ", вы завершили тест!\nРезультаты: " + IntToStr(iqqq) + " слабый, ниже средднего интеллект");
        } else if (iqqq > 90 && iqqq <= 100) {
            ShowMessage("Поздравляем, " + Edit1->Text + ", вы завершили тест!\nРезультаты: " + IntToStr(iqqq) + " средний интеллект");
        } else if (iqqq > 100 && iqqq <= 110) {
            ShowMessage("Поздравляем, " + Edit1->Text + ", вы завершили тест!\nРезультаты: " + IntToStr(iqqq) + " нормальный, выше среднего интеллект");
        } else if (iqqq > 110 && iqqq <= 120) {
            ShowMessage("Поздравляем, " + Edit1->Text + ", вы завершили тест!\nРезультаты: " + IntToStr(iqqq) + " незаурядный, хороший интеллект");
        } else if (iqqq > 120 && iqqq < 140) {
            ShowMessage("Поздравляем, " + Edit1->Text + ", вы завершили тест!\nРезультаты: " + IntToStr(iqqq) + " высокий, незаурядный интеллект");
        } else {
            ShowMessage("Поздравляем, " + Edit1->Text + ", вы завершили тест!\nРезультаты: " + IntToStr(iqqq) + " очень высокий, выдающийся интеллект");
        }

        return;
    }

    if ((step + 1) < 12) {
        an[row][step] = RadioGroup1->ItemIndex + 1;
        step++;
    } else {
        step = 0;
        row++;
        an[row][step] = RadioGroup1->ItemIndex + 1;
    }
    if (cha && (row + 1) == 3) {
        RadioGroup1->Items->Add('7');
        RadioGroup1->Items->Add('8');
        cha = false;
    }
    Image1->Picture->LoadFromFile("img/test-raven-" + IntToStr(row + 1) + "-" + IntToStr(step + 1) + ".bmp");
    Image1->Visible = true;
    RadioGroup1->ItemIndex = -1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::J1Click(TObject *Sender)
{
    ShowMessage("Название: \"Прогрессивные матрицы Равена\"\n\nМетодика преднозначена для изучения логичности мышления. Испытуемому предъявляются рисунки с фигурами, связанными между собой определенной зависимостью. Одной фигуры не достает, а внизу она дается среди 6-8 других фигур. Задача испытуемого - установить закономерность, связывающую между собой фигуры на рисунке, и указать номер искомой фигуры из предлагаемых вариантов.\n\nБГУИР 2019\n881071 Божков Валентин");
}
//---------------------------------------------------------------------------

