
// Draw Polyline on MFC view using CDC classView.cpp : implementation of the CDrawPolylineonMFCviewusingCDCclassView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Draw Polyline on MFC view using CDC class.h"
#endif

#include "Draw Polyline on MFC view using CDC classDoc.h"
#include "Draw Polyline on MFC view using CDC classView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDrawPolylineonMFCviewusingCDCclassView

IMPLEMENT_DYNCREATE(CDrawPolylineonMFCviewusingCDCclassView, CView)

BEGIN_MESSAGE_MAP(CDrawPolylineonMFCviewusingCDCclassView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CDrawPolylineonMFCviewusingCDCclassView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CDrawPolylineonMFCviewusingCDCclassView construction/destruction

CDrawPolylineonMFCviewusingCDCclassView::CDrawPolylineonMFCviewusingCDCclassView() noexcept
{
	// TODO: add construction code here

}

CDrawPolylineonMFCviewusingCDCclassView::~CDrawPolylineonMFCviewusingCDCclassView()
{
}

BOOL CDrawPolylineonMFCviewusingCDCclassView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CDrawPolylineonMFCviewusingCDCclassView drawing

void CDrawPolylineonMFCviewusingCDCclassView::OnDraw(CDC* pDC)
{
	CPoint Pt[7];
	Pt[0] = CPoint(80, 150);
	Pt[1] = CPoint(820, 150);
	Pt[2] = CPoint(820, 620);
	Pt[3] = CPoint(1080, 620);
	CDrawPolylineonMFCviewusingCDCclassDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	pDC->Polyline(Pt,4);
	// TODO: add draw code for native data here
}


// CDrawPolylineonMFCviewusingCDCclassView printing


void CDrawPolylineonMFCviewusingCDCclassView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CDrawPolylineonMFCviewusingCDCclassView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDrawPolylineonMFCviewusingCDCclassView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDrawPolylineonMFCviewusingCDCclassView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CDrawPolylineonMFCviewusingCDCclassView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CDrawPolylineonMFCviewusingCDCclassView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CDrawPolylineonMFCviewusingCDCclassView diagnostics

#ifdef _DEBUG
void CDrawPolylineonMFCviewusingCDCclassView::AssertValid() const
{
	CView::AssertValid();
}

void CDrawPolylineonMFCviewusingCDCclassView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDrawPolylineonMFCviewusingCDCclassDoc* CDrawPolylineonMFCviewusingCDCclassView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDrawPolylineonMFCviewusingCDCclassDoc)));
	return (CDrawPolylineonMFCviewusingCDCclassDoc*)m_pDocument;
}
#endif //_DEBUG


// CDrawPolylineonMFCviewusingCDCclassView message handlers
