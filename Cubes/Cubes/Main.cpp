#include <iostream>
#include <string>

using namespace std;

wstring inputStr;
wstring construct (size_t i, int flags) {
	if(i == inputStr.length ()) {
		return L"";
	} else {
		switch(inputStr[i]) {
		case L'А': case L'а':
			if((flags & (1 << 1)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 1));
				if(wstr != L"0") {
					return L"1-А " + wstr;
				}
			}
			if((flags & (1 << 3)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 3));
				if(wstr != L"0") {
					return L"3-А " + wstr;
				}
			}
			if((flags & (1 << 9)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 9));
				if(wstr != L"0") {
					return L"9-А " + wstr;
				}
			}
			if((flags & (1 << 12)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 12));
				if(wstr != L"0") {
					return L"12-А " + wstr;
				}
			}
			return L"0";
		case L'Б': case L'б':
			if((flags & (1 << 2)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 2));
				if(wstr != L"0") {
					return L"2-Б " + wstr;
				}
			}
			if((flags & (1 << 12)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 12));
				if(wstr != L"0") {
					return L"12-Б " + wstr;
				}
			}
			return L"0";
		case L'В': case L'в':
			if((flags & (1 << 3)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 3));
				if(wstr != L"0") {
					return L"3-В " + wstr;
				}
			}
			if((flags & (1 << 8)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 8));
				if(wstr != L"0") {
					return L"8-В " + wstr;
				}
			}
			return L"0";
		case L'Г': case L'г':
			if((flags & (1 << 6)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 6));
				if(wstr != L"0") {
					return L"6-Г " + wstr;
				}
			}
			if((flags & (1 << 10)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 10));
				if(wstr != L"0") {
					return L"10-Г " + wstr;
				}
			}
			return L"0";
		case L'Д': case L'д':
			if((flags & (1 << 1)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 1));
				if(wstr != L"0") {
					return L"1-Д " + wstr;
				}
			}
			if((flags & (1 << 5)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 5));
				if(wstr != L"0") {
					return L"5-Д " + wstr;
				}
			}
			return L"0";
		case L'Е': case L'е':
			if((flags & (1 << 2)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 2));
				if(wstr != L"0") {
					return L"2-Е " + wstr;
				}
			}
			if((flags & (1 << 5)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 5));
				if(wstr != L"0") {
					return L"5-Е " + wstr;
				}
			}
			if((flags & (1 << 10)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 10));
				if(wstr != L"0") {
					return L"10-Е " + wstr;
				}
			}
			if((flags & (1 << 11)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 11));
				if(wstr != L"0") {
					return L"11-Е " + wstr;
				}
			}
			return L"0";
		case L'Ё': case L'ё':
			if((flags & (1 << 7)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 7));
				if(wstr != L"0") {
					return L"7-Ё " + wstr;
				}
			}
			if((flags & (1 << 9)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 9));
				if(wstr != L"0") {
					return L"9-Ё " + wstr;
				}
			}
			return L"0";
		case L'Ж': case L'ж':
			if((flags & (1 << 4)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 4));
				if(wstr != L"0") {
					return L"4-Ж " + wstr;
				}
			}
			if((flags & (1 << 11)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 11));
				if(wstr != L"0") {
					return L"11-Ж " + wstr;
				}
			}
			return L"0";
		case L'З': case L'з':
			if((flags & (1 << 2)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 2));
				if(wstr != L"0") {
					return L"2-З " + wstr;
				}
			}
			if((flags & (1 << 12)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 12));
				if(wstr != L"0") {
					return L"12-З " + wstr;
				}
			}
			return L"0";
		case L'И': case L'и':
			if((flags & (1 << 4)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 4));
				if(wstr != L"0") {
					return L"4-И " + wstr;
				}
			}
			if((flags & (1 << 6)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 6));
				if(wstr != L"0") {
					return L"6-И " + wstr;
				}
			}
			if((flags & (1 << 7)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 7));
				if(wstr != L"0") {
					return L"7-И " + wstr;
				}
			}
			if((flags & (1 << 8)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 8));
				if(wstr != L"0") {
					return L"8-И " + wstr;
				}
			}
			return L"0";
		case L'Й': case L'й':
			if((flags & (1 << 1)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 1));
				if(wstr != L"0") {
					return L"1-Й " + wstr;
				}
			}
			if((flags & (1 << 5)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 5));
				if(wstr != L"0") {
					return L"5-Й " + wstr;
				}
			}
			return L"0";
		case L'К': case L'к':
			if((flags & (1 << 1)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 1));
				if(wstr != L"0") {
					return L"1-К " + wstr;
				}
			}
			if((flags & (1 << 5)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 5));
				if(wstr != L"0") {
					return L"5-К " + wstr;
				}
			}
			return L"0";
		case L'Л': case L'л':
			if((flags & (1 << 3)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 3));
				if(wstr != L"0") {
					return L"3-Л " + wstr;
				}
			}
			if((flags & (1 << 8)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 8));
				if(wstr != L"0") {
					return L"8-Л " + wstr;
				}
			}
			return L"0";
		case L'М': case L'м':
			if((flags & (1 << 6)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 6));
				if(wstr != L"0") {
					return L"6-М " + wstr;
				}
			}
			if((flags & (1 << 10)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 10));
				if(wstr != L"0") {
					return L"10-М " + wstr;
				}
			}
			return L"0";
		case L'Н': case L'н':
			if((flags & (1 << 7)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 7));
				if(wstr != L"0") {
					return L"7-Н " + wstr;
				}
			}
			if((flags & (1 << 9)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 9));
				if(wstr != L"0") {
					return L"9-Н " + wstr;
				}
			}
			return L"0";
		case L'О': case L'о':
			if((flags & (1 << 1)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 1));
				if(wstr != L"0") {
					return L"1-О " + wstr;
				}
			}
			if((flags & (1 << 4)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 4));
				if(wstr != L"0") {
					return L"4-О " + wstr;
				}
			}
			if((flags & (1 << 5)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 5));
				if(wstr != L"0") {
					return L"5-О " + wstr;
				}
			}
			if((flags & (1 << 7)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 7));
				if(wstr != L"0") {
					return L"7-О " + wstr;
				}
			}
			return L"0";
		case L'П': case L'п':
			if((flags & (1 << 4)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 4));
				if(wstr != L"0") {
					return L"4-П " + wstr;
				}
			}
			if((flags & (1 << 11)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 11));
				if(wstr != L"0") {
					return L"11-П " + wstr;
				}
			}
			return L"0";
		case L'Р': case L'р':
			if((flags & (1 << 2)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 2));
				if(wstr != L"0") {
					return L"2-Р " + wstr;
				}
			}
			if((flags & (1 << 12)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 12));
				if(wstr != L"0") {
					return L"12-Р " + wstr;
				}
			}
			return L"0";
		case L'С': case L'с':
			if((flags & (1 << 3)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 3));
				if(wstr != L"0") {
					return L"3-С " + wstr;
				}
			}
			if((flags & (1 << 8)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 8));
				if(wstr != L"0") {
					return L"8-С " + wstr;
				}
			}
			return L"0";
		case L'Т': case L'т':
			if((flags & (1 << 6)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 6));
				if(wstr != L"0") {
					return L"6-Т " + wstr;
				}
			}
			if((flags & (1 << 10)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 10));
				if(wstr != L"0") {
					return L"10-Т " + wstr;
				}
			}
			return L"0";
		case L'У': case L'у':
			if((flags & (1 << 2)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 2));
				if(wstr != L"0") {
					return L"2-У " + wstr;
				}
			}
			if((flags & (1 << 8)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 8));
				if(wstr != L"0") {
					return L"8-У " + wstr;
				}
			}
			if((flags & (1 << 9)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 9));
				if(wstr != L"0") {
					return L"9-У " + wstr;
				}
			}
			if((flags & (1 << 11)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 11));
				if(wstr != L"0") {
					return L"11-У " + wstr;
				}
			}
			return L"0";
		case L'Ф': case L'ф':
			if((flags & (1 << 1)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 1));
				if(wstr != L"0") {
					return L"1-Ф " + wstr;
				}
			}
			if((flags & (1 << 5)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 5));
				if(wstr != L"0") {
					return L"5-Ф " + wstr;
				}
			}
			return L"0";
		case L'Х': case L'х':
			if((flags & (1 << 7)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 7));
				if(wstr != L"0") {
					return L"7-Х " + wstr;
				}
			}
			if((flags & (1 << 9)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 9));
				if(wstr != L"0") {
					return L"9-Х " + wstr;
				}
			}
			return L"0";
		case L'Ц': case L'ц':
			if((flags & (1 << 4)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 4));
				if(wstr != L"0") {
					return L"4-Ц " + wstr;
				}
			}
			if((flags & (1 << 11)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 11));
				if(wstr != L"0") {
					return L"11-Ц " + wstr;
				}
			}
			return L"0";
		case L'Ч': case L'ч':
			if((flags & (1 << 2)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 2));
				if(wstr != L"0") {
					return L"2-Ч " + wstr;
				}
			}
			if((flags & (1 << 12)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 12));
				if(wstr != L"0") {
					return L"12-Ч " + wstr;
				}
			}
			return L"0";
		case L'Ш': case L'ш':
			if((flags & (1 << 3)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 3));
				if(wstr != L"0") {
					return L"3-Ш " + wstr;
				}
			}
			if((flags & (1 << 8)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 8));
				if(wstr != L"0") {
					return L"8-Ш " + wstr;
				}
			}
			return L"0";
		case L'Щ': case L'щ':
			if((flags & (1 << 6)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 6));
				if(wstr != L"0") {
					return L"6-Щ " + wstr;
				}
			}
			if((flags & (1 << 10)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 10));
				if(wstr != L"0") {
					return L"10-Щ " + wstr;
				}
			}
			return L"0";
		case L'Ъ': case L'ъ':
			if((flags & (1 << 7)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 7));
				if(wstr != L"0") {
					return L"7-Ъ " + wstr;
				}
			}
			return L"0";
		case L'Ы': case L'ы':
			if((flags & (1 << 9)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 9));
				if(wstr != L"0") {
					return L"9-Ы " + wstr;
				}
			}
			return L"0";
		case L'Ь': case L'ь':
			if((flags & (1 << 11)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 11));
				if(wstr != L"0") {
					return L"11-Ь " + wstr;
				}
			}
			return L"0";
		case L'Э': case L'э':
			if((flags & (1 << 4)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 4));
				if(wstr != L"0") {
					return L"4-Э " + wstr;
				}
			}
			return L"0";
		case L'Ю': case L'ю':
			if((flags & (1 << 6)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 6));
				if(wstr != L"0") {
					return L"6-Ю " + wstr;
				}
			}
			if((flags & (1 << 12)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 12));
				if(wstr != L"0") {
					return L"12-Ю " + wstr;
				}
			}
			return L"0";
		case L'Я': case L'я':
			if((flags & (1 << 3)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 3));
				if(wstr != L"0") {
					return L"3-Я " + wstr;
				}
			}
			if((flags & (1 << 10)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 10));
				if(wstr != L"0") {
					return L"10-Я " + wstr;
				}
			}
			return L"0";
		default:
			return construct (i + 1, flags);
		}
	}
}

int main () {
	locale loc ("rus_rus.866");
	wcout.imbue (loc);
	wcin.imbue (loc);
	while(true) {
		system ("cls");
		wcout << L"(Чтобы выйти из программы, наберите 'exit'.)\n\n\t\t\t\t 1: К Ф А Й О Д\n\t\t\t\t 2: У Е З Р Б Ч\n\t\t\t\t 3: С Л Я А В Ш\n\t\t\t\t 4: О Ц Э П Ж И\n\t\t\t\t 5: К Й Д Ф О Е\n\t\t\t\t 6: Г Щ Т И Ю М\n\t\t\t\t 7: О И Ъ Ё Х Н\n\t\t\t\t 8: В С Л И Ш У\n\t\t\t\t 9: Н Х У А Ы Ё\n\t\t\t\t10: Е М Т Щ Я Г\n\t\t\t\t11: Ц Ь П Ж Е У\n\t\t\t\t12: А Ч Р З Б Ю\n\nВведите слово для сборки: ";
		getline(wcin, inputStr);
		if(inputStr == L"exit") {
			break;
		}
		wstring outputStr = construct (0, 0);
		if(outputStr == L"") {
			wcout << L"\nВ следующий раз введите что-нибудь на русском языке. =/\n\n";
		} else if(outputStr == L"0") {
			wcout << L"\nТакое собрать не получится. =(\n\n";
		} else {
			wcout << L"\nКак-то так: " << outputStr << L"\n\n";
		}
		system ("pause");
	}
	return 0;
}