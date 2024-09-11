#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define SIZE 10
void Shuffle(int array[], int size) {
	int a = 0;
	for (int i = 0;i < size;i++) {

		int random = rand() % size;
		a = array[i];
		array[i] = array[random];
		array[random] = a;
	}
}
int main() {
#pragma region 셔플함수
	//	srand(time(NULL));
	//	int list[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int size = sizeof(list) / sizeof(int);
	//	Shuffle(list, size);
	//	for (int i = 0;i < size;i++) {
	//		printf("%d\n", list[i]);
	//	}
#pragma endregion
#pragma region 포인터배열

	//	const char* dialog[SIZE] = {"안녕하세요","누구시죠","탐정입니다","무슨 일인가요","주변에 사건이 일어나서 잠시 조사나왔습니다","궁금한거 물어보세요","어제 11시경/ 에 /뭐하고계셨죠?","집 앞에 산책하고 있었습니다","같이 계셨던 분 있으신가요","없어요"};
	//	int i = 0;
	//	
	//	//0x0000:이전에 누른 적이 없고 호출 시점에도 눌려있지 않은 상태
	//	//0x0001:이전에 누른적이 있고 호출 시점에도 눌려있지 않은 상태
	//	//0x8000:이전에 누른적이 없고 호출 시점에는 눌려있는 상태
	//	//0x8001:이전에 누른적이 있고 호출 시점에는 눌려있는 상태
	//	while (1) {
	//		if (GetAsyncKeyState(VK_SPACE)&0x0001) {
	//			if (i % 2 == 0) {
	//				printf("탐정 : ");
	//			} 
	//			else {
	//				printf("용의자 : ");
	//			}
	//			printf("%s\n", dialog[i]);
	//			if (i == SIZE-1) {
	//				Sleep(3000);
	//				printf("대화가 종료되었습니다.");
	//				break;
	//			}
	//			i++;
	//		}
	//			
	//		
	//	}
	//	

#pragma endregion



	return 0;
}