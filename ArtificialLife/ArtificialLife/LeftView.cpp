
// LeftView.cpp : CLeftView ���ʵ��
//

#include "stdafx.h"
#include "ArtificialLife.h"

#include "ArtificialLifeDoc.h"
#include "LeftView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CLeftView

IMPLEMENT_DYNCREATE(CLeftView, CView)

BEGIN_MESSAGE_MAP(CLeftView, CView)
END_MESSAGE_MAP()


// CLeftView ����/����

CLeftView::CLeftView()
{
	// TODO:  �ڴ˴���ӹ������
}

CLeftView::~CLeftView()
{
}

BOOL CLeftView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  �ڴ˴�ͨ���޸� CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CArtificialLifeView ����

void CLeftView::OnDraw(CDC* /*pDC*/)
{
	CArtificialLifeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CLeftView ���

#ifdef _DEBUG
void CLeftView::AssertValid() const
{
	CView::AssertValid();
}

void CLeftView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CArtificialLifeDoc* CLeftView::GetDocument() // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CArtificialLifeDoc)));
	return (CArtificialLifeDoc*)m_pDocument;
}
#endif //_DEBUG


// CLeftView ��Ϣ�������
