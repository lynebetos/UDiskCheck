
// UDiskCheckDlg.h : ͷ�ļ�
//

#pragma once


// CUDiskCheckDlg �Ի���
class CUDiskCheckDlg : public CDialog
{
// ����
public:
	CUDiskCheckDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_UDISKCHECK_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


public:
	char FirstDriveFromMask( ULONG unitmask )
	{
		char i;

		for (i = 0; i < 26; ++i)
		{
			if (unitmask & 0x1)
				break;
			unitmask = unitmask >> 1;
		}

		return( i + 'A' );
	}



// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg BOOL OnDeviceChange(UINT nEventType, DWORD_PTR dwData);
	DECLARE_MESSAGE_MAP()
};
