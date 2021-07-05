
// Draw Polyline on MFC view using CDC classView.h : interface of the CDrawPolylineonMFCviewusingCDCclassView class
//

#pragma once


class CDrawPolylineonMFCviewusingCDCclassView : public CView
{
protected: // create from serialization only
	CDrawPolylineonMFCviewusingCDCclassView() noexcept;
	DECLARE_DYNCREATE(CDrawPolylineonMFCviewusingCDCclassView)

// Attributes
public:
	CDrawPolylineonMFCviewusingCDCclassDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CDrawPolylineonMFCviewusingCDCclassView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Draw Polyline on MFC view using CDC classView.cpp
inline CDrawPolylineonMFCviewusingCDCclassDoc* CDrawPolylineonMFCviewusingCDCclassView::GetDocument() const
   { return reinterpret_cast<CDrawPolylineonMFCviewusingCDCclassDoc*>(m_pDocument); }
#endif

