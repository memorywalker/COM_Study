// People.cpp : CPeople ��ʵ��

#include "stdafx.h"
#include "People.h"


// CPeople



STDMETHODIMP CPeople::GetGirl(LONG nums)
{
	// TODO: �ڴ����ʵ�ִ���
	Fire_OnFindGirl(nums);
	return S_OK;
}
