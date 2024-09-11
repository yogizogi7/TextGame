#include <stdio.h>
#include <windows.h>
void Position(int x, int y) {
	COORD position = { x,y };
	//x와 y축을 설정하는 구조체입니다.


	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
	//콘솔 커서의 좌표를 설정하는 함수입니다.
}
int main() {
	while (1) {
		Position(10, 10);
		printf("☆");
		Position(5, 5);
		printf("◎");
		system("cls");
	}
	
	return 0;
}