
// PatternBrushPracticeDlg.h: 헤더 파일
//

#pragma once


// CPatternBrushPracticeDlg 대화 상자
class CPatternBrushPracticeDlg : public CDialogEx
{
private:
	CBrush m_normal_brush, m_small_brush;
	CImage m_normal_image, m_small_image, m_mem_view;
	int m_radius = 10, m_alpha = 0, m_is_clicked = 0;
// 생성입니다.
public:
	CPatternBrushPracticeDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PATTERNBRUSHPRACTICE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
};
