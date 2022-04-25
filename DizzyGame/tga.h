#ifndef TGA_H
#define TGA_H

//****************************************************************************************************
//������� ������ � tga-������
//****************************************************************************************************

//****************************************************************************************************
//������������ ����������
//****************************************************************************************************
#include <stdio.h>
#include <stdint.h>

//****************************************************************************************************
//����������������
//****************************************************************************************************

//****************************************************************************************************
//���������
//****************************************************************************************************

//****************************************************************************************************
//���������
//****************************************************************************************************
//��������� TGA-�����
#pragma pack(1)
struct STGAHeader
{
 uint8_t identsize;//������ ���� ��������� 
 uint8_t colorMapType;//���� �� �������:0-���,1-����
 uint8_t imageType;//��� ��������:0-���,1-��������� �����,2-RGB,3-������� ������, (3-� ��� - RLE- �����������)
 uint16_t colorMapStart;//������ ����� ������
 uint16_t colorMapLength;//���������� ������ � �����
 uint8_t colorMapBits;//����������� �������
 uint16_t xstart;//��������� ���������� �����������
 uint16_t ystart;                 
 uint16_t width;//������ ����������� �� X
 uint16_t height;//������ ����������� �� Y
 uint8_t bits;//��������� ��� �� ������� (8,16,24,32)
 uint8_t descriptor;//���������� ������������
};
#pragma pack()

//****************************************************************************************************
//��������������� ����������
//****************************************************************************************************

//****************************************************************************************************
//��������� �������
//****************************************************************************************************
uint8_t *LoadTGAFromFile(const char *file_name,int32_t &width,int32_t &height);//��������� tga-����
bool SaveTGA(const char *file_name,int32_t width,int32_t height,uint8_t *image);//��������� �������� � tga-����

#endif
