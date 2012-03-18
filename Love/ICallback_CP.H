
// 向导生成的连接点代理类
// 警告: 此文件可以由向导重新生成


#pragma once

template<class T>
class CProxyICallback :
	public ATL::IConnectionPointImpl<T, &__uuidof(ICallback)>
{
public:
	HRESULT Fire_OnFindGirl(LONG nums)
	{
		HRESULT hr = S_OK;
		T * pThis = static_cast<T *>(this);
		int cConnections = m_vec.GetSize();

		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			pThis->Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			pThis->Unlock();

			ICallback * pConnection = static_cast<ICallback *>(punkConnection.p);

			if (pConnection)
			{
				hr = pConnection->OnFindGirl(nums);
			}
		}
		return hr;
	}
};

