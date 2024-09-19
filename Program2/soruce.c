#include <stdio.h>
#include <windows.h>
#include <conio.h>
#define UP 72
#define LEFT 75
#define Right 77
#define Down 80
#define WIDTH 11
#define HEIGHT 11
void Position(int x, int y) {
	COORD position = { x,y };
	//x�� y���� �����ϴ� ����ü�Դϴ�.

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
	//�ܼ� Ŀ���� ��ǥ�� �����ϴ� �Լ��Դϴ�.
}
typedef struct Character {
	int x;
	int y;
	const char* shape;
}Character;

int main() {
	char maze[WIDTH][HEIGHT] = { {1,1,1,1,1,1,1,1,1,1,1}, {1,0,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,0,1},{1,0,0,0,0,0,0,0,0,0,1},
		{1,1,0,1,1,1,1,1,0,0,1},{1,0,0,0,0,1,0,0,0,0,1},
		{1,0,0,1,0,1,0,1,1,0,1},{1,0,1,0,0,1,0,1,0,0,1},
		{1,0,1,1,0,1,1,1,1,1,1},{1,0,1,0,0,0,0,0,0,0,2} ,{1,1,1,1,1,1,1,1,1,1,1} };
	Character character = { 1,1,"��" };
	char pastX, pastY;
	char key = 0;
	int x = 0, y = 0;
	while (1) {

		key = _getch();
		if (key == -32) {
			key = _getch();
		}
		system("cls");
		switch (key) {
		case UP:
			y--;
			break;
		case LEFT:
			x--;
			break;
		case Right:
			x++;
			break;

		case Down:
			y++;
			break;
		default:
			break;
		}
		for (int i = 0; i < WIDTH; i++) {
			for (int j = 0; j < HEIGHT; j++) {
				if (maze[i][j] == 1) {
					printf("��");
				}
				else if (maze[i][j] == 2) {
					printf("��");
				}
				else {
					printf("  ");
				}
			}
			printf("\n");
		}
		Position(2 + 2*x, 1+y);
		
		printf("��");
		pastX = 2 + 2 * x;
		pastY = 1 + y;


	}

	return 0;
}