/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : phyNvDefine_Boston
  �� �� ��   : ����
  ��    ��   : h00165915
  ��������   : 2016��7��1��
  ����޸�   :
  ��������   : PhyNvDefine.h ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2016��7��1��
    ��    ��   : h00165915
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __PHYNVDEFINE_BOSTON_H__
#define __PHYNVDEFINE_BOSTON_H__


/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(1)

/*****************************************************************************
  2 �궨��
*****************************************************************************/
#define RX_ANT_SEL_MIPI_NUM             ( 4 )
#define ANT_TUNER_MIPI_NUM              ( 2 )
#define TX_COUPLER_MIPI_NUM             ( 1 )
#define MAX_TRIG_NUM                    ( 4 )
#define TX_ANT_SEL_MIPI_NUM             ( 4 )
#define PA_MODE_MIPI_NUM                ( 4 )
#define PA_TRIG_NUM                     ( 2 )
#define DL_PATH_NUM                     ( 6 )
#define UL_PATH_NUM                     ( 3 )
#define DL_CA_BAND_NUM                  ( 5 )
#define UL_CA_BAND_NUM                  ( 2 )
#define CA_COM_ANT_SEL_MIPI_NUM         ( 4 )
#define CA_COM_ANT_TUNER_MIPI_NUM       ( 4 )
#define MAX_RFIC_NUM                    ( 4 )
#define MAX_RFIC_RX_CH_NUM              ( 3 )
#define MAX_RFIC_TX_CH_NUM              ( 2 )
#define MAX_BAND_NUM                    ( 32 )
#define RF_RX_MAX_FREQ_NUM              ( 32 )
#define AGC_MAX_GAIN_NUM                ( 8 )
#define AGC_SWITCH_THRESHOLD_NUM        ( AGC_MAX_GAIN_NUM - 1 )
#define AGC_MAX_TABLE_NUM               ( 10 )
#define MAX_VGA_GAIN_NUM                ( 16 )

#define LNA_SINGLE_GAIN_MIPI_NUM        ( 4 )
#define EXT_LNA_LEVEL_NUM               ( 4 )
#define EXT_LNA_BAND_SEL_NUM            ( 2 )
#define EXT_LNA_OFF_NUM                 ( 2 )
#define LNA_MIPI_TRIG_NUM               ( 8 )


#define MAX_IP2_CAL_FREQ_NUM            ( 3 )

#define RF_TX_GAIN_6363_NUM             ( 20 )
#define RFIC_INIT_REG_NUM               ( 256 )
#define RF_BBGAIN_NUM_PER_RFGAIN        ( 2 )
#define RF_PA_GAIN_NUM                  ( 3 )
#define MAX_TX_ANT_NUM                  ( 2 )
#define MAX_RX_ANT_NUM                  ( 4 )
#define CAL_IP2_FREQ_NUM                ( 3 )

#define MAX_DL_CC_NUM                   ( 5 )
#define MAX_UL_CC_NUM                   ( 2 )
#define MAX_DL_BAND_NUM                 (MAX_DL_CC_NUM)
#define MAX_UL_BAND_NUM                 (MAX_UL_CC_NUM)

#define UCOM_NV_CDMA_AGC_MAX_TABLE_NUM  ( 10 )                                  /* CDMA��AGC���TABLE����AGC GAIN��AGC�����ֺ�AGC�л����޹��ã�TABLE������ֵһһ��Ӧ */

/* ET֧�ֵ����MIPI���� */
#define UCOM_NV_ET_MIPI_NUM             ( 4 )
#define UCOM_NV_W_TX_PA_VBIAS_NUM       ( 3 )                                   /* pa vbias���� */
#define UCOM_NV_PA_GAIN_NUM_MAX         ( 4 )                                   /* pa gain���� */

/* CDMA tas mipi���Ԫ���� */
#define UCOM_NV_CDMA_TAS_MIPI_NUM       ( 4 )
#define UCOM_NV_W_TEMP_NUM              ( 0x10  )                               /* �¶Ȳ������õ��¶ȵ㣬ǰ5���ֱ���� -20,0,20,40,60����6�������ֽڶ��� */
#define RF_TX_MAX_FREQ_NUM              ( 16 )


#define UCOM_NV_TAS_DPDT_MIPI_UNIT_MAX_NUM      ( 4 )
#define UCOM_NV_G_NOTCH_MIPI_UNIT_MAX_NUM       ( 4 )
#define UCOM_NV_G_PAVCC_MIPI_UNIT_MAX_NUM       ( 4 )
#define UCOM_NV_G_TUNER_MIPI_UNIT_MAX_NUM       ( 4 )
#define UCOM_NV_G_MIPI_INIT_UNIT_MAX_NUM        ( 16 )
#define UCOM_NV_MAX_MIPI_ANT_UNIT_NUMBER        ( 4 )

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/

/*****************************************************************************
 ö����    :UCOM_NV_FEMIO_CTRL_MODE_ENUM_UINT32
 Э����  :
 ASN.1���� :
 ö��˵��  :
*****************************************************************************/
enum UCOM_NV_FEMIO_CTRL_MODE_ENUM
{
    UCOM_NV_FEMIO_CTRL_TOP              = 0,                                    /* �������� */                                                          /* ���н�����DPCH */
    UCOM_NV_GPIO_ONLY                   = 1,                                    /* ֻ����GPIO */                                                           /* ���д���RACH */
    UCOM_NV_MIPI_ONLY                   = 2,                                    /* ֻ����MIPI */
    UCOM_NV_GPIO_MIPI                   = 3,                                    /* ����GPIO��MIPI */
    UCOM_NV_FEMIO_CTRL_BUTT
};
typedef VOS_UINT32 UCOM_NV_FEMIO_CTRL_MODE_ENUM_UINT32;
/*****************************************************************************
  4 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  5 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  6 STRUCT����
*****************************************************************************/
/*****************************************************************************
 �ṹ��    : PHY_MIPIDEV_CMD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : MIPI������ƽṹ��
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          bitByteCnt                  :5;         /* 0��ʾ��CMMAND��Ч��ȡֵ0~4 */
    VOS_UINT32                          bitMipiPortSel              :3;         /* mipi port 0~7 */
    VOS_UINT32                          bitSlaveID                  :4;         /* slave id 0~15 */
    VOS_UINT32                          bitRegAddr                  :16;        /* reg addr 0~65535 */
    VOS_UINT32                          bitRsv                      :4;         /* ���ֽڶ��� */

} PHY_MIPIDEV_CMD_STRU;

/*****************************************************************************
 �ṹ��    : PHY_MIPIDEV_DATA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : MIPI���ݽṹ��
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          bitByte0                    :8;          /* ��һ��byte */
    VOS_UINT32                          bitByte1                    :8;          /* �ڶ���byte */
    VOS_UINT32                          bitByte2                    :8;          /* ������byte */
    VOS_UINT32                          bitByte3                    :8;          /* ���ĸ�byte */

} PHY_MIPIDEV_DATA_STRU;

/*****************************************************************************
 �ṹ��    : PHY_MIPIDEV_UNIT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : MIPI������С��Ԫ
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_CMD_STRU                stCmd;                                  /*������*/
    PHY_MIPIDEV_DATA_STRU               stData;                                 /*������,һ��MIPIռ��2��UINT32*/

} PHY_MIPIDEV_UNIT_STRU;


/*****************************************************************************
 �ṹ��    : NV_GUC_BAND_DL_RFIC_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����RFIC����,����RFIC ID,ͨ���ţ������PORT��
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          bitRficIdx                  :2;         /* RFIC ID��[0,2]�ֱ��ʾRFIC1��RFIC2��RFIC3 */
    VOS_UINT32                          bitRficRxCh                 :2;         /* ����RXͨ���ţ�ÿ��RFIC��3��ͨ�����ֱ���RX1��RX2��RX3; ��������4*4MIMO�̶�ʹ��RX1A1B+RX3A3B,���ǲ���ͬһ��TX_PLL1���ƣ����MIMO��������ѡRXͨ������4����2��ʱ��
                                                                                ֻ����Main��Div Ant,RFIC������RxCh��Ҫ��дʹ�õ�ͨ���ţ����֧��2�ճ�����RxCh��ʾʹ�õ�Rxͨ����;
                                                                                4R ��2R����ͬһ��NV */


    VOS_UINT32                          bitRfPortCrossFlag          :1;         /*�������ߵ��ź����ӵ��� RFIC DRX Port�ڣ������Ҫ��CTUͨ�����浽������ֻ֧��2�յĽ���*/
    VOS_UINT32                          bitMainAntRxPortSel         :4;         /* ����LNA��RFIC�˿�ѡ�񣬼��ź�ͨ���ĸ��˿����뵽RFIC */
    VOS_UINT32                          bitDivAntRxPortSel          :4;         /* �ּ�LNA��RFIC�˿�ѡ�� */
    VOS_UINT32                          bitAuxMainAntRxPortSel      :4;         /* ��������LNA��RFIC�˿�ѡ��Ŀǰֻ��LTEʹ�ã�GUC��ʹ�� */
    VOS_UINT32                          bitAuxDivAntRxPortSel       :4;         /* �����ּ�LNA��RFIC�˿�ѡ��Ŀǰֻ��LTEʹ�ã�GUC��ʹ�� */
    VOS_UINT32                          bitRsv0                     :2;         /* Ԥ��λ */
    VOS_UINT32                          bitRsv1                     :2;
    VOS_UINT32                          bitRsv2                     :2;
    VOS_UINT32                          bitRsv3                     :2;
    VOS_UINT32                          bitRsv4                     :3;

} NV_GUC_BAND_DL_RFIC_PARA_STRU;

/*****************************************************************************
 �ṹ��    : NV_BAND_UL_RFIC_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����RFIC����,����RFIC ID,ͨ���ţ������PORT��
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          bitRficIdx                 :2;          /* ����ͨ�����ڵ�RFIC ID,֧���շ����� */
    VOS_UINT32                          bitRficTxCh                :2;          /* ����ͨ���ţ�����MIMO�̶�ʹ��Tx1Ch,��˵���������MIMO�󣬲�ȡ��ͨ������������£���дTx1Iq1,Tx2Iq������2Txת1Tx����NV�����Ժ�Rxһ��*/
    VOS_UINT32                          bitMainAntRficTxPortSel    :4;          /* ����PORT��ѡ�� */
    VOS_UINT32                          bitDivAntRficTxPortSel     :4;
    VOS_UINT32                          bitMainAntRficTxMrxPortSel :1;           /*���л���ͨ����Mrxͨ����ѡ��0: MRX1 RF input selected  1: MRX2 RF input selected*/
    VOS_UINT32                          bitDivAntRficTxMrxPortSel  :1;
    VOS_UINT32                          bitRsv0                    :2;
    VOS_UINT32                          bitRsv1                    :2;
    VOS_UINT32                          bitRsv2                    :2;
    VOS_UINT32                          bitRsv3                    :2;
    VOS_UINT32                          bitRsv4                    :2;
    VOS_UINT32                          bitRsv5                    :4;
    VOS_UINT32                          bitRsv6                    :4;
}NV_GUC_BAND_UL_RFIC_PARA_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_BAND_DL_PATH_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ÿ��PATH������RFICͨ������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          bitRxAntNum                 :3;         /* ���������� */
    VOS_UINT16                          bitMainAntValidFlag         :1;         /* 2��case�£�ʹ�����߷ֲ����������У׼ */
    VOS_UINT16                          bitDivAntValidFlag          :1;
    VOS_UINT16                          bitAuxMainAntValidFlag      :1;
    VOS_UINT16                          bitAuxDivAntValidFlag       :1;
    VOS_UINT16                          bitRsv0                     :2;
    VOS_UINT16                          bitRsv1                     :3;
    VOS_UINT16                          bitRsv2                     :4;
    VOS_UINT16                          usDlFemPathIdx;                         /* ��ȡ���� FemPath NV��Idx��:0~255��FemPathNV ��ȫ��̬��ѯ������ ���ߺ�����LNAͬʱ��ѯ������Idx����һ��*/

    NV_GUC_BAND_DL_RFIC_PARA_STRU       stBandDlRficPara;                       /* ����RFIC���� */

} NV_GUC_BAND_DL_PATH_PARA_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_BAND_UL_PATH_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ÿ��PATH������RFICͨ������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          bitTxAntNum                 :2;         /* ���������� */
    VOS_UINT16                          bitMainAntValid             :1;         /* 2��case�£�ʹ�����߷ֲ����������У׼ */
    VOS_UINT16                          bitDivAntValid              :1;
    VOS_UINT16                          bitAptPdm0PinSel            :3;
    VOS_UINT16                          bitAptPdm1PinSel            :3;         /* GUCT ģ������ */
    VOS_UINT16                          bitPmuAuxSel                :3;
    VOS_UINT16                          bitRsv                      :3;
    VOS_UINT16                          usUlFemPathIdx;                         /* ��ȡ���� FemPath NV��Idx��:0~255��FemPathNV ��ȫ��̬��ѯ */

    NV_GUC_BAND_UL_RFIC_PARA_STRU       stBandUlRficPara;                       /* RFIC���� */
}NV_GUC_BAND_UL_PATH_PARA_STRU;


/*****************************************************************************
 �ṹ��    : NV_GUC_BAND_DL_GPIO_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ǰ������GPIO���ã��������߿��أ�TUNER�ȣ�֧�����߿��غ�TUNER��������
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              ulMainRxAntSel;                         /*ASMͨ·�ϵ��л�����,�����߿��ػ��ȥ*/
    VOS_UINT32                              ulMainRxAntSelExt;                      /*ASMͨ·�ϵ��л�����,�����߿��ػ��ȥ*/
    VOS_UINT32                              ulDivRxAntSel;
    VOS_UINT32                              ulDivRxAntSelExt;
    VOS_UINT32                              ulAuxMainRxAntSel;                      /*ASMͨ·�ϵ��л�����*/
    VOS_UINT32                              ulAuxMainRxAntSelExt;
    VOS_UINT32                              ulAuxDivRxAntSel;
    VOS_UINT32                              ulAuxDivRxAntSelExt;
    VOS_UINT32                              ulMainRxTunerSel;                       /*ASMͨ·�ϵ��л�����*/
    VOS_UINT32                              ulMainRxTunerSelExt;
    VOS_UINT32                              ulDivRxTunerSel;
    VOS_UINT32                              ulDivRxTunerSelExt;
    VOS_UINT32                              ulAuxMainTunerRxSel;                    /*ASMͨ·�ϵ��л�����*/
    VOS_UINT32                              ulAuxMainTunerRxSelExt;
    VOS_UINT32                              ulAuxDivRxTunerSel;
    VOS_UINT32                              ulAuxDivRxTunerSelExt;

} NV_GUC_BAND_DL_GPIO_PARA_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_BAND_DL_MIPI_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ǰ������MIPI���ã��������߿��أ�TUNER�ȣ�֧�����߿��غ�TUNER��������
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU              astMipiMainAntRxSel[RX_ANT_SEL_MIPI_NUM];            /*Ant Mipi num=4,��Ҫ��Ƶ����*/
    PHY_MIPIDEV_UNIT_STRU              astMipiDivAntRxSel[RX_ANT_SEL_MIPI_NUM ];
    PHY_MIPIDEV_UNIT_STRU              astMipiAuxMainAntRxSel[RX_ANT_SEL_MIPI_NUM ];
    PHY_MIPIDEV_UNIT_STRU              astMipiAuxDivAntRxSel[RX_ANT_SEL_MIPI_NUM ];
    PHY_MIPIDEV_UNIT_STRU              astMipiMainTunerRxSel[ANT_TUNER_MIPI_NUM ];
    PHY_MIPIDEV_UNIT_STRU              astMipiDivTunerRxSel[ANT_TUNER_MIPI_NUM ];           /*Tuner Mipi num=2,��Ҫ��Ƶ����*/
    PHY_MIPIDEV_UNIT_STRU              astMipiAuxMainTunerRxSel[ANT_TUNER_MIPI_NUM ];
    PHY_MIPIDEV_UNIT_STRU              astMipiAuxDivTunerRxSel[ANT_TUNER_MIPI_NUM ];
    PHY_MIPIDEV_UNIT_STRU              astMipiAntTrig[MAX_RX_ANT_NUM ];                     /*Ant Mipi Trig*/
    PHY_MIPIDEV_UNIT_STRU              astMipiTunerTrig[MAX_RX_ANT_NUM ];                   /*Tuner Mipi Trig*/

    PHY_MIPIDEV_UNIT_STRU              astMipiMainAntRxCloseSel[RX_ANT_SEL_MIPI_NUM];       /* ����NV */

} NV_GUC_BAND_DL_MIPI_PARA_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_BAND_DL_FEM_PATH_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ÿ��PATH��ǰ������MIPI���ã��������߿��أ�TUNER�ȣ�
             ֧�����߿��غ�TUNER��������
*****************************************************************************/
typedef struct
{

    NV_GUC_BAND_DL_GPIO_PARA_STRU           stBandDlGpioPara;                       /* ÿ��PATH����GPIO���� */
    NV_GUC_BAND_DL_MIPI_PARA_STRU           stBandDlMipiPara;                       /* ÿ��PATH����MIPI���� */

}NV_GUC_BAND_DL_FEM_PATH_PARA_STRU;


/*****************************************************************************
 �ṹ��    : NV_GUC_BAND_UL_GPIO_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����GPIO���ã��������߿��أ�TUNER�ȣ�֧�����߿��غ�TUNER��������
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              ulTxAntSel;                             /* �������߿��� */
    VOS_UINT32                              ulTxAntSelExt;
    VOS_UINT32                              ulTxTuner;                              /* ����Tuner���� */
    VOS_UINT32                              ulTxTunerExt;
    VOS_UINT32                              ulPaEnCtrl;                             /* PA�߿ؿ��� */
    VOS_UINT32                              ulPaHighModeCtrl;                       /* PA����������� */
    VOS_UINT32                              ulPaMidModeCtrl;                        /* PA����������� */
    VOS_UINT32                              ulPaLowModeCtrl;                        /* PA����������� */
    VOS_UINT32                              ulPaUltraLowModeCtrl;                   /* utralow */

} NV_GUC_BAND_UL_GPIO_PARA_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_BAND_UL_MIPI_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����MIPI���ã��������߿��أ�TUNER�ȣ�֧�����߿��غ�TUNER��������
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU               astMipiAntSelTx[TX_ANT_SEL_MIPI_NUM];   /* MIPI�������߿���  TX_ANT_SEL_MIPI_NUM =4 */
    PHY_MIPIDEV_UNIT_STRU               astMipiTunerTx[ANT_TUNER_MIPI_NUM];     /* MIPI����TUNER���� Tx Tuner is only for Gsm,num=2 */


    PHY_MIPIDEV_UNIT_STRU               stMipiPaOnCtrl;                         /* MIPI PA On���� */
    PHY_MIPIDEV_UNIT_STRU               stMipiPaOffCtrl;                        /* MIPI PA OFF���� */
    PHY_MIPIDEV_UNIT_STRU               astMipiPaHighMode[PA_MODE_MIPI_NUM];    /* MIPI PA����������� PA_MODE_MIPI_NUM=4 */
    PHY_MIPIDEV_UNIT_STRU               astMipiPaMidMode[PA_MODE_MIPI_NUM];     /* MIPI PA����������� PA_MODE_MIPI_NUM=4 */
    PHY_MIPIDEV_UNIT_STRU               astMipiPaLowMode[PA_MODE_MIPI_NUM];     /* MIPI PA����������� PA_MODE_MIPI_NUM=4 */
    PHY_MIPIDEV_UNIT_STRU               astMipiPaUltraLowMode[PA_MODE_MIPI_NUM];

    PHY_MIPIDEV_UNIT_STRU               astMipiAntSelTxClose[TX_ANT_SEL_MIPI_NUM];


    PHY_MIPIDEV_UNIT_STRU               stMipiPaTrigger;                        /* ���� */


} NV_GUC_BAND_UL_MIPI_PARA_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_BAND_UL_FEM_SINGLE_ANTENNA_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ǰ����������
*****************************************************************************/
typedef struct
{
    NV_GUC_BAND_UL_GPIO_PARA_STRU           stBandUlGpioPara;                       /* ����GPIO���� */
    NV_GUC_BAND_UL_MIPI_PARA_STRU           stBandUlMipiPara;                       /* ����MIPI���� */

}NV_GUC_BAND_UL_FEM_SINGLE_ANTENNA_PARA_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_BAND_UL_FEM_PATH_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ǰ���������ã�ÿ��PATH������
*****************************************************************************/
typedef struct
{
    NV_GUC_BAND_UL_FEM_SINGLE_ANTENNA_PARA_STRU     astBandUlFemPara[MAX_TX_ANT_NUM];   /*������������������FEM �ṹ*/
    PHY_MIPIDEV_UNIT_STRU                           astMipiAntTxTrig[MAX_TX_ANT_NUM];
    PHY_MIPIDEV_UNIT_STRU                           astMipiPaTrig[MAX_TX_ANT_NUM];

}NV_GUC_BAND_UL_FEM_PATH_PARA_STRU;

/*****************************************************************************
 �ṹ��    : NV_LNA_CTRL_ENUM
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����LNA���÷�ʽ��GPIO��MIPI
*****************************************************************************/
typedef enum __NV_LNA_CTRL_ENUM__
{
    LNA_CTRL_NOT                        = 0,
    LNA_GPIO_CTRL                       = 1,
    LNA_MIPI_CTRL                       = 2,
    LNA_GPIO_MIPI_CTRL                  = 4,
    LNA_CTRL_TYPE_BUTT                  = 5

}NV_LNA_CTRL_ENUM;

typedef VOS_UINT16 NV_LNA_CTRL_ENUM_UINT16;

/*****************************************************************************
 �ṹ��    : NV_GUC_EXT_LNA_ANTINFO_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : LNA�������
*****************************************************************************/
typedef struct
{

    NV_LNA_CTRL_ENUM_UINT16                 enLnaCtrlInd;                           /* LNA���Ʒ�ʽ */
    VOS_UINT16                              usGpioLnaLevelNum;                      /* Lna֧�ֵĵ�λ */

    VOS_UINT32                              ulGpioLnaMask;                          /* LNA GPIO�߿� */
    VOS_UINT32                              ulGpioLnaMaskExt;

    VOS_UINT32                              aulGpioLnaGain[EXT_LNA_LEVEL_NUM];      /* GPIO LNA���� */
    VOS_UINT32                              aulGpioLnaGainExt[EXT_LNA_LEVEL_NUM];

    PHY_MIPIDEV_UNIT_STRU                   astMipilnaBandSel[EXT_LNA_BAND_SEL_NUM];/* MIPI LAN bandѡ�� */

    PHY_MIPIDEV_UNIT_STRU                   astMipiLnaOff[EXT_LNA_OFF_NUM];         /* MIPI LAN OFF */

    PHY_MIPIDEV_UNIT_STRU                   astMipiLnaGain0[LNA_SINGLE_GAIN_MIPI_NUM]; /* MIPI LAN GAIN0���� */
    PHY_MIPIDEV_UNIT_STRU                   astMipiLnaGain1[LNA_SINGLE_GAIN_MIPI_NUM]; /* MIPI LAN GAIN1���� */
    PHY_MIPIDEV_UNIT_STRU                   astMipiLnaGain2[LNA_SINGLE_GAIN_MIPI_NUM]; /* MIPI LAN GAIN2���� */
    PHY_MIPIDEV_UNIT_STRU                   astMipiLnaGain3[LNA_SINGLE_GAIN_MIPI_NUM]; /* MIPI LAN GAIN3���� */

    VOS_UINT16                              ausNoblockLnaGainIdx[AGC_MAX_GAIN_NUM]; /* ʵ�ʵ�AGC NOBLOCK��λ��������LNA�ĵ�λ */
    VOS_UINT16                              ausBlockLnaGainIdx[AGC_MAX_GAIN_NUM];   /* ʵ�ʵ�AGC BLOCK��λ��������LNA�ĵ�λ */
    VOS_UINT16                              ausAcsLnaGainIdx[AGC_MAX_GAIN_NUM];     /* ʵ�ʵ�ACS NOBLOCK��λ��������LNA�ĵ�λ */

}NV_GUC_EXT_LNA_ANTINFO_STRU;

/*****************************************************************************
 �ṹ��    : NV_BAND_EXT_LNA_PATH_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����LNA��������������ṹ��Ϣ
*****************************************************************************/
typedef struct
{
    NV_GUC_EXT_LNA_ANTINFO_STRU                stMainAntLnaInfo;
    NV_GUC_EXT_LNA_ANTINFO_STRU                stDivAntLnaInfo;
    NV_GUC_EXT_LNA_ANTINFO_STRU                stAuxMainAntLnaInfo;
    NV_GUC_EXT_LNA_ANTINFO_STRU                stAuxDivAntLnaInfo;
    PHY_MIPIDEV_UNIT_STRU                      astLnaTrig[LNA_MIPI_TRIG_NUM];          /*4RX ��Ӧ��Extra Lna MIPI����ͬʱ��Ч*/

}NV_GUC_BAND_EXT_LNA_PATH_PARA_STRU;

/*****************************************************************************
 �ṹ��    : NV_RF_MIPI_INIT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RFIC ��ʼ���ṹ�����ṹ�嶨��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              usRegAddr;                              /* Reg Addr: 0~65535 ,Extended Write Long MIPI*/
    VOS_UINT16                              usRegData;

}NV_RF_MIPI_INIT_STRU;

/*****************************************************************************
 �ṹ��    : NV_MODEM_RF_RFIC_INIT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RFIC ��ʼ���ṹ����NV���ƽṹ�嶨��
*****************************************************************************/
typedef struct
{
    VOS_UINT16 usRegNum;                                                            /* Single RFIC Init LUT Reg Num */
    VOS_UINT16 usRsv;
    NV_RF_MIPI_INIT_STRU                astUint[RFIC_INIT_REG_NUM];

}NV_MODEM_RF_RFIC_INIT_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RFIC_CONNECT_ABB_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RFIC��ABB�����ӹ�ϵ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usRficSlaveId;                          /* ͬһ��MIPI����2��RFIC��RFIC chip ID��ֵ��0--chipId������1--chipId����*/
    VOS_UINT16                          usRficMipiPortSel;                      /* MIPI Portѡ�� */
    VOS_UINT16                          ausRficRxCh[MAX_RFIC_RX_CH_NUM];        /* ��ʾÿ��RFIC��RX1,Rx2,RX3�ֱ���ABBͨ�����������,ʵ����дABB��ͨ����[0,9] */
    VOS_UINT16                          ausRficABCrossFlag[MAX_RFIC_RX_CH_NUM]; /* RFIC�����ּ�����ABB��ͨ�����ּ��Ƿ��н��� */
    VOS_UINT16                          usMrxCh;                                /* RFIC MRX IQ��ABB IQ���ӹ�ϵ,��ABB MRX IQ�� */

    VOS_UINT16                          ausRficTxCh[MAX_RFIC_TX_CH_NUM];        /* ��ʾÿ��RFIC��TX1,TX2�ֱ���ABB TXͨ���������������дABB��TX IQͨ���� */
    VOS_UINT16                          ausRficTxChCrossFlag[MAX_RFIC_TX_CH_NUM];/* RFIC TX IQ������ABB�� IQ�����Ƿ��н���,��ȷ��? */
    VOS_UINT16                          usRsv;
}NV_GUC_RFIC_CONNECT_ABB_PARA_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RF_HW_BASIC_INFO_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RFIC��ABB�����ӹ�ϵ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usRifcNum;
    VOS_UINT16                          usRsv;
    NV_GUC_RFIC_CONNECT_ABB_PARA_STRU   astRficConnectAbb[MAX_RFIC_NUM];
}NV_GUC_RF_HW_BASIC_INFO_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RF_RX_CAL_FREQ_LIST_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��ҪУ׼��Ƶ���б�ÿ��BAND���֧��32��Ƶ�㣬��NV����BAND��
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usValidCalFreqNum;                      /* ��ҪУ׼��Ƶ����� */
    VOS_UINT16                          usRsv;
    VOS_UINT16                          aulRxCalFreqList[RF_RX_MAX_FREQ_NUM];   /* RF_RX_FREQ_NUM =32 ,GUTL��λ100KHz,CDMA:1KHz*/

}NV_GUC_RF_RX_CAL_FREQ_LIST_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RX_AGC_GAIN_THRESHOLD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC�л����ޣ�����BLOCK��NOBLOCK��ACS
*****************************************************************************/
typedef struct
{
    VOS_INT16                           asNoBlockInc[AGC_MAX_GAIN_NUM];         /* NOBLOCK�������ޣ�AGC_MAX_GAIN_NUM = 8����λ��1dB */
    VOS_INT16                           asNoBlockDec[AGC_MAX_GAIN_NUM];         /* NOBLOCK�������ޣ�AGC_MAX_GAIN_NUM = 8����λ��1dB */
    VOS_INT16                           asBlockInc[AGC_MAX_GAIN_NUM];           /* BLOCK�������ޣ�BLOCK��Ϊ8����AGC_MAX_GAIN_NUM = 8����λ��1dB */
    VOS_INT16                           asBlockDec[AGC_MAX_GAIN_NUM];           /* BLOCK�������ޣ�BLOCK��Ϊ8����AGC_MAX_GAIN_NUM = 8����λ��1dB */
    VOS_INT16                           asAcsInc[AGC_MAX_GAIN_NUM];             /* ACS�������ޣ�GUC���ã�AGC_MAX_GAIN_NUM = 8����λ��1dB */
    VOS_INT16                           asAcsDec[AGC_MAX_GAIN_NUM];             /* ACS�������ޣ�GUC���ã�AGC_MAX_GAIN_NUM = 8����λ��1dB */
}NV_GUC_RX_AGC_GAIN_THRESHOLD_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC�л�������Դ�أ����֧��10�ű�����10�ֲ�ͬ��AGC�л�����
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_GAIN_THRESHOLD_STRU   astAgcSwitchTable[AGC_MAX_TABLE_NUM];   /*AGC_MAX_TABLE = 10*/

}NV_GUC_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RX_AGC_GAIN_DEFAULT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC��Ĭ��GAINֵ������BLOCK��NOBLOCK��ACS
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          ausGainNBlock[AGC_MAX_GAIN_NUM];        /* NOBLOCK��Ĭ��AGC GAINֵ��AGC_MAX_GAIN_NUM = 8����λ:1/8 dB */
    VOS_UINT16                          ausGainBlock[AGC_MAX_GAIN_NUM];         /* BLOCK��Ĭ��AGC GAINֵ��֧��8��AGC��AGC_MAX_GAIN_NUM = 8����λ:1/8 dB */
    VOS_UINT16                          ausGainAcs[AGC_MAX_GAIN_NUM];           /* ACS��Ĭ��AGC GAINֵ��GUC���ã�AGC_MAX_GAIN_NUM = 8����λ:1/8 dB */

}NV_GUC_RX_AGC_GAIN_DEFAULT_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RF_RX_AGC_GAIN_TABLE_BANK_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGCĬ��GAINֵ����Դ�أ����֧��10�ű�����10�ֲ�ͬ��AGC DEFAULT GAIN
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_GAIN_DEFAULT_STRU         astAgcGainDefaultTable[AGC_MAX_TABLE_NUM];  /*AGC_MAX_TABLE = 10*/

}NV_GUC_RF_RX_AGC_GAIN_TABLE_BANK_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RX_AGC_RFIC_TABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC��RFIC�����֣�����BLOCK��NOBLOCK��ACS
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          ausRfTableNoBlok[AGC_MAX_GAIN_NUM];     /* NOBLOCK��AGC��RFIC�����֣�AGC_MAX_GAIN_NUM = 8 */
    VOS_UINT16                          ausRfTableBlock[AGC_MAX_GAIN_NUM];      /* BLOCK��AGC��RFIC�����֣�֧��8����AGC_MAX_GAIN_NUM = 8 */
    VOS_UINT16                          ausRfTableAcs[AGC_MAX_GAIN_NUM];        /* ACS��AGC��RFIC�����֣�GUC���ã�AGC_MAX_GAIN_NUM = 8 */

}NV_GUC_RX_AGC_RFIC_TABLE_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RF_RX_AGC_RFIC_TABLE_BANK_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC��RFIC��������Դ�أ����֧��10�ű�����10�ֲ�ͬ��RFIC������
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_RFIC_TABLE_STRU           astAgcRficTable[AGC_MAX_TABLE_NUM];     /*AGC_MAX_TABLE = 10*/

}NV_GUC_RF_RX_AGC_RFIC_TABLE_BANK_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RX_AGC_TABLE_INFO_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ĳһ��PATH��ÿ��������ѡ���AGC TABLE INDEX������INDEXȥ������Ӧ��
 AGC���л����ޡ�AGC DEFAULT GAIN��AGC��RFIC������
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          bitMainAntRxAgcTableIdx         :4;     /* �������߶�Ӧ��AGC TABLE INDEX */
    VOS_UINT32                          bitDivAntRxAgcTableIdx          :4;     /* �ּ����߶�Ӧ��AGC TABLE INDEX */
    VOS_UINT32                          bitAuxMainAntRxAgcTableIdx      :4;     /* GUC���ã������������߶�Ӧ��AGC TABLE INDEX */
    VOS_UINT32                          bitAuxDivAntRxAgcTableIdx       :4;     /* GUC���ã������ּ����߶�Ӧ��AGC TABLE INDEX ������4bit�������㣬Ϊ��4�ֽڶ��룬������8bit*/
    VOS_UINT32                          bitRsv0                         :4;
    VOS_UINT32                          bitRsv1                         :4;
    VOS_UINT32                          bitRsv2                         :4;
    VOS_UINT32                          bitRsv3                         :4;
}NV_GUC_RX_AGC_TABLE_INFO_STRU;


/*****************************************************************************
 �ṹ��    : NV_GUC_RF_RX_AGC_TABLE_USED_INFO_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC��TABLE INDEX�����֧��6��PATH��GUCֻ��Ҫʹ��һ��PATH������BAND
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_TABLE_INFO_STRU       astAgcTableInfoDlPath[DL_PATH_NUM];

}NV_GUC_RF_RX_AGC_TABLE_USED_INFO_STRU;


/*****************************************************************************
 �ṹ��    : NV_GUC_RX_PATH_ILOSS_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ĳһ��PATH��ÿ��������ѡ��Ĳ���ֵ
*****************************************************************************/
typedef struct
{
    VOS_INT16                           bitMainAntRffeIloss         :8;         /* �������߶�Ӧ�Ĳ���ֵ����λ:1db */
    VOS_INT16                           bitDivAntRffeIloss          :8;         /* �ּ����߶�Ӧ�Ĳ���ֵ����λ:1db */
    VOS_INT16                           bitAuxMainAntRffeIloss      :8;         /* GUC���ã������������߶�Ӧ�Ĳ���ֵ����λ:1db */
    VOS_INT16                           bitAuxDivAntRffeIloss       :8;         /* GUC���ã������ּ����߶�Ӧ�Ĳ���ֵ����λ:1db��������4bit�������㣬Ϊ��4�ֽڶ��룬������8bit*/

}NV_GUC_RX_PATH_ILOSS_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RF_RX_RFFE_ILOSS_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ǰ�˵Ĳ���ֵ�����֧��6��PATH��GUCֻ��һ��PATH������BAND
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_PATH_ILOSS_STRU           astRffeIlossDlPath[DL_PATH_NUM];

}NV_GUC_RF_RX_RFFE_ILOSS_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RX_AGC_GAIN_LEVEL_CAL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC��У׼�������������ֵ�����ǲ�����Ƶ��ֵ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          ausGainLevelNoBlock[AGC_MAX_GAIN_NUM];  /* NOBLOCK��AGCУ׼ֵ����λ:1/8dB��AGC_MAX_GAIN_NUM = 8 */
    VOS_UINT16                          ausGainLevelBlock[AGC_MAX_GAIN_NUM];    /* BLOCK��AGCУ׼ֵ����λ:1/8dB��AGC_MAX_GAIN_NUM = 8 */
    VOS_UINT16                          ausGainLevelAcs[AGC_MAX_GAIN_NUM];      /* GUC���ã�ACS��AGCУ׼ֵ����λ:1/8dB��AGC_MAX_GAIN_NUM = 8 */

}NV_GUC_RX_AGC_GAIN_LEVEL_CAL_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RX_AGC_FREQ_COMP_CAL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC��Ƶ��У׼���
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ausFreqComp[RF_RX_MAX_FREQ_NUM];        /* RF_RX_MAX_FREQ_NUM = 32 */

}NV_GUC_RX_AGC_FREQ_COMP_CAL_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RX_AGC_CAL_RESULT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGCĳһ�����߶�Ӧ���ܵ�У׼���
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_GAIN_LEVEL_CAL_STRU   stGainLevelCalResult;                   /* ������AGC_GAIN_DEFAULT�Ͳ��𣬵��ǲ�����Ƶ��ֵ��Ƶ����Ҫ������ֵ����*/
    NV_GUC_RX_AGC_FREQ_COMP_CAL_STRU    stFreqCalResult;                        /* AGC��Ƶ��У׼ֵ */
    VOS_INT16                           sRffeIloss;                             /* У׼ʱʹ�õĲ���ֵ */
    VOS_INT16                           sRsv;

}NV_GUC_RX_AGC_CAL_RESULT_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RX_AGC_CAL_RESULT_TABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGCĳһ��PATH��Ӧ���ܵ�У׼�����GUCֻ��һ��PATH������BAND
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_CAL_RESULT_STRU           astMainAntAgcCalResult;                 /* �������߶�Ӧ��AGCУ׼��� */
    NV_GUC_RX_AGC_CAL_RESULT_STRU           astDivAntAgcCalResult;                  /* �ּ����߶�Ӧ��AGCУ׼��� */
    NV_GUC_RX_AGC_CAL_RESULT_STRU           astAuxMainAntAgcCalResult;              /* GUC���ã������������߶�Ӧ��AGCУ׼��� */
    NV_GUC_RX_AGC_CAL_RESULT_STRU           astAuxDivAntAgcCalResult;               /* GUC���ã������ּ����߶�Ӧ��AGCУ׼��� */

}NV_GUC_RX_AGC_CAL_RESULT_TABLE_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RX_DCOC_COMP_VAlUE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DCOC��У׼���ֺ�BBP�ϱ��Ĳ���ֱ��ֵ
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usDciCode;                              /* У׼��I·��DCOC���� */
    VOS_UINT16                          usDcqCode;                              /* У׼��Q·��DCOC���� */
    VOS_INT16                           sRemainDigitalDci;                      /* У׼ʱBBP�ϱ���I·�Ĳ���ֱ��ֵ */
    VOS_INT16                           sRemainDigitalDcq;                      /* У׼ʱBBP�ϱ���Q·�Ĳ���ֱ��ֵ */

}NV_GUC_RX_DCOC_COMP_VAlUE_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RX_DCOC_CAL_RESULT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ĳһ��PATH��ÿ�����ߵ�DCOC��У׼���������VGA��λУ׼�ģ�������16��
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_DCOC_COMP_VAlUE_STRU          astDcocComp[MAX_VGA_GAIN_NUM];

}NV_GUC_RX_DCOC_CAL_RESULT_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RX_DCOC_CAL_RESULT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ĳһ��PATH��DCOC��У׼���
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_DCOC_CAL_RESULT_STRU          astMainAntCalResult;                    /* ������DCOCУ׼��� */
    NV_GUC_RX_DCOC_CAL_RESULT_STRU          astDivAntCalResult;                     /* �ּ���DCOCУ׼��� */
    NV_GUC_RX_DCOC_CAL_RESULT_STRU          astAuxMainAntCalResult;                 /* GUC���ã�����������DCOCУ׼��� */
    NV_GUC_RX_DCOC_CAL_RESULT_STRU          astAuxDivAntCalResult;                  /* GUC���ã������ּ���DCOCУ׼��� */

}NV_GUC_RX_PATH_DCOC_CAL_RESULT_STRU;


/*****************************************************************************
 �ṹ��    : NV_GUC_RX_IP2_IQREG_CODE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                           sIRegCode;                              /*��Ҫȷ����UMTS��INT16��ԭ��L��V7r5���õ���UINT16*/
    VOS_INT16                           sQRegCode;

}NV_GUC_RX_IP2_IQREG_CODE_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RX_IP2_CAL_RESULT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_IP2_IQREG_CODE_STRU           stMainAntDivOn;
    NV_GUC_RX_IP2_IQREG_CODE_STRU           stMainAntDivOff;                        /*RFIC ȷ�ϲ���Ҫ����У׼�ּ���Ip2,ɾ����ǰ�汾�й���У׼�ּ��Ĳ���*/

}NV_GUC_RX_IP2_CAL_RESULT_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RX_PATH_IP2_CAL_RESULT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_IP2_CAL_RESULT_STRU           astRxIp2CalResultFreq[MAX_IP2_CAL_FREQ_NUM];
}NV_GUC_RX_PATH_IP2_CAL_RESULT_STRU;


/*****************************************************************************
 �ṹ��    : NV_GUC_RF_HW_BASIC_INFO_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RFIC��ABB�����ӹ�ϵ
*****************************************************************************/
typedef NV_GUC_RF_HW_BASIC_INFO_STRU  UCOM_NV_RF_HW_BASIC_INFO_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RF_BAND_CONFIG_STRU
 �ṹ˵��  : Gģ���ز�ͨ·NV����
*****************************************************************************/
typedef struct
{
    NV_GUC_BAND_DL_PATH_PARA_STRU stBandDlPathPara;                                 /* ������� */
    NV_GUC_BAND_UL_PATH_PARA_STRU stBandUlPathPara;                                 /* ������� */

}UCOM_NV_GSM_RF_BAND_CONFIG_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RF_DL_FEM_PATH_STRU
 �ṹ˵��  : ǰ���������ã�ÿ��PATH������
*****************************************************************************/
typedef NV_GUC_BAND_DL_FEM_PATH_PARA_STRU     UCOM_NV_GSM_RF_DL_FEM_PATH_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RF_UL_FEM_PATH_STRU
 �ṹ˵��  : ǰ���������ã�ÿ��PATH������
*****************************************************************************/
typedef  NV_GUC_BAND_UL_FEM_PATH_PARA_STRU    UCOM_NV_GSM_RF_UL_FEM_PATH_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RF_EXT_LNA_PATH_STRU
 �ṹ˵��  : ����LNA ���� Path �ܽṹ�����ṹ�嶨�壬����Band�ţ�Path��Ϣ
*****************************************************************************/
typedef struct
{
    NV_GUC_BAND_EXT_LNA_PATH_PARA_STRU stExtLnaPathPara;
}UCOM_NV_GSM_RF_EXT_LNA_PATH_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RF_RX_CAL_FREQ_LIST_STRU
 �ṹ˵��  : һ��band��Ӧ��У׼Ƶ��
*****************************************************************************/
typedef     NV_GUC_RF_RX_CAL_FREQ_LIST_STRU UCOM_NV_GSM_RF_RX_CAL_FREQ_LIST_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU
 �ṹ˵��  : GSM��AGC�����л�����
*****************************************************************************/
typedef NV_GUC_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU  UCOM_NV_GSM_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_ALG_RX_FAST_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU
 �ṹ˵��  : GSM��AGC�����л�����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwBlockInitAgc[AGC_MAX_TABLE_NUM];    /* ���ٲ�����ʼ��λ */
    VOS_UINT16                          auhwNoBlockInitAgc[AGC_MAX_TABLE_NUM];  /* ���ٲ�����ʼ��λ */
    NV_GUC_RX_AGC_GAIN_THRESHOLD_STRU       astAgcSwitchTable[AGC_MAX_TABLE_NUM];   /*AGC_MAX_TABLE = 10*/

}UCOM_NV_GSM_ALG_RX_AGC_FAST_SWITCH_THRESHOLD_TABLE_BANK_STRU;

/*****************************************************************************
 �ṹ��    : NV_GUC_RF_RX_AGC_TABLE_USED_INFO_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC��TABLE INDEX�����֧��6��PATH��GUCֻ��Ҫʹ��һ��PATH������BAND
*****************************************************************************/
typedef NV_GUC_RX_AGC_TABLE_INFO_STRU  UCOM_NV_GSM_RF_RX_AGC_TABLE_USED_INFO_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RX_AGC_CAL_RESULT_TABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC��У׼���ֵ����������ֵ��Ƶ��ֵ
*****************************************************************************/
typedef struct
{
        NV_GUC_RX_AGC_CAL_RESULT_STRU   astMainAntAgcCalResult;
        NV_GUC_RX_AGC_CAL_RESULT_STRU   astDivAntAgcCalResult;

}UCOM_NV_GSM_RX_AGC_CAL_RESULT_TABLE_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RX_PATH_DCOC_CAL_RESULT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DCOC��У׼���ֵ,����У׼���ֺ�BBP�ϱ��Ĳ���ֱ��ֵ
*****************************************************************************/
typedef struct
{
        NV_GUC_RX_DCOC_CAL_RESULT_STRU  astMainAntCalResult;
        NV_GUC_RX_DCOC_CAL_RESULT_STRU  astDivAntCalResult;

}UCOM_NV_GSM_RX_PATH_DCOC_CAL_RESULT_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_RX_PATH_IP2_CAL_RESULT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : IP2��У׼���ֵ
*****************************************************************************/
typedef NV_GUC_RX_PATH_IP2_CAL_RESULT_STRU  UCOM_NV_GSM_RX_PATH_IP2_CAL_RESULT_STRU;


/*****************************************************************************
 ö����    : UCOM_NV_W_RF_RX_AGC_RFIC_TABLE_BANK_STRU
 Э����  :
 ö��˵��  : AGC��λ�л�������,boston��֮��ʹ��(��ΪRF�仯)
*****************************************************************************/
typedef NV_GUC_RF_RX_AGC_RFIC_TABLE_BANK_STRU UCOM_NV_G_RF_RX_AGC_RFIC_TABLE_BANK_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_CDMA_RF_RX_CAL_FREQ_LIST_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����У׼��Ƶ���б����֧��32��Ƶ��
*****************************************************************************/
typedef NV_GUC_RF_RX_CAL_FREQ_LIST_STRU     UCOM_NV_CDMA_RF_RX_CAL_FREQ_LIST_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_CDMA_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC�л����޵���Դ�أ�������10�ű�
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_GAIN_THRESHOLD_STRU       astAgcSwitchTable[UCOM_NV_CDMA_AGC_MAX_TABLE_NUM];
}UCOM_NV_CDMA_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_CDMA_RF_RX_AGC_GAIN_TABLE_BANK_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC GAIN DEFAULTֵ����Դ�أ�������10�ű�
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_GAIN_DEFAULT_STRU         astAgcGainDefaultTable[UCOM_NV_CDMA_AGC_MAX_TABLE_NUM];
}UCOM_NV_CDMA_RF_RX_AGC_GAIN_TABLE_BANK_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_CDMA_RF_RX_AGC_RFIC_TABLE_BANK_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC RFIC�����ֵ���Դ�أ�������10�ű�
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_RFIC_TABLE_STRU           astAgcRficTable[UCOM_NV_CDMA_AGC_MAX_TABLE_NUM];
}UCOM_NV_CDMA_RF_RX_AGC_RFIC_TABLE_BANK_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_CDMA_RX_AGC_TABLE_INDEX_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC TABLE������CDMAֻ��1��PATH��ÿ��PATH���֧��˫�գ�����Band��
*****************************************************************************/
typedef NV_GUC_RX_AGC_TABLE_INFO_STRU       UCOM_NV_CDMA_RF_RX_AGC_TABLE_USED_INFO_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_CDMA_RF_RX_RFFE_ILOSS_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ǰ�˵Ĳ���ֵ��CDMAֻ��1��PATH��ÿ��PATH���֧��˫�գ�����Band��
*****************************************************************************/
typedef NV_GUC_RX_PATH_ILOSS_STRU       UCOM_NV_CDMA_RF_RX_RFFE_ILOSS_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_CDMA_RX_AGC_CAL_RESULT_TABLE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : AGC��У׼�����CDMAֻ��1��PATH��ÿ��PATH���֧��˫�գ�����Band��
*****************************************************************************/
typedef NV_GUC_RX_AGC_CAL_RESULT_TABLE_STRU     UCOM_NV_CDMA_RX_AGC_CAL_RESULT_TABLE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_CDMA_RX_PATH_DCOC_CAL_RESULT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DCR��У׼�����CDMAֻ��1��PATH��ÿ��PATH���֧��˫�գ�����Band��
*****************************************************************************/
typedef NV_GUC_RX_PATH_DCOC_CAL_RESULT_STRU     UCOM_NV_CDMA_RX_PATH_DCOC_CAL_RESULT_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_CDMA_RX_PATH_IP2_CAL_RESULT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : IP2��У׼�����CDMAֻ��1��PATH��ÿ��PATH���֧��˫�գ�����Band��
*****************************************************************************/
typedef NV_GUC_RX_PATH_IP2_CAL_RESULT_STRU      UCOM_NV_CDMA_RX_PATH_IP2_CAL_RESULT_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_CDMA_RF_HW_BASIC_INFO_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RFIC��ABB���ӹ�ϵNV�����RFIC������RFIC��ABB����ͨ����
*****************************************************************************/
typedef    NV_GUC_RF_HW_BASIC_INFO_STRU    UCOM_NV_CDMA_RF_HW_BASIC_INFO_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_CDMA_BAND_CONFIG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : RF BAND���������ã�����������ʹ�����߸�����RFIC��ţ�rficͨ����
             RFIC���PortSel��
*****************************************************************************/
typedef struct
{
    NV_GUC_BAND_DL_PATH_PARA_STRU           stBandDlPathPara;                       /* �������ã�CDMA��Чpathֻ��1�� */
    NV_GUC_BAND_UL_PATH_PARA_STRU           stBandUlPathPara;                       /* �������ã�CDMA��Чpathֻ��1�� */
}UCOM_NV_CDMA_BAND_CONFIG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_CDMA_RF_DL_FEM_PATH_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ǰ����������(GPIO/MIPI)����������ͨ��ѡ��Tunerͨ��
*****************************************************************************/
typedef    NV_GUC_BAND_DL_FEM_PATH_PARA_STRU      UCOM_NV_CDMA_RF_DL_FEM_PATH_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_CDMA_RF_UL_FEM_PATH_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ǰ����������(GPIO/MIPI)����������ͨ��ѡ��Tunerͨ��
*****************************************************************************/
typedef    NV_GUC_BAND_UL_FEM_PATH_PARA_STRU      UCOM_NV_CDMA_RF_UL_FEM_PATH_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_CDMA_RF_EXT_LNA_PATH_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ����ͨ��LNA����
*****************************************************************************/
typedef struct
{
    NV_GUC_EXT_LNA_ANTINFO_STRU                stMainAntLnaInfo;
    NV_GUC_EXT_LNA_ANTINFO_STRU                stDivAntLnaInfo;
    PHY_MIPIDEV_UNIT_STRU                      astLnaTrig[LNA_MIPI_TRIG_NUM];          /*4RX ��Ӧ��Extra Lna MIPI����ͬʱ��Ч*/
}UCOM_NV_CDMA_RF_EXT_LNA_PATH_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GUC_TAS_DPDT_MIPI_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :CDMA TAS MIPI �ṹ��
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU                    astTasDpdtThrough[UCOM_NV_CDMA_TAS_MIPI_NUM];    /* ֱͨ */
    PHY_MIPIDEV_UNIT_STRU                    astTasDpdtSwap[UCOM_NV_CDMA_TAS_MIPI_NUM];       /* ���� */
}UCOM_NV_GUC_TAS_DPDT_MIPI_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_BAND_BIT_MASK_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : BAND�Ƿ�֧��
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwBandMask;                             /* bit0Ϊ1��ʾ֧��band1, ���� */
    VOS_UINT32                          uwBandMaskEx;
}UCOM_NV_W_BAND_BIT_MASK_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_FE_FEATURE_BAND_MASK_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : BAND�Ƿ�֧������
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_APT_CTRL_STRU             stAptCtrlInfo;
    UCOM_NV_W_BAND_BIT_MASK_STRU        stAptOnOffMask;
    UCOM_NV_W_BAND_BIT_MASK_STRU        stEtOnOffMask;
    UCOM_NV_W_BAND_BIT_MASK_STRU        stDpdOnOffMask;
    UCOM_NV_W_BAND_BIT_MASK_STRU        stRslv0Mask;
    UCOM_NV_W_BAND_BIT_MASK_STRU        stRslv1Mask;

}UCOM_NV_W_FE_TX_FEATURE_CTRL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_FE_RX_FEATURE_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : BAND�Ƿ�֧������
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_BAND_BIT_MASK_STRU            stRslv0Mask;
    UCOM_NV_W_BAND_BIT_MASK_STRU            stRslv1Mask;
    UCOM_NV_W_BAND_BIT_MASK_STRU            stRslv2Mask;
    UCOM_NV_W_BAND_BIT_MASK_STRU            stRslv3Mask;

}UCOM_NV_W_FE_RX_FEATURE_CTRL_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_BBP_TX_TIMING_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : W����ʱ����
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwTxChanDelay;                         /* ���е�����ʱ���� */
    VOS_UINT16                          uhwPaInitDelay;                         /* ��ǰ������PA��chip����ȡֵ��Χ0~1023������ֵ40us����154chip */
    VOS_UINT16                          uhwPaOffDelay;                          /* �Ӻ�ر�����PA��chip���� */
    VOS_UINT16                          uhwTxInitDelay;                         /* ��ǰ������RF��chip����ȡֵ��Χ0~1023������ֵ800us����3072chip */
    VOS_UINT16                          uhwTxOffDelay;                          /* �Ӻ�ر�����RF��chip���� */
    VOS_UINT16                          uhwTxIdleOnDelay;                       /* ��ǰ������RF IDLE״̬��chip����ȡֵ��Χ0~1023������ֵ100us����384chip */
    VOS_UINT16                          uhwTxIdleOffDelay;                      /* �Ӻ�ر�����RF IDLE״̬��chip���� */
    VOS_UINT16                          uhwTxAbbInitDelay;
    VOS_UINT16                          uhwTxAbbOffDelay;
    VOS_UINT16                          shwTxGainOpenTime;                      /* ���з��书����Чʱ�䣬��λchip����ʾ���з��书������ǰ����ʱ϶ͷ���ʱ��������Ƶ������
                                                                                   ������Ƶ��������ʱ��Ϊʹ���з��书��������ʱ϶ͷ����Ч������ǰ�����з��书�ʼ�����������Ƶ���� */
    VOS_UINT16                          uhwEtDataPathIntDelay;                  /* ET����ͨ·������ʱ */

    VOS_UINT16                          uhwReserved0;
    VOS_UINT16                          uhwReserved1;
    VOS_UINT16                          uhwReserved2;
    VOS_UINT16                          uhwReserved3;
    VOS_UINT16                          uhwReserved4;
    VOS_UINT16                          uhwReserved5;
    VOS_UINT16                          uhwReserved6;
    VOS_UINT16                          uhwReserved7;
    VOS_UINT16                          uhwReserved8;
    VOS_UINT16                          uhwReserved9;
    VOS_UINT16                          uhwReserved10;

}UCOM_NV_W_BBP_TX_TIMING_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_CONFIG_TIMING_STRU
 Э����  :
 �ṹ˵��  : PA�Ŀ�����Ϣ��ǰ��ʱ϶ͷ��Чʱ�䣬��λchip
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_MIPI_APT_TIMING_CFG_STRU  stAptTimingInfo;
    VOS_UINT16                          uhwReserved0;
    VOS_UINT16                          uhwReserved1;
    VOS_UINT16                          uhwReserved2;
    VOS_UINT16                          uhwReserved3;
    VOS_UINT16                          uhwReserved4;
    VOS_UINT16                          uhwReserved5;
    VOS_UINT16                          uhwReserved6;
    VOS_UINT16                          uhwReserved7;
    VOS_UINT16                          uhwReserved8;
    VOS_UINT16                          uhwReserved9;
    VOS_UINT16                          uhwReserved10;


}UCOM_NV_W_TX_CONFIG_TIMING_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_BAND_TIMING_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : W����ʱ����
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_PA_GAIN_SWITH_TIMING_STRU     stPaGainSwichTiming;                /* PA�����л�ʱ�� */
    VOS_UINT16                              uhwTxPhaseCompTiming;
    VOS_UINT16                              uhwReserved0;
    VOS_UINT16                              uhwReserved1;
    VOS_UINT16                              uhwReserved2;
    VOS_UINT16                              uhwReserved3;
    VOS_UINT16                              uhwReserved4;
    VOS_UINT16                              uhwReserved5;
    VOS_UINT16                              uhwReserved6;
    VOS_UINT16                              uhwReserved7;
    VOS_UINT16                              uhwReserved8;
}UCOM_NV_W_TX_BAND_TIMING_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_UL_CFR_GATE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              uwDefaultCfrFirstGate;
    VOS_UINT32                              uwDefaultCfrSecondGate;
    VOS_UINT32                              uwDpdCfrFirstGate;
    VOS_UINT32                              uwDpdCfrSecondGate;
}UCOM_NV_W_UL_CFR_GATE_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_TX_MAXPOWER_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                                   shwTxMaxPowerRach;                             /* ����Ƶ�Σ����н�����DPCH�����RACHʱUE�����������书�ʣ���λ0.1dbm;��0��ΪRACH,��1��ΪDPCH, */
    VOS_INT16                                   shwTxMaxPowerDpch;                             /* ����Ƶ�Σ����н�����DPCH�����RACHʱUE�����������书�ʣ���λ0.1dbm;��0��ΪRACH,��1��ΪDPCH, */
    VOS_INT16                                   ashwTxMaxPowerTempComp[UCOM_NV_W_TEMP_NUM];    /* ����书�ʲ������棬��λ0.1dbm;3��Ƶ�Σ�5��Ԥ�ȶ�����¶ȵ�:-20,0,20,40,60,��6�������ڶ��룬��ʹ�� */
}UCOM_NV_WCDMA_TX_MAXPOWER_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_TX_MAXPOWER_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                                   shwTxMinPower;                                  /* UE�������С���书�ʣ���λ0.1dbm;3��Ƶ�Σ�5��Ԥ�ȶ�����¶ȵ�:-20,0,20,40,60,��6�������ڶ��룬��ʹ�� */
    VOS_INT16                                   shwRslv;                                        /* ���� */
    VOS_INT16                                   ashwTxMinPowerTempComp[UCOM_NV_W_TEMP_NUM];     /* ��С���书���¶Ȳ��� */
}UCOM_NV_WCDMA_TX_MINPOWER_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_TX_POWER_STANDARD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    UCOM_NV_WCDMA_TX_MAXPOWER_STRU              stTxWiredMaxPower;              /* ���� */
    UCOM_NV_WCDMA_TX_MAXPOWER_STRU              stTxWirelessMaxPower;           /* ���� */
    UCOM_NV_WCDMA_TX_MINPOWER_STRU              stTxMinPower;
}UCOM_NV_W_TX_POWER_STANDARD_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_BAND_UL_FEATRUE_MIPI_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU               astMipiEtAptOn[UCOM_NV_ET_MIPI_NUM];                          /* MIPI PA On���� */
    PHY_MIPIDEV_UNIT_STRU               astMipiEtAptOff[UCOM_NV_ET_MIPI_NUM];                        /* MIPI PA OFF���� */
    PHY_MIPIDEV_UNIT_STRU               astMipiEtAptH2UL[UCOM_NV_PA_GAIN_NUM_MAX][UCOM_NV_ET_MIPI_NUM];    /* MIPI PA����������� PA_MODE_MIPI_NUM=4 */
    PHY_MIPIDEV_CMD_STRU                astMipiAptPaVccH2UL[UCOM_NV_PA_GAIN_NUM_MAX];
    PHY_MIPIDEV_CMD_STRU                astMipiAptPaVbiasH2UL[UCOM_NV_W_TX_PA_VBIAS_NUM][UCOM_NV_PA_GAIN_NUM_MAX];
    PHY_MIPIDEV_UNIT_STRU               stMipiAptTrigger1;
    PHY_MIPIDEV_UNIT_STRU               stMipiAptTrigger2;

}UCOM_NV_W_BAND_UL_FEATRUE_MIPI_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_DUL_PATH_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : Band����������Ϣ����band������������Ϣ��
*****************************************************************************/
typedef struct
{
    NV_GUC_BAND_DL_PATH_PARA_STRU           stBandDlPathPara;
    NV_GUC_BAND_UL_PATH_PARA_STRU           stBandUlPathPara;
}UCOM_NV_DUL_PATH_PARA_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_UL_FEM_PATH_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ǰ���������ã�ÿ��PATH������
*****************************************************************************/
typedef struct
{
    NV_GUC_BAND_UL_GPIO_PARA_STRU           stBandUlGpioPara;                       /* ����GPIO���� */
    NV_GUC_BAND_UL_MIPI_PARA_STRU           stBandUlMipiPara;                       /* ����MIPI���� */
    PHY_MIPIDEV_UNIT_STRU                   stMipiAntTxTrig;
    PHY_MIPIDEV_UNIT_STRU                   stMipiPaTrig;

}UCOM_NV_W_UL_FEM_PATH_PARA_STRU;

typedef UCOM_NV_DUL_PATH_PARA_STRU UCOM_NV_W_RF_DUL_PATH_PARA_STRU;

typedef NV_GUC_BAND_DL_FEM_PATH_PARA_STRU UCOM_NV_W_DL_FEM_PATH_PARA_STRU;

typedef NV_GUC_BAND_EXT_LNA_PATH_PARA_STRU UCOM_NV_W_EXT_LNA_PATH_PARA_STRU;

typedef NV_GUC_RF_HW_BASIC_INFO_STRU NV_W_RF_HW_BASIC_INFO_STRU;

typedef NV_GUC_RX_AGC_TABLE_INFO_STRU UCOM_NV_W_RF_RX_AGC_TABLE_USED_INFO_STRU;

typedef NV_GUC_RX_PATH_ILOSS_STRU UCOM_NV_W_RF_RX_PATH_ILOSS_STRU;

typedef NV_GUC_RX_AGC_CAL_RESULT_TABLE_STRU UCOM_NV_W_RX_AGC_CAL_RESULT_TABLE_STRU;


/*****************************************************************************
 ö����    : UCOM_NV_W_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU
 Э����  :
 ö��˵��  : AGC��λ�л����ޱ�,boston��֮��ʹ��(��ΪRF�仯)
*****************************************************************************/
typedef NV_GUC_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU UCOM_NV_W_ALG_RX_AGC_THRESHOLD_TABLE_BANK_STRU;


/*****************************************************************************
 ö����    : UCOM_NV_W_RF_RX_AGC_RFIC_TABLE_BANK_STRU
 Э����  :
 ö��˵��  : AGC��λ�л�������,boston��֮��ʹ��(��ΪRF�仯)
*****************************************************************************/
typedef NV_GUC_RF_RX_AGC_RFIC_TABLE_BANK_STRU UCOM_NV_W_RF_RX_AGC_RFIC_TABLE_BANK_STRU;


/*****************************************************************************
 ö����    : UCOM_NV_W_RF_RX_AGC_RFIC_TABLE_BANK_STRU
 Э����  :
 ö��˵��  : AGC deffault gain,boston��֮��ʹ��(��ΪRF�仯)
*****************************************************************************/
typedef NV_GUC_RF_RX_AGC_GAIN_TABLE_BANK_STRU UCOM_NV_W_RF_RX_AGC_GAIN_TABLE_BANK_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_PATH_DCOC_CAL_RESULT_STRU
 Э����  :
 �ṹ˵��  : DCOCУ׼ֵNV,Wֻ��һ��path��boston��֮��ʹ��(��ΪRF�仯)
*****************************************************************************/
typedef NV_GUC_RX_PATH_DCOC_CAL_RESULT_STRU UCOM_NV_W_RX_PATH_DCOC_CAL_RESULT_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_PATH_DCOC_CAL_RESULT_STRU
 Э����  :
 �ṹ˵��  : DCOC NV,boston��֮��ʹ��(��ΪRF�仯)
*****************************************************************************/
typedef NV_GUC_RX_DCOC_CAL_RESULT_STRU UCOM_NV_W_RX_DCOC_CAL_RESULT_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_PATH_IP2_CAL_RESULT_STRU
 Э����  :
 �ṹ˵��  : IP2У׼ֵNV,Wֻ��һ��path��boston��֮��ʹ��(��ΪRF�仯)
*****************************************************************************/
typedef NV_GUC_RX_PATH_IP2_CAL_RESULT_STRU UCOM_NV_W_RX_PATH_IP2_CAL_RESULT_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RX_PATH_IP2_CAL_RESULT_STRU
 Э����  :
 �ṹ˵��  : IP2У׼
*****************************************************************************/
typedef NV_GUC_RX_IP2_CAL_RESULT_STRU UCOM_NV_W_RX_IP2_CAL_RESULT_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_RF_RX_CAL_FREQ_LIST_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��ҪУ׼��WCDMA��Ƶ�������Ƶ��,boston��֮��ʹ��(��ΪRF�仯)
*****************************************************************************/
typedef NV_GUC_RF_RX_CAL_FREQ_LIST_STRU UCOM_NV_WCDMA_RF_RX_CAL_FREQ_LIST_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_RF_TX_CAL_FREQ_LIST_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��ҪУ׼��Ƶ���б�,boston��֮��ʹ��(��ΪRF�仯)
*****************************************************************************/
typedef struct
{
    UINT16                              uhwValidCalFreqNum;                     /* ��ҪУ׼��Ƶ����� */
    UINT16                              uhwRsv;
    UINT16                              auhwTxCalFreqList[RF_TX_MAX_FREQ_NUM];  /* RF_TX_MAX_FREQ_NUM =32,��RX����һ�� */

}UCOM_NV_WCDMA_RF_TX_CAL_FREQ_LIST_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_WCDMA_RX_AGC_FREQ_COMP_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��ҪУ׼��WCDMA��Ƶ��Ƶ��,boston��֮��ʹ��(��ΪRF�仯)
*****************************************************************************/
typedef NV_GUC_RX_AGC_FREQ_COMP_CAL_STRU UCOM_NV_WCDMA_RX_AGC_FREQ_COMP_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_CLOSE_LOOP_TUNER_PARA_STRU
 �ṹ˵��  : �ջ�tuner�����ṹ��
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              uwBandSupport;                      /* ��ӦbitΪ1��ʾ���band֧�ֶ�̬���ߵ�г,����֧�� */
    VOS_UINT32                              uwBandExten;                        /* �Ժ�band ID���ܳ���32 */
    VOS_UINT16                              uhwActiveTime;                      /* ���ߵ�г������ǰ֡ͷ�������������д򿪺�WBBPÿ����֡ͷ��ǰcpu_tx_sw_active_time�������ã���λΪchip */
    VOS_UINT16                              uhwSampleTime;                      /* ���ߵ�гƽ��������,Ĭ������Ϊ4 */
    VOS_UINT16                              uhwDelayFrame;                      /* ���һ�ֵ�г��ĵȴ�ʱ�䣬��λ֡ */
    VOS_UINT16                              uhwEchoLossThreshold;               /* ���ߵ�г�ز��������,����0.1dBm */
    VOS_UINT32                              uwForWardGpioWord;                  /* פ�����ǰ������ */
    VOS_UINT32                              uwReverseGpioWord;                  /* פ����ⷴ������ */
    PHY_MIPIDEV_CMD_STRU                    stTunerMipiCmd;                     /* MIPI������ */
    UCOM_NV_W_ANT_TUNER_CODE_STRU           stAntTunerCode;                     /* ���ߵ�г������Ϣ */
} UCOM_NV_W_CLOSE_LOOP_TUNER_PARA_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_ANT_TUNER_CTRL_INFO_STRU
 �ṹ˵��  : ���ߵ�г�Ŀ��ƽṹ��,MIPI��tuner,���Ǽ��ݶ����ͺţ��ṩ���6��������
*****************************************************************************/
typedef struct
{
    UCOM_NV_TUNER_SUPPORT_MODE_ENUM_UINT16  enAntTunerMode;                     /* 0:Ӳ����֧�֣�1:֧�ֿ�����2:֧��AP+Sensor, 3:֧�ֶ�̬��г */
    UCOM_NV_RFFE_CTRL_ENUM_UINT16           enAntTunerCtrlType;                 /* ���ߵ�г��ͨ��MIPI���ƻ���GPIO,0��ʾGPIO,1��ʾMIPI */
    PHY_MIPIDEV_UNIT_STRU                   stTunerActiveReg;                   /* tuner�Ĺ�����ʼ�������֣�����һЩ�Ĵ���ֻ��Ҫģʽ��������һ�� */
    PHY_MIPIDEV_UNIT_STRU                   stTunerIdleReg;                     /* ����tunerΪIDLE̬��͹���̬�Ŀ����� */
    UCOM_NV_W_CLOSE_LOOP_TUNER_PARA_STRU    stCloseLoopTunerCtrl;               /* �ջ�tuner���� */
} UCOM_NV_W_ANT_TUNER_CTRL_INFO_STRU;

typedef UCOM_NV_W_ANT_TUNER_CTRL_INFO_STRU UCOM_NV_CDMA_ANT_TUNER_CTRL_INFO_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_REDUCE_CURRENT_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��������
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwReduceCurrentEn;                     /* ��������ʹ�� */
    UCOM_NV_RFFE_CTRL_ENUM_UINT16       enCtrlMode;                             /* ���Ʒ�ʽMIPI��GPIO */
    VOS_UINT32                          uwGpioMask;                             /* ��������ʹ�õĹܽ� */
    PHY_MIPIDEV_UNIT_STRU               stDefaultMipiData;                      /* �ں�����������Ӧ��PMU��ַ��ȱʡʱ�ĵ���ֵ(��һ��ʱ϶), */
    PHY_MIPIDEV_UNIT_STRU               stLimitMipiData;                        /* �ں�����������Ӧ��PMU��ַ��ȱʡʱ�ĵ���ֵ(��һ��ʱ϶) */
}UCOM_NV_GSM_REDUCE_CURRENT_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_MIPI_INIT_WORD_STRU
 �ṹ˵��  : ������ģ��ʼ������,��ʼ��mipi�����Ľӿ�
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU                   astMipiInitWord[UCOM_NV_W_MIPI_INIT_WORD_NUM];
}UCOM_NV_W_MIPI_INIT_WORD_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_MIPI_COMM_STRU
 Э����  :
 �ṹ˵��  : ����һЩmipi���ܹ���ָ���
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU                   astMipiWord[UCOM_NV_MIPI_COMM_NUM];
}UCOM_NV_MIPI_COMM_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_ET_MIPI_WORD_STRU
 Э����  :
 �ṹ˵��  : ����һЩmipi���ܹ���ָ���
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU                   astMipiWord[UCOM_NV_ET_MIPI_MAX_NUM];
}UCOM_NV_ET_MIPI_WORD_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_ET_DPD_SELF_CAL_FE_CFG_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_ET_DPD_MRX_CFG_STRU       stMrxCfgInfo;                           /* ET ��DPDУ׼ʱ��MRX���ò��� */
    UCOM_NV_ET_MIPI_WORD_STRU           stEtDpdCalMipiCfg;                      /* ET ��DPDУ׼ʱ��ET����������Ҫ���� */
}UCOM_NV_W_ET_DPD_SELF_CAL_FE_CFG_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_RFFE_MIPI_ET_CTRL_STRU
 Э����  :
 �ṹ˵��  : Et��MIPIָ��
*****************************************************************************/

typedef struct
{
    UCOM_NV_ET_MIPI_WORD_STRU               stMipiEtOn;                         /* ET������mipi������ */
    UCOM_NV_ET_MIPI_WORD_STRU               stMipiEtOff;                        /* ET�����ر�mipi������ */
    UCOM_NV_ET_MIPI_WORD_STRU               stMipiEtMode;                       /* ET��������ΪET ģʽmipi������ */
    UCOM_NV_ET_MIPI_WORD_STRU               stMipiMAptMode;                     /* ET��������ΪM APT ģʽmipi������ */
    UCOM_NV_ET_MIPI_WORD_STRU               stMipiLAptMode;                     /* ET��������ΪL APT ģʽmipi������ */
}UCOM_NV_W_RFFE_MIPI_ET_CTRL_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_RFFE_GPIO_VALUE_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              uwGpioMask;                         /* ��Ƶ�ܽ�����,0��ʾ��bitλ����Ҫ���� */
    VOS_UINT32                              uwGpioValue;                        /* ��Ƶ�ܽ������ƽ ֵ,0��ʾ�õ͵�ƽ��1��ʾ�ߵ�ƽ */
}UCOM_NV_RFFE_GPIO_VALUE_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_FEM_PIN_TO_GPIO_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : �߿�������GPIO�ܽźŵ�ӳ���
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              uwFemPinToGpio[32];                 /* GPIOת���� */
}UCOM_NV_FEM_PIN_TO_GPIO_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_ANT_SWITCH_MIPI_CTRL_WORD_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : mipi ant �Ĵ���������
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU                   astAntMipiCtrlWord[UCOM_NV_MAX_MIPI_ANT_NUMBER];
}UCOM_NV_ANT_SWITCH_MIPI_CTRL_WORD_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GPIO_MIPI_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    UCOM_NV_FEMIO_CTRL_MODE_ENUM_UINT32     enMode;                             /* ����ģʽ */
    UCOM_NV_RFFE_GPIO_VALUE_STRU            stGpioCtrl;                         /* GPIO ���� */
    UCOM_NV_ANT_SWITCH_MIPI_CTRL_WORD_STRU  stMipiCtrl;                         /* MIPI ���� */
}UCOM_NV_GPIO_MIPI_CTRL_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_DPD_SELF_CAL_INFO_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  :
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwDpdBackOffPower;                          /* DPD��У׼�����е������ʻ���ֵ����λ0.1dB */
    VOS_UINT16                          auhwDpdLinearGainIndex[UCOM_NV_BBP_DPD_LUT_MAX_NUM];  /* DPD��У׼�����ж�Ӧÿ��DPD�������gain index,��Чֵ0-63���㷨�Ƽ�8����PA�й� */
    UCOM_NV_W_ET_DPD_MRX_CFG_STRU       stDpdMrxCfg;                             /* ET ��DPDУ׼ʱ��MRX���ò��� */
    UCOM_NV_MIPI_COMM_STRU              stMipiReserved;                         /* ET ��DPDУ׼ʱ��ET����������Ҫ���� */
}UCOM_NV_W_DPD_SELF_CAL_INFO_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_W_DPD_LUT_CAL_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DPD LUT ��������ز���
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwSinToneFreqTableMode;                /* Sine������ѡ��0:1.92M����,1:1.92M�����,
                                                                                2:0.96M����,3:0.96M�����,4:0.48M����,5:0.48M����� */
    VOS_UINT16                          uhwDpdAlgSel;                           /* DPD�㷨ѡ�� */
    VOS_UINT16                          uhwPaGainCorrectFactor;                 /* LUT��һ�����ֵ */
    VOS_UINT16                          uhwProtectIndex;                        /* LUT��������ֵ */
    VOS_UINT16                          uhwDpdAveSwitch;                        /* LUT��ƽ���㷨���� */
    VOS_UINT16                          uhwDpdAveLength;                        /* LUT��ƽ���㷨ƽ������  */
}UCOM_NV_W_DPD_LUT_CAL_PARA_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_W_DPD_CAL_PARA_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : DPD ����ز���
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_DPD_LUT_CAL_PARA_STRU                          stDpdLutCalPara;   /* DPD LUT ��������ز��� */
    UCOM_NV_W_DPD_SELF_CAL_INFO_STRU                         stDpdSelfCalPara;
}UCOM_NV_W_DPD_CAL_PARA_STRU;



/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_MIPI_INIT_WORD_STRU
 �ṹ˵��  : ������ģ��ʼ������,��ʼ��mipi�����Ľӿ�
*****************************************************************************/
typedef struct
{
   PHY_MIPIDEV_UNIT_STRU        astMipiInitWord[ UCOM_NV_G_MIPI_INIT_UNIT_MAX_NUM ];

}UCOM_NV_GSM_MIPI_INIT_WORD_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_CLOSE_MIPI_PA_VCC_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : close vcc control
*****************************************************************************/
typedef struct
{
  PHY_MIPIDEV_UNIT_STRU   astMipiClosePaVcc[UCOM_NV_G_PAVCC_MIPI_UNIT_MAX_NUM];
}UCOM_NV_GSM_CLOSE_MIPI_PA_VCC_STRU;


/*****************************************************************************
 �ṹ��    : UCOM_NV_G_PA_VCC_MIPI_CMD_FRAME_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ��PaVcc��mipiָ��֡
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU               astMipiPaVcc[UCOM_NV_G_PAVCC_MIPI_UNIT_MAX_NUM];
}UCOM_NV_G_PA_VCC_MIPI_CMD_FRAME_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_ANT_TUNER_CTRL_INFO_STRU
 �ṹ˵��  : ���ߵ�г�Ŀ��ƽṹ��,MIPI��tuner,���Ǽ��ݶ����ͺţ��ṩ���6��������
*****************************************************************************/
typedef struct
{
    UCOM_NV_TUNER_SUPPORT_MODE_ENUM_UINT16  enAntTunerMode;                     /* Ӳ���Ƿ�֧�����ߵ�г��0��֧�֣�1֧�� */
    UCOM_NV_RFFE_CTRL_ENUM_UINT16           enAntTunerCtrlType;                 /* ���ߵ�г��ͨ��MIPI���ƻ���GPIO,0��ʾGPIO,1��ʾMIPI */
    UCOM_NV_GSM_TUNER_GPIO_MASK_STRU        stTunerGpioMask;
    PHY_MIPIDEV_UNIT_STRU                   astTunerActiveReg[UCOM_NV_G_TUNER_MIPI_UNIT_MAX_NUM];  /* tuner�Ĺ�����ʼ�������֣�����һЩ�Ĵ���ֻ��Ҫģʽ��������һ�� */
    PHY_MIPIDEV_UNIT_STRU                   astTunerIdleReg[UCOM_NV_G_TUNER_MIPI_UNIT_MAX_NUM];    /* ����tunerΪIDLE̬��͹���̬�Ŀ����� */
} UCOM_NV_G_ANT_TUNER_CTRL_INFO_STRU;

/*****************************************************************************
 �ṹ��    : UCOM_NV_GSM_NOTCH_CHAN_CTRL_STRU
 Э����  :
 ASN.1���� :
 �ṹ˵��  : ���߿����˲���ͨ���Ŀ���
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwNotchSupportFlag;                /* DCS1800 TX NOTCH����֧�ֱ�־��1��ʾ֧�֣�0��ʾ��֧�� */
    VOS_UINT16                              uhwNotchControlMode;                /* NOTCH���Ʒ�ʽ:1��ʾGPIOģʽ��2��ʾMipi��ʽ��3��ʾGPIO+MIPI��Ϸ�ʽ */
    VOS_UINT32                              uwNotchGpioSetValue;                /* Nothc GPIO����ֵ��uhwNotchControlMode=1����3ʱ��Ч */
    VOS_UINT32                              uwNotchGpioDefaultValue;            /* Nothc GPIO����ֵ��uhwNotchControlMode=1����3ʱ��Ч */
    PHY_MIPIDEV_UNIT_STRU                   astNotchMipiNew[UCOM_NV_G_NOTCH_MIPI_UNIT_MAX_NUM]; /* ����NOTCHͨ��MIPI�ӿڿ��Ƶ�ַ */
    UCOM_NV_GSM_NOTCH_POWER_COMP_STRU       stNotchPowerComp;                   /* Notch���书�ʲ��� */

 }UCOM_NV_GSM_NOTCH_CHAN_CTRL_STRU;



/*****************************************************************************
  7 UNION����
*****************************************************************************/


/*****************************************************************************
  8 OTHERS����
*****************************************************************************/


/*****************************************************************************
  9 ȫ�ֱ�������
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/












#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of phyNvDefine_Boston */

