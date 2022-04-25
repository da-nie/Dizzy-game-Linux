//****************************************************************************************************
//������������ ����������
//****************************************************************************************************
#include "cactionaddlife.h"

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
CActionAddLife::CActionAddLife(std::shared_ptr<IAction> iAction_Ptr)
{
 iAction_NextPtr=iAction_Ptr;
 Init();
}
//----------------------------------------------------------------------------------------------------
//����������
//----------------------------------------------------------------------------------------------------
CActionAddLife::~CActionAddLife()
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
void CActionAddLife::Execute(std::shared_ptr<IPart> iPart_Ptr,CGameState &cGameState)
{
 cGameState.AddLife();
 if (iAction_NextPtr.get()!=NULL) iAction_NextPtr->Execute(iPart_Ptr,cGameState);	
}
//----------------------------------------------------------------------------------------------------
//�������������
//----------------------------------------------------------------------------------------------------
void CActionAddLife::Init(void)
{
 if (iAction_NextPtr.get()!=NULL) iAction_NextPtr->Init();
}