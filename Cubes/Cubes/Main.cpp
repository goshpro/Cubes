#include <iostream>
#include <string>

using namespace std;

wstring inputStr;
wstring construct (size_t i, int flags) {
	if(i == inputStr.length ()) {
		return L"";
	} else {
		switch(inputStr[i]) {
		case L'�': case L'�':
			if((flags & (1 << 1)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 1));
				if(wstr != L"0") {
					return L"1-� " + wstr;
				}
			}
			if((flags & (1 << 3)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 3));
				if(wstr != L"0") {
					return L"3-� " + wstr;
				}
			}
			if((flags & (1 << 9)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 9));
				if(wstr != L"0") {
					return L"9-� " + wstr;
				}
			}
			if((flags & (1 << 12)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 12));
				if(wstr != L"0") {
					return L"12-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 2)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 2));
				if(wstr != L"0") {
					return L"2-� " + wstr;
				}
			}
			if((flags & (1 << 12)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 12));
				if(wstr != L"0") {
					return L"12-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 3)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 3));
				if(wstr != L"0") {
					return L"3-� " + wstr;
				}
			}
			if((flags & (1 << 8)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 8));
				if(wstr != L"0") {
					return L"8-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 6)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 6));
				if(wstr != L"0") {
					return L"6-� " + wstr;
				}
			}
			if((flags & (1 << 10)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 10));
				if(wstr != L"0") {
					return L"10-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 1)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 1));
				if(wstr != L"0") {
					return L"1-� " + wstr;
				}
			}
			if((flags & (1 << 5)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 5));
				if(wstr != L"0") {
					return L"5-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 2)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 2));
				if(wstr != L"0") {
					return L"2-� " + wstr;
				}
			}
			if((flags & (1 << 5)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 5));
				if(wstr != L"0") {
					return L"5-� " + wstr;
				}
			}
			if((flags & (1 << 10)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 10));
				if(wstr != L"0") {
					return L"10-� " + wstr;
				}
			}
			if((flags & (1 << 11)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 11));
				if(wstr != L"0") {
					return L"11-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 7)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 7));
				if(wstr != L"0") {
					return L"7-� " + wstr;
				}
			}
			if((flags & (1 << 9)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 9));
				if(wstr != L"0") {
					return L"9-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 4)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 4));
				if(wstr != L"0") {
					return L"4-� " + wstr;
				}
			}
			if((flags & (1 << 11)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 11));
				if(wstr != L"0") {
					return L"11-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 2)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 2));
				if(wstr != L"0") {
					return L"2-� " + wstr;
				}
			}
			if((flags & (1 << 12)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 12));
				if(wstr != L"0") {
					return L"12-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 4)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 4));
				if(wstr != L"0") {
					return L"4-� " + wstr;
				}
			}
			if((flags & (1 << 6)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 6));
				if(wstr != L"0") {
					return L"6-� " + wstr;
				}
			}
			if((flags & (1 << 7)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 7));
				if(wstr != L"0") {
					return L"7-� " + wstr;
				}
			}
			if((flags & (1 << 8)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 8));
				if(wstr != L"0") {
					return L"8-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 1)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 1));
				if(wstr != L"0") {
					return L"1-� " + wstr;
				}
			}
			if((flags & (1 << 5)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 5));
				if(wstr != L"0") {
					return L"5-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 1)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 1));
				if(wstr != L"0") {
					return L"1-� " + wstr;
				}
			}
			if((flags & (1 << 5)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 5));
				if(wstr != L"0") {
					return L"5-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 3)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 3));
				if(wstr != L"0") {
					return L"3-� " + wstr;
				}
			}
			if((flags & (1 << 8)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 8));
				if(wstr != L"0") {
					return L"8-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 6)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 6));
				if(wstr != L"0") {
					return L"6-� " + wstr;
				}
			}
			if((flags & (1 << 10)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 10));
				if(wstr != L"0") {
					return L"10-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 7)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 7));
				if(wstr != L"0") {
					return L"7-� " + wstr;
				}
			}
			if((flags & (1 << 9)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 9));
				if(wstr != L"0") {
					return L"9-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 1)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 1));
				if(wstr != L"0") {
					return L"1-� " + wstr;
				}
			}
			if((flags & (1 << 4)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 4));
				if(wstr != L"0") {
					return L"4-� " + wstr;
				}
			}
			if((flags & (1 << 5)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 5));
				if(wstr != L"0") {
					return L"5-� " + wstr;
				}
			}
			if((flags & (1 << 7)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 7));
				if(wstr != L"0") {
					return L"7-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 4)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 4));
				if(wstr != L"0") {
					return L"4-� " + wstr;
				}
			}
			if((flags & (1 << 11)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 11));
				if(wstr != L"0") {
					return L"11-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 2)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 2));
				if(wstr != L"0") {
					return L"2-� " + wstr;
				}
			}
			if((flags & (1 << 12)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 12));
				if(wstr != L"0") {
					return L"12-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 3)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 3));
				if(wstr != L"0") {
					return L"3-� " + wstr;
				}
			}
			if((flags & (1 << 8)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 8));
				if(wstr != L"0") {
					return L"8-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 6)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 6));
				if(wstr != L"0") {
					return L"6-� " + wstr;
				}
			}
			if((flags & (1 << 10)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 10));
				if(wstr != L"0") {
					return L"10-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 2)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 2));
				if(wstr != L"0") {
					return L"2-� " + wstr;
				}
			}
			if((flags & (1 << 8)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 8));
				if(wstr != L"0") {
					return L"8-� " + wstr;
				}
			}
			if((flags & (1 << 9)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 9));
				if(wstr != L"0") {
					return L"9-� " + wstr;
				}
			}
			if((flags & (1 << 11)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 11));
				if(wstr != L"0") {
					return L"11-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 1)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 1));
				if(wstr != L"0") {
					return L"1-� " + wstr;
				}
			}
			if((flags & (1 << 5)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 5));
				if(wstr != L"0") {
					return L"5-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 7)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 7));
				if(wstr != L"0") {
					return L"7-� " + wstr;
				}
			}
			if((flags & (1 << 9)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 9));
				if(wstr != L"0") {
					return L"9-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 4)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 4));
				if(wstr != L"0") {
					return L"4-� " + wstr;
				}
			}
			if((flags & (1 << 11)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 11));
				if(wstr != L"0") {
					return L"11-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 2)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 2));
				if(wstr != L"0") {
					return L"2-� " + wstr;
				}
			}
			if((flags & (1 << 12)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 12));
				if(wstr != L"0") {
					return L"12-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 3)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 3));
				if(wstr != L"0") {
					return L"3-� " + wstr;
				}
			}
			if((flags & (1 << 8)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 8));
				if(wstr != L"0") {
					return L"8-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 6)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 6));
				if(wstr != L"0") {
					return L"6-� " + wstr;
				}
			}
			if((flags & (1 << 10)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 10));
				if(wstr != L"0") {
					return L"10-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 7)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 7));
				if(wstr != L"0") {
					return L"7-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 9)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 9));
				if(wstr != L"0") {
					return L"9-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 11)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 11));
				if(wstr != L"0") {
					return L"11-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 4)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 4));
				if(wstr != L"0") {
					return L"4-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 6)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 6));
				if(wstr != L"0") {
					return L"6-� " + wstr;
				}
			}
			if((flags & (1 << 12)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 12));
				if(wstr != L"0") {
					return L"12-� " + wstr;
				}
			}
			return L"0";
		case L'�': case L'�':
			if((flags & (1 << 3)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 3));
				if(wstr != L"0") {
					return L"3-� " + wstr;
				}
			}
			if((flags & (1 << 10)) == 0) {
				wstring wstr = construct (i + 1, flags | (1 << 10));
				if(wstr != L"0") {
					return L"10-� " + wstr;
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
		wcout << L"(����� ����� �� ���������, �������� 'exit'.)\n\n\t\t\t\t 1: � � � � � �\n\t\t\t\t 2: � � � � � �\n\t\t\t\t 3: � � � � � �\n\t\t\t\t 4: � � � � � �\n\t\t\t\t 5: � � � � � �\n\t\t\t\t 6: � � � � � �\n\t\t\t\t 7: � � � � � �\n\t\t\t\t 8: � � � � � �\n\t\t\t\t 9: � � � � � �\n\t\t\t\t10: � � � � � �\n\t\t\t\t11: � � � � � �\n\t\t\t\t12: � � � � � �\n\n������� ����� ��� ������: ";
		getline(wcin, inputStr);
		if(inputStr == L"exit") {
			break;
		}
		wstring outputStr = construct (0, 0);
		if(outputStr == L"") {
			wcout << L"\n� ��������� ��� ������� ���-������ �� ������� �����. =/\n\n";
		} else if(outputStr == L"0") {
			wcout << L"\n����� ������� �� ���������. =(\n\n";
		} else {
			wcout << L"\n���-�� ���: " << outputStr << L"\n\n";
		}
		system ("pause");
	}
	return 0;
}