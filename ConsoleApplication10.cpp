#include <iostream>
#include "string.h"
using namespace std;
void func(void);
int main()
{
	func();
}
void func(void) {
	char S1[] = "string string";
	char S2[] = "string56string557766";
	char *rez; // вказівник для зберігання адреси пам'яті рядка
	rez = strstr(S2, S1);
	if (rez == S2)
		cout << "True";
	else cout << "False";
}
