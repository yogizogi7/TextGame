#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Shuffle(int array[],int size) {
	int a = 0;
	for (int i = 0;i < size;i++) {
		
		int random = rand() % size;
		a = array[i];
		array[i] = array[random];
		array[random] = a;
	}
}
int main() {
#pragma region �����Լ�
	//	srand(time(NULL));
	//	int list[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int size = sizeof(list) / sizeof(int);
	//	Shuffle(list, size);
	//	for (int i = 0;i < size;i++) {
	//		printf("%d\n", list[i]);
	//	}
#pragma endregion
#pragma region �����͹迭

	const char* dialog[3];
	dialog[0] = "�ȳ��ϼ���";
	dialog[1] = "�����Ű���";
	dialog[2] = "Ž���Դϴ�";
	for (int i = 0;i < 3;i++) {
		printf("%s\n", dialog[i]);
	}

#pragma endregion

	

	return 0;
}