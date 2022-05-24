#ifndef C_CONDITIONAL_OF_PICK_UP_H
#define C_CONDITIONAL_OF_PICK_UP_H

//****************************************************************************************************
//����� ��������� ��������� "����� ������"
//****************************************************************************************************

//****************************************************************************************************
//������������ ����������
//****************************************************************************************************
#include "iconditionalexpression.h"
#include <string>
#include <stdint.h>
#include "../Actions/iaction.h"

//****************************************************************************************************
//����������������
//****************************************************************************************************

//****************************************************************************************************
//���������
//****************************************************************************************************

//****************************************************************************************************
//��������������� ����������
//****************************************************************************************************

//****************************************************************************************************
//����� ��������� ��������� "����� ������"
//****************************************************************************************************
class CConditionalOfPickUp:public IConditionalExpression
{
 public:
  //-������������---------------------------------------------------------------------------------------
  //-���������------------------------------------------------------------------------------------------
  //-���������------------------------------------------------------------------------------------------
 private:
  //-����������-----------------------------------------------------------------------------------------
  std::string Name;//��� �������, ������� ����� �����
  std::shared_ptr<IAction> iAction_Ptr;//��������� �� ����������� ��������
 public:
  //-�����������----------------------------------------------------------------------------------------
  CConditionalOfPickUp(const std::string &name,std::shared_ptr<IAction> iAction_SetPtr);
  //-����������-----------------------------------------------------------------------------------------
  ~CConditionalOfPickUp();
 public:
  //-�������� �������-----------------------------------------------------------------------------------
  void Execute(int32_t dizzy_x,int32_t dizzy_y,int32_t dizzy_width,int32_t dizzy_height,int32_t part_width,int32_t part_height,bool use,bool timer,CGameState &cGameState);//��������� ������� � ��������� ��������
 private:
  //-�������� �������-----------------------------------------------------------------------------------  
  void Init(void);//�������������
};

#endif