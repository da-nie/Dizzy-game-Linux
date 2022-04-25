//****************************************************************************************************
//������������ ����������
//****************************************************************************************************
#include "cactionchangeposition.h"

//****************************************************************************************************
//���������� ����������
//****************************************************************************************************

//****************************************************************************************************
//���������
//****************************************************************************************************

//****************************************************************************************************
//����������������
//****************************************************************************************************

//****************************************************************************************************
//����������� � ����������
//****************************************************************************************************

//----------------------------------------------------------------------------------------------------
//�����������
//----------------------------------------------------------------------------------------------------
CActionChangePosition::CActionChangePosition(int32_t x,int32_t y,std::shared_ptr<IAction> iAction_Ptr)
{ 
 X=x;
 Y=y;
 iAction_NextPtr=iAction_Ptr;
 Init();
}
//----------------------------------------------------------------------------------------------------
//����������
//----------------------------------------------------------------------------------------------------
CActionChangePosition::~CActionChangePosition()
{
}

//****************************************************************************************************
//�������� �������
//****************************************************************************************************

//----------------------------------------------------------------------------------------------------
//
//----------------------------------------------------------------------------------------------------

//****************************************************************************************************
//�������� �������
//****************************************************************************************************

//----------------------------------------------------------------------------------------------------
//��������� �������� � ���������
//----------------------------------------------------------------------------------------------------
void CActionChangePosition::Execute(std::shared_ptr<IPart> iPart_Ptr,CGameState &cGameState)
{
 iPart_Ptr->BlockPosX=X;
 iPart_Ptr->BlockPosY=Y;
 if (iAction_NextPtr.get()!=NULL) iAction_NextPtr->Execute(iPart_Ptr,cGameState);	
}
//----------------------------------------------------------------------------------------------------
//�������������
//----------------------------------------------------------------------------------------------------
void CActionChangePosition::Init(void)
{
 if (iAction_NextPtr.get()!=NULL) iAction_NextPtr->Init();
}