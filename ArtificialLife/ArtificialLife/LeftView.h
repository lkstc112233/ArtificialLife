
// LeftView.h : CLeftView ��Ľӿ�
//


#pragma once

class CArtificialLifeDoc;

class CLeftView : public CView
{
protected: // �������л�����
	CLeftView();
	DECLARE_DYNCREATE(CLeftView)

// ����
public:
	CArtificialLifeDoc* GetDocument();

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// ʵ��
public:
	virtual ~CLeftView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // LeftView.cpp �еĵ��԰汾
inline CArtificialLifeDoc* CLeftView::GetDocument()
   { return reinterpret_cast<CArtificialLifeDoc*>(m_pDocument); }
#endif

