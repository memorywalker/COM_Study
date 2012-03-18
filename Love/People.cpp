// People.cpp : CPeople 的实现

#include "stdafx.h"
#include "People.h"


// CPeople



STDMETHODIMP CPeople::GetGirl(LONG nums)
{
	// TODO: 在此添加实现代码
	Fire_OnFindGirl(nums);
	return S_OK;
}
