#include <stdio.h>
#include <windows.h>
#include <conio.h>
#define UP 72
#define LEFT 75
#define Right 77
#define Down 80
void Position(int x, int y) {
	COORD position = { x,y };
	//x�� y���� �����ϴ� ����ü�Դϴ�.

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
	//�ܼ� Ŀ���� ��ǥ�� �����ϴ� �Լ��Դϴ�.
}
int main() {


	char key = 0;
	int x = 0, y = 0;
	while (1) {

		key = _getch();
		if (key == -32) {
			key = _getch();
		}
		system("cls");
		switch (key) {
		case UP:printf("UP\n");
			y--;
			break;
		case LEFT:printf("LEFT\n");
			x--;
			break;
		case Right:printf("RIGHT\n");
			x++;
			break;

		case Down:printf("Down\n");
			y++;
			break;
		default:printf("Exception\n");
			break;
		}
		Position(10 + x, 10 + y);
		printf("��");
		Position(5 + x, 5 + y);
		printf("��");



	}
	Release();
	return 0;
}