#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10000
void Print(const char* fileName) {
	FILE* file = fopen(fileName, "r");
	char buffer[SIZE] = { 0, };
	//ù ���� �Ű����� : ���� �����͸� ������ �޸� ������ ������
	//�� ��° �Ű����� : �� ������ �׸��� ũ��
	//�� ���� �Ű����� : �о�� ������ �׸��� ��
	//�� ���� �Ű����� : �����͸� �о�� ������ ������ ����
	fread(buffer, 1, SIZE, file);
	printf("%s", buffer);
	fclose(file);
}

int main() {
#pragma region ���� �����

#pragma region ���� ����

	//ù ���� �Ű�����(������ �̸�)
	//�� ���� �Ű�����(����¸��)
	//	FILE* file = fopen("data.txt","w");
	//	fputs("Character Information\n",file);
	//	fclose(file);
#pragma endregion
#pragma region ���� �б�

#pragma endregion


#pragma endregion


	Print("metamong.txt");

	return 0;
}