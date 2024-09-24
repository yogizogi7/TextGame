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
	//x와 y축을 설정하는 구조체입니다.

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
	//콘솔 커서의 좌표를 설정하는 함수입니다.
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
	Character character = { 1,1,"◆" };
	char key = 0;
	character.x = 0, character.y = 0;
	Character present = { 1,1,"◆" };
	while (1) {
		if (_kbhit) {
			key = _getch();
			if (key == -32) {
				key = _getch();
			}
			system("cls");
			switch (key) {
			case UP:
				character.y--;
				break;
			case LEFT:
				character.x--;
				break;
			case Right:
				character.x++;
				break;

			case Down:
				character.y++;
				break;
			default:
				break;
			}
			for (int i = 0; i < WIDTH; i++) {
				for (int j = 0; j < HEIGHT; j++) {
					if (maze[i][j] == 1) {
						printf("□");
					}
					else if (maze[i][j] == 2) {
						printf("◎");
					}
					else {
						printf("  ");
					}
				}
				printf("\n");
			}
			if (maze[character.y][character.x] == 1) {
				character.x = present.x;
				character.y = present.y;

			}
			Position(2 * character.x, character.y);


			printf("%s", character.shape);
			present.x = character.x;
			present.y = character.y;

		}
	}

	return 0;
}