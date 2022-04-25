#ifndef C_ACTION_ADD_ITEM_H
#define C_ACTION_ADD_ITEM_H

//****************************************************************************************************
//����� �������� "�������� ��������� ������� �����"
//****************************************************************************************************

//****************************************************************************************************
//������������ ����������
//****************************************************************************************************
//****************************************************************************************************
#include "iaction.h"
#include <stdint.h>
#include <memory>

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
//����� �������� "�������� ��������� ������� �����"
//****************************************************************************************************
class CActionAddItem:public IAction
{
 public:
  //-������������---------------------------------------------------------------------------------------
  //-���������------------------------------------------------------------------------------------------
  //-���������------------------------------------------------------------------------------------------
 private:
  //-����������-----------------------------------------------------------------------------------------
  std::shared_ptr<IAction> iAction_NextPtr;//��������� �� ��������� ��������
 public:
  //-�����������----------------------------------------------------------------------------------------
  CActionAddItem(std::shared_ptr<IAction> iAction_Ptr=std::shared_ptr<IAction>(NULL));
  //-����������-----------------------------------------------------------------------------------------
  ~CActionAddItem();
 public:
  //-�������� �������-----------------------------------------------------------------------------------
  void Execute(std::shared_ptr<IPart> iPart_Ptr,CGameState &cGameState);//��������� �������� � ���������
  void Init(void);//�������������
 private:
  //-�������� �������-----------------------------------------------------------------------------------  
};

#endif