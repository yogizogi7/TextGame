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

	//	const char* dialog[SIZE] = {"�ȳ��ϼ���","��������","Ž���Դϴ�","���� ���ΰ���","�ֺ��� ����� �Ͼ�� ��� ���糪�Խ��ϴ�","�ñ��Ѱ� �������","���� 11�ð�/ �� /���ϰ�����?","�� �տ� ��å�ϰ� �־����ϴ�","���� ��̴� �� �����Ű���","�����"};
	//	int i = 0;
	//	
	//	//0x0000:������ ���� ���� ���� ȣ�� �������� �������� ���� ����
	//	//0x0001:������ �������� �ְ� ȣ�� �������� �������� ���� ����
	//	//0x8000:������ �������� ���� ȣ�� �������� �����ִ� ����
	//	//0x8001:������ �������� �ְ� ȣ�� �������� �����ִ� ����
	//	while (1) {
	//		if (GetAsyncKeyState(VK_SPACE)&0x0001) {
	//			if (i % 2 == 0) {
	//				printf("Ž�� : ");
	//			} 
	//			else {
	//				printf("������ : ");
	//			}
	//			printf("%s\n", dialog[i]);
	//			if (i == SIZE-1) {
	//				Sleep(3000);
	//				printf("��ȭ�� ����Ǿ����ϴ�.");
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