
// ArtificialLifeView.h : CArtificialLifeView ��Ľӿ�
//

#pragma once


class CArtificialLifeView : public CView
{
protected: // �������л�����
	CArtificialLifeView();
	DECLARE_DYNCREATE(CArtificialLifeView)

// ����
public:
	CArtificialLifeDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CArtificialLifeView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // ArtificialLifeView.cpp �еĵ��԰汾
inline CArtificialLifeDoc* CArtificialLifeView::GetDocument() const
   { return reinterpret_cast<CArtificialLifeDoc*>(m_pDocument); }
#endif

