#ifndef SYSTEM_H
#define SYSTEM_H

//****************************************************************************************************
//��������� �� ������� �������
//****************************************************************************************************

//****************************************************************************************************
//������������ ����������
//****************************************************************************************************
#include <vector>
#include <string>

//****************************************************************************************************
//��������� �������
//****************************************************************************************************

void CreateFileList(const std::string &path,std::vector<std::string> &vector_file_name);//������� ������ ������ ����������
void CreateDirectoryList(const std::string &path,std::vector<std::string> &vector_directory_name);//������� ������ ��������� ����������
void MakeDirectory(const std::string &directory_name);//������� �������
long double GetSecondCounter(void);//�������� ��������� ����� � ��������
void PauseInMs(size_t ms);//����� � �������������
void PauseInUs(size_t us);//����� � �������������
std::string GetCurrentPath(void);//�������� ������� ����������
std::string GetPathDivider(void);//�������� ����������� ��������
void PutMessage(const std::string &message);//������� ���������
void PutMessageToConsole(const std::string &message);//������� ��������� � �������
void CopyFile(const std::string &source_file,const std::string &target_file);//����������� ����
void MoveFileTo(const std::string &source_file,const std::string &target_file);//��������� ����

#endif
