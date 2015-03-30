
// ArtificialLifeView.cpp : CArtificialLifeView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ArtificialLife.h"
#endif

#include "ArtificialLifeDoc.h"
#include "ArtificialLifeView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CArtificialLifeView

IMPLEMENT_DYNCREATE(CArtificialLifeView, CView)

BEGIN_MESSAGE_MAP(CArtificialLifeView, CView)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CArtificialLifeView ����/����

CArtificialLifeView::CArtificialLifeView()
{
	// TODO:  �ڴ˴���ӹ������

}

CArtificialLifeView::~CArtificialLifeView()
{
}

BOOL CArtificialLifeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CArtificialLifeView ����

void CArtificialLifeView::OnDraw(CDC* /*pDC*/)
{
	CArtificialLifeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}

void CArtificialLifeView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CArtificialLifeView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CArtificialLifeView ���

#ifdef _DEBUG
void CArtificialLifeView::AssertValid() const
{
	CView::AssertValid();
}

void CArtificialLifeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CArtificialLifeDoc* CArtificialLifeView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CArtificialLifeDoc)));
	return (CArtificialLifeDoc*)m_pDocument;
}
#endif //_DEBUG


// CArtificialLifeView ��Ϣ�������
