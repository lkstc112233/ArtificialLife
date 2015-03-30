
// ArtificialLifeView.cpp : CArtificialLifeView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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

// CArtificialLifeView 构造/析构

CArtificialLifeView::CArtificialLifeView()
{
	// TODO:  在此处添加构造代码

}

CArtificialLifeView::~CArtificialLifeView()
{
}

BOOL CArtificialLifeView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CArtificialLifeView 绘制

void CArtificialLifeView::OnDraw(CDC* /*pDC*/)
{
	CArtificialLifeDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO:  在此处为本机数据添加绘制代码
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


// CArtificialLifeView 诊断

#ifdef _DEBUG
void CArtificialLifeView::AssertValid() const
{
	CView::AssertValid();
}

void CArtificialLifeView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CArtificialLifeDoc* CArtificialLifeView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CArtificialLifeDoc)));
	return (CArtificialLifeDoc*)m_pDocument;
}
#endif //_DEBUG


// CArtificialLifeView 消息处理程序
