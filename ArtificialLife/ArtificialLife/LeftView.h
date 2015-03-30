
// LeftView.h : CLeftView 类的接口
//


#pragma once

class CArtificialLifeDoc;

class CLeftView : public CView
{
protected: // 仅从序列化创建
	CLeftView();
	DECLARE_DYNCREATE(CLeftView)

// 特性
public:
	CArtificialLifeDoc* GetDocument();

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// 实现
public:
	virtual ~CLeftView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // LeftView.cpp 中的调试版本
inline CArtificialLifeDoc* CLeftView::GetDocument()
   { return reinterpret_cast<CArtificialLifeDoc*>(m_pDocument); }
#endif

