#include <stdio.h>
#include <windows.h>
void Position(int x, int y) {
	COORD position = { x,y };
	//x�� y���� �����ϴ� ����ü�Դϴ�.


	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
	//�ܼ� Ŀ���� ��ǥ�� �����ϴ� �Լ��Դϴ�.
}
int main() {
	while (1) {
		Position(10, 10);
		printf("��");
		Position(5, 5);
		printf("��");
		system("cls");
	}
	
	return 0;
}