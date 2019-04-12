/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : phyNvDefine_Boston
  版 本 号   : 初稿
  作    者   : h00165915
  生成日期   : 2016年7月1日
  最近修改   :
  功能描述   : PhyNvDefine.h 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2016年7月1日
    作    者   : h00165915
    修改内容   : 创建文件

******************************************************************************/

#ifndef __PHYNVDEFINE_BOSTON_H__
#define __PHYNVDEFINE_BOSTON_H__


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(1)

/*****************************************************************************
  2 宏定义
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

#define UCOM_NV_CDMA_AGC_MAX_TABLE_NUM  ( 10 )                                  /* CDMA的AGC最大TABLE数，AGC GAIN、AGC控制字和AGC切换门限共用，TABLE的索引值一一对应 */

/* ET支持的最大MIPI个数 */
#define UCOM_NV_ET_MIPI_NUM             ( 4 )
#define UCOM_NV_W_TX_PA_VBIAS_NUM       ( 3 )                                   /* pa vbias个数 */
#define UCOM_NV_PA_GAIN_NUM_MAX         ( 4 )                                   /* pa gain个数 */

/* CDMA tas mipi最大单元个数 */
#define UCOM_NV_CDMA_TAS_MIPI_NUM       ( 4 )
#define UCOM_NV_W_TEMP_NUM              ( 0x10  )                               /* 温度补偿设置的温度点，前5个分别代表 -20,0,20,40,60，第6个用于字节对齐 */
#define RF_TX_MAX_FREQ_NUM              ( 16 )


#define UCOM_NV_TAS_DPDT_MIPI_UNIT_MAX_NUM      ( 4 )
#define UCOM_NV_G_NOTCH_MIPI_UNIT_MAX_NUM       ( 4 )
#define UCOM_NV_G_PAVCC_MIPI_UNIT_MAX_NUM       ( 4 )
#define UCOM_NV_G_TUNER_MIPI_UNIT_MAX_NUM       ( 4 )
#define UCOM_NV_G_MIPI_INIT_UNIT_MAX_NUM        ( 16 )
#define UCOM_NV_MAX_MIPI_ANT_UNIT_NUMBER        ( 4 )

/*****************************************************************************
  3 枚举定义
*****************************************************************************/

/*****************************************************************************
 枚举名    :UCOM_NV_FEMIO_CTRL_MODE_ENUM_UINT32
 协议表格  :
 ASN.1描述 :
 枚举说明  :
*****************************************************************************/
enum UCOM_NV_FEMIO_CTRL_MODE_ENUM
{
    UCOM_NV_FEMIO_CTRL_TOP              = 0,                                    /* 无需配置 */                                                          /* 上行仅存在DPCH */
    UCOM_NV_GPIO_ONLY                   = 1,                                    /* 只配置GPIO */                                                           /* 上行存在RACH */
    UCOM_NV_MIPI_ONLY                   = 2,                                    /* 只配置MIPI */
    UCOM_NV_GPIO_MIPI                   = 3,                                    /* 配置GPIO和MIPI */
    UCOM_NV_FEMIO_CTRL_BUTT
};
typedef VOS_UINT32 UCOM_NV_FEMIO_CTRL_MODE_ENUM_UINT32;
/*****************************************************************************
  4 消息头定义
*****************************************************************************/


/*****************************************************************************
  5 消息定义
*****************************************************************************/


/*****************************************************************************
  6 STRUCT定义
*****************************************************************************/
/*****************************************************************************
 结构名    : PHY_MIPIDEV_CMD_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : MIPI命令控制结构体
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          bitByteCnt                  :5;         /* 0表示该CMMAND无效，取值0~4 */
    VOS_UINT32                          bitMipiPortSel              :3;         /* mipi port 0~7 */
    VOS_UINT32                          bitSlaveID                  :4;         /* slave id 0~15 */
    VOS_UINT32                          bitRegAddr                  :16;        /* reg addr 0~65535 */
    VOS_UINT32                          bitRsv                      :4;         /* 四字节对齐 */

} PHY_MIPIDEV_CMD_STRU;

/*****************************************************************************
 结构名    : PHY_MIPIDEV_DATA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : MIPI数据结构体
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          bitByte0                    :8;          /* 第一个byte */
    VOS_UINT32                          bitByte1                    :8;          /* 第二个byte */
    VOS_UINT32                          bitByte2                    :8;          /* 第三个byte */
    VOS_UINT32                          bitByte3                    :8;          /* 第四个byte */

} PHY_MIPIDEV_DATA_STRU;

/*****************************************************************************
 结构名    : PHY_MIPIDEV_UNIT_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : MIPI命令最小单元
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_CMD_STRU                stCmd;                                  /*控制域*/
    PHY_MIPIDEV_DATA_STRU               stData;                                 /*数据域,一个MIPI占用2个UINT32*/

} PHY_MIPIDEV_UNIT_STRU;


/*****************************************************************************
 结构名    : NV_GUC_BAND_DL_RFIC_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 下行RFIC配置,包括RFIC ID,通道号，输入的PORT口
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          bitRficIdx                  :2;         /* RFIC ID：[0,2]分别表示RFIC1，RFIC2，RFIC3 */
    VOS_UINT32                          bitRficRxCh                 :2;         /* 下行RX通道号，每个RFIC有3个通道，分别是RX1，RX2，RX3; 对于下行4*4MIMO固定使用RX1A1B+RX3A3B,但是采用同一个TX_PLL1控制，因此MIMO场景不用选RX通道，但4收切2收时，
                                                                                只切向Main和Div Ant,RFIC的两收RxCh需要填写使用的通道号；如果支持2收场景，RxCh表示使用的Rx通道号;
                                                                                4R 和2R复用同一个NV */


    VOS_UINT32                          bitRfPortCrossFlag          :1;         /*主集天线的信号流接到了 RFIC DRX Port口，软件需要在CTU通道交叉到主集，只支持2收的交叉*/
    VOS_UINT32                          bitMainAntRxPortSel         :4;         /* 主集LNA的RFIC端口选择，即信号通过哪个端口输入到RFIC */
    VOS_UINT32                          bitDivAntRxPortSel          :4;         /* 分集LNA的RFIC端口选择 */
    VOS_UINT32                          bitAuxMainAntRxPortSel      :4;         /* 辅助主集LNA的RFIC端口选择，目前只有LTE使用，GUC不使用 */
    VOS_UINT32                          bitAuxDivAntRxPortSel       :4;         /* 辅助分集LNA的RFIC端口选择，目前只有LTE使用，GUC不使用 */
    VOS_UINT32                          bitRsv0                     :2;         /* 预留位 */
    VOS_UINT32                          bitRsv1                     :2;
    VOS_UINT32                          bitRsv2                     :2;
    VOS_UINT32                          bitRsv3                     :2;
    VOS_UINT32                          bitRsv4                     :3;

} NV_GUC_BAND_DL_RFIC_PARA_STRU;

/*****************************************************************************
 结构名    : NV_BAND_UL_RFIC_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 上行RFIC配置,包括RFIC ID,通道号，输出的PORT口
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          bitRficIdx                 :2;          /* 上行通道所在的RFIC ID,支持收发分离 */
    VOS_UINT32                          bitRficTxCh                :2;          /* 上行通道号，上行MIMO固定使用Tx1Ch,因此当满足上行MIMO后，不取此通道；单发情况下，填写Tx1Iq1,Tx2Iq；上行2Tx转1Tx复用NV，策略和Rx一样*/
    VOS_UINT32                          bitMainAntRficTxPortSel    :4;          /* 上行PORT口选择 */
    VOS_UINT32                          bitDivAntRficTxPortSel     :4;
    VOS_UINT32                          bitMainAntRficTxMrxPortSel :1;           /*上行环回通道对Mrx通道的选择，0: MRX1 RF input selected  1: MRX2 RF input selected*/
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
 结构名    : NV_GUC_BAND_DL_PATH_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 每个PATH的下行RFIC通道配置
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          bitRxAntNum                 :3;         /* 接收天线数 */
    VOS_UINT16                          bitMainAntValidFlag         :1;         /* 2收case下，使用天线分布情况，用于校准 */
    VOS_UINT16                          bitDivAntValidFlag          :1;
    VOS_UINT16                          bitAuxMainAntValidFlag      :1;
    VOS_UINT16                          bitAuxDivAntValidFlag       :1;
    VOS_UINT16                          bitRsv0                     :2;
    VOS_UINT16                          bitRsv1                     :3;
    VOS_UINT16                          bitRsv2                     :4;
    VOS_UINT16                          usDlFemPathIdx;                         /* 获取下行 FemPath NV的Idx号:0~255，FemPathNV 完全动态查询，包括 天线和外置LNA同时查询，二者Idx保持一致*/

    NV_GUC_BAND_DL_RFIC_PARA_STRU       stBandDlRficPara;                       /* 下行RFIC参数 */

} NV_GUC_BAND_DL_PATH_PARA_STRU;

/*****************************************************************************
 结构名    : NV_GUC_BAND_UL_PATH_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 每个PATH的上行RFIC通道配置
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          bitTxAntNum                 :2;         /* 发射天线数 */
    VOS_UINT16                          bitMainAntValid             :1;         /* 2发case下，使用天线分布情况，用于校准 */
    VOS_UINT16                          bitDivAntValid              :1;
    VOS_UINT16                          bitAptPdm0PinSel            :3;
    VOS_UINT16                          bitAptPdm1PinSel            :3;         /* GUCT 模不关心 */
    VOS_UINT16                          bitPmuAuxSel                :3;
    VOS_UINT16                          bitRsv                      :3;
    VOS_UINT16                          usUlFemPathIdx;                         /* 获取上行 FemPath NV的Idx号:0~255，FemPathNV 完全动态查询 */

    NV_GUC_BAND_UL_RFIC_PARA_STRU       stBandUlRficPara;                       /* RFIC参数 */
}NV_GUC_BAND_UL_PATH_PARA_STRU;


/*****************************************************************************
 结构名    : NV_GUC_BAND_DL_GPIO_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 前端下行GPIO配置，包括天线开关，TUNER等，支持天线开关和TUNER单独配置
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              ulMainRxAntSel;                         /*ASM通路上的切换开关,各天线开关或出去*/
    VOS_UINT32                              ulMainRxAntSelExt;                      /*ASM通路上的切换开关,各天线开关或出去*/
    VOS_UINT32                              ulDivRxAntSel;
    VOS_UINT32                              ulDivRxAntSelExt;
    VOS_UINT32                              ulAuxMainRxAntSel;                      /*ASM通路上的切换开关*/
    VOS_UINT32                              ulAuxMainRxAntSelExt;
    VOS_UINT32                              ulAuxDivRxAntSel;
    VOS_UINT32                              ulAuxDivRxAntSelExt;
    VOS_UINT32                              ulMainRxTunerSel;                       /*ASM通路上的切换开关*/
    VOS_UINT32                              ulMainRxTunerSelExt;
    VOS_UINT32                              ulDivRxTunerSel;
    VOS_UINT32                              ulDivRxTunerSelExt;
    VOS_UINT32                              ulAuxMainTunerRxSel;                    /*ASM通路上的切换开关*/
    VOS_UINT32                              ulAuxMainTunerRxSelExt;
    VOS_UINT32                              ulAuxDivRxTunerSel;
    VOS_UINT32                              ulAuxDivRxTunerSelExt;

} NV_GUC_BAND_DL_GPIO_PARA_STRU;

/*****************************************************************************
 结构名    : NV_GUC_BAND_DL_MIPI_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 前端下行MIPI配置，包括天线开关，TUNER等，支持天线开关和TUNER单独配置
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU              astMipiMainAntRxSel[RX_ANT_SEL_MIPI_NUM];            /*Ant Mipi num=4,需要射频评估*/
    PHY_MIPIDEV_UNIT_STRU              astMipiDivAntRxSel[RX_ANT_SEL_MIPI_NUM ];
    PHY_MIPIDEV_UNIT_STRU              astMipiAuxMainAntRxSel[RX_ANT_SEL_MIPI_NUM ];
    PHY_MIPIDEV_UNIT_STRU              astMipiAuxDivAntRxSel[RX_ANT_SEL_MIPI_NUM ];
    PHY_MIPIDEV_UNIT_STRU              astMipiMainTunerRxSel[ANT_TUNER_MIPI_NUM ];
    PHY_MIPIDEV_UNIT_STRU              astMipiDivTunerRxSel[ANT_TUNER_MIPI_NUM ];           /*Tuner Mipi num=2,需要射频评估*/
    PHY_MIPIDEV_UNIT_STRU              astMipiAuxMainTunerRxSel[ANT_TUNER_MIPI_NUM ];
    PHY_MIPIDEV_UNIT_STRU              astMipiAuxDivTunerRxSel[ANT_TUNER_MIPI_NUM ];
    PHY_MIPIDEV_UNIT_STRU              astMipiAntTrig[MAX_RX_ANT_NUM ];                     /*Ant Mipi Trig*/
    PHY_MIPIDEV_UNIT_STRU              astMipiTunerTrig[MAX_RX_ANT_NUM ];                   /*Tuner Mipi Trig*/

    PHY_MIPIDEV_UNIT_STRU              astMipiMainAntRxCloseSel[RX_ANT_SEL_MIPI_NUM];       /* 新增NV */

} NV_GUC_BAND_DL_MIPI_PARA_STRU;

/*****************************************************************************
 结构名    : NV_GUC_BAND_DL_FEM_PATH_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 每条PATH的前端下行MIPI配置，包括天线开关，TUNER等，
             支持天线开关和TUNER单独配置
*****************************************************************************/
typedef struct
{

    NV_GUC_BAND_DL_GPIO_PARA_STRU           stBandDlGpioPara;                       /* 每条PATH下行GPIO配置 */
    NV_GUC_BAND_DL_MIPI_PARA_STRU           stBandDlMipiPara;                       /* 每条PATH下行MIPI配置 */

}NV_GUC_BAND_DL_FEM_PATH_PARA_STRU;


/*****************************************************************************
 结构名    : NV_GUC_BAND_UL_GPIO_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 上行GPIO配置，包括天线开关，TUNER等，支持天线开关和TUNER单独配置
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              ulTxAntSel;                             /* 上行天线开关 */
    VOS_UINT32                              ulTxAntSelExt;
    VOS_UINT32                              ulTxTuner;                              /* 上行Tuner开关 */
    VOS_UINT32                              ulTxTunerExt;
    VOS_UINT32                              ulPaEnCtrl;                             /* PA线控开关 */
    VOS_UINT32                              ulPaHighModeCtrl;                       /* PA高增益控制字 */
    VOS_UINT32                              ulPaMidModeCtrl;                        /* PA中增益控制字 */
    VOS_UINT32                              ulPaLowModeCtrl;                        /* PA低增益控制字 */
    VOS_UINT32                              ulPaUltraLowModeCtrl;                   /* utralow */

} NV_GUC_BAND_UL_GPIO_PARA_STRU;

/*****************************************************************************
 结构名    : NV_GUC_BAND_UL_MIPI_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 上行MIPI配置，包括天线开关，TUNER等，支持天线开关和TUNER单独配置
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU               astMipiAntSelTx[TX_ANT_SEL_MIPI_NUM];   /* MIPI上行天线开关  TX_ANT_SEL_MIPI_NUM =4 */
    PHY_MIPIDEV_UNIT_STRU               astMipiTunerTx[ANT_TUNER_MIPI_NUM];     /* MIPI上行TUNER开关 Tx Tuner is only for Gsm,num=2 */


    PHY_MIPIDEV_UNIT_STRU               stMipiPaOnCtrl;                         /* MIPI PA On控制 */
    PHY_MIPIDEV_UNIT_STRU               stMipiPaOffCtrl;                        /* MIPI PA OFF控制 */
    PHY_MIPIDEV_UNIT_STRU               astMipiPaHighMode[PA_MODE_MIPI_NUM];    /* MIPI PA高增益控制字 PA_MODE_MIPI_NUM=4 */
    PHY_MIPIDEV_UNIT_STRU               astMipiPaMidMode[PA_MODE_MIPI_NUM];     /* MIPI PA中增益控制字 PA_MODE_MIPI_NUM=4 */
    PHY_MIPIDEV_UNIT_STRU               astMipiPaLowMode[PA_MODE_MIPI_NUM];     /* MIPI PA低增益控制字 PA_MODE_MIPI_NUM=4 */
    PHY_MIPIDEV_UNIT_STRU               astMipiPaUltraLowMode[PA_MODE_MIPI_NUM];

    PHY_MIPIDEV_UNIT_STRU               astMipiAntSelTxClose[TX_ANT_SEL_MIPI_NUM];


    PHY_MIPIDEV_UNIT_STRU               stMipiPaTrigger;                        /* 新增 */


} NV_GUC_BAND_UL_MIPI_PARA_STRU;

/*****************************************************************************
 结构名    : NV_GUC_BAND_UL_FEM_SINGLE_ANTENNA_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 前端上行配置
*****************************************************************************/
typedef struct
{
    NV_GUC_BAND_UL_GPIO_PARA_STRU           stBandUlGpioPara;                       /* 上行GPIO配置 */
    NV_GUC_BAND_UL_MIPI_PARA_STRU           stBandUlMipiPara;                       /* 上行MIPI配置 */

}NV_GUC_BAND_UL_FEM_SINGLE_ANTENNA_PARA_STRU;

/*****************************************************************************
 结构名    : NV_GUC_BAND_UL_FEM_PATH_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 前端上行配置，每个PATH的配置
*****************************************************************************/
typedef struct
{
    NV_GUC_BAND_UL_FEM_SINGLE_ANTENNA_PARA_STRU     astBandUlFemPara[MAX_TX_ANT_NUM];   /*按照天线数定义上行FEM 结构*/
    PHY_MIPIDEV_UNIT_STRU                           astMipiAntTxTrig[MAX_TX_ANT_NUM];
    PHY_MIPIDEV_UNIT_STRU                           astMipiPaTrig[MAX_TX_ANT_NUM];

}NV_GUC_BAND_UL_FEM_PATH_PARA_STRU;

/*****************************************************************************
 结构名    : NV_LNA_CTRL_ENUM
 协议表格  :
 ASN.1描述 :
 结构说明  : 外置LNA配置方式，GPIO、MIPI
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
 结构名    : NV_GUC_EXT_LNA_ANTINFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : LNA相关配置
*****************************************************************************/
typedef struct
{

    NV_LNA_CTRL_ENUM_UINT16                 enLnaCtrlInd;                           /* LNA控制方式 */
    VOS_UINT16                              usGpioLnaLevelNum;                      /* Lna支持的档位 */

    VOS_UINT32                              ulGpioLnaMask;                          /* LNA GPIO线控 */
    VOS_UINT32                              ulGpioLnaMaskExt;

    VOS_UINT32                              aulGpioLnaGain[EXT_LNA_LEVEL_NUM];      /* GPIO LNA增益 */
    VOS_UINT32                              aulGpioLnaGainExt[EXT_LNA_LEVEL_NUM];

    PHY_MIPIDEV_UNIT_STRU                   astMipilnaBandSel[EXT_LNA_BAND_SEL_NUM];/* MIPI LAN band选择 */

    PHY_MIPIDEV_UNIT_STRU                   astMipiLnaOff[EXT_LNA_OFF_NUM];         /* MIPI LAN OFF */

    PHY_MIPIDEV_UNIT_STRU                   astMipiLnaGain0[LNA_SINGLE_GAIN_MIPI_NUM]; /* MIPI LAN GAIN0配置 */
    PHY_MIPIDEV_UNIT_STRU                   astMipiLnaGain1[LNA_SINGLE_GAIN_MIPI_NUM]; /* MIPI LAN GAIN1配置 */
    PHY_MIPIDEV_UNIT_STRU                   astMipiLnaGain2[LNA_SINGLE_GAIN_MIPI_NUM]; /* MIPI LAN GAIN2配置 */
    PHY_MIPIDEV_UNIT_STRU                   astMipiLnaGain3[LNA_SINGLE_GAIN_MIPI_NUM]; /* MIPI LAN GAIN3配置 */

    VOS_UINT16                              ausNoblockLnaGainIdx[AGC_MAX_GAIN_NUM]; /* 实际的AGC NOBLOCK档位索引外置LNA的档位 */
    VOS_UINT16                              ausBlockLnaGainIdx[AGC_MAX_GAIN_NUM];   /* 实际的AGC BLOCK档位索引外置LNA的档位 */
    VOS_UINT16                              ausAcsLnaGainIdx[AGC_MAX_GAIN_NUM];     /* 实际的ACS NOBLOCK档位索引外置LNA的档位 */

}NV_GUC_EXT_LNA_ANTINFO_STRU;

/*****************************************************************************
 结构名    : NV_BAND_EXT_LNA_PATH_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 外置LNA按照天线数定义结构信息
*****************************************************************************/
typedef struct
{
    NV_GUC_EXT_LNA_ANTINFO_STRU                stMainAntLnaInfo;
    NV_GUC_EXT_LNA_ANTINFO_STRU                stDivAntLnaInfo;
    NV_GUC_EXT_LNA_ANTINFO_STRU                stAuxMainAntLnaInfo;
    NV_GUC_EXT_LNA_ANTINFO_STRU                stAuxDivAntLnaInfo;
    PHY_MIPIDEV_UNIT_STRU                      astLnaTrig[LNA_MIPI_TRIG_NUM];          /*4RX 对应的Extra Lna MIPI控制同时生效*/

}NV_GUC_BAND_EXT_LNA_PATH_PARA_STRU;

/*****************************************************************************
 结构名    : NV_RF_MIPI_INIT_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : RFIC 初始化结构参数结构体定义
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              usRegAddr;                              /* Reg Addr: 0~65535 ,Extended Write Long MIPI*/
    VOS_UINT16                              usRegData;

}NV_RF_MIPI_INIT_STRU;

/*****************************************************************************
 结构名    : NV_MODEM_RF_RFIC_INIT_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : RFIC 初始化结构参数NV名称结构体定义
*****************************************************************************/
typedef struct
{
    VOS_UINT16 usRegNum;                                                            /* Single RFIC Init LUT Reg Num */
    VOS_UINT16 usRsv;
    NV_RF_MIPI_INIT_STRU                astUint[RFIC_INIT_REG_NUM];

}NV_MODEM_RF_RFIC_INIT_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RFIC_CONNECT_ABB_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : RFIC和ABB的连接关系
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usRficSlaveId;                          /* 同一个MIPI控制2个RFIC，RFIC chip ID的值，0--chipId下拉，1--chipId上拉*/
    VOS_UINT16                          usRficMipiPortSel;                      /* MIPI Port选择 */
    VOS_UINT16                          ausRficRxCh[MAX_RFIC_RX_CH_NUM];        /* 表示每个RFIC的RX1,Rx2,RX3分别与ABB通道的连接情况,实际填写ABB的通道号[0,9] */
    VOS_UINT16                          ausRficABCrossFlag[MAX_RFIC_RX_CH_NUM]; /* RFIC（主分集）与ABB的通道主分集是否有交叉 */
    VOS_UINT16                          usMrxCh;                                /* RFIC MRX IQ和ABB IQ连接关系,填ABB MRX IQ号 */

    VOS_UINT16                          ausRficTxCh[MAX_RFIC_TX_CH_NUM];        /* 表示每个RFIC的TX1,TX2分别与ABB TX通道的连接情况，填写ABB的TX IQ通道号 */
    VOS_UINT16                          ausRficTxChCrossFlag[MAX_RFIC_TX_CH_NUM];/* RFIC TX IQ正负与ABB的 IQ正负是否有交叉,待确认? */
    VOS_UINT16                          usRsv;
}NV_GUC_RFIC_CONNECT_ABB_PARA_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RF_HW_BASIC_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : RFIC和ABB的连接关系
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usRifcNum;
    VOS_UINT16                          usRsv;
    NV_GUC_RFIC_CONNECT_ABB_PARA_STRU   astRficConnectAbb[MAX_RFIC_NUM];
}NV_GUC_RF_HW_BASIC_INFO_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RF_RX_CAL_FREQ_LIST_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 需要校准的频点列表，每个BAND最多支持32个频点，该NV区分BAND号
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usValidCalFreqNum;                      /* 需要校准的频点个数 */
    VOS_UINT16                          usRsv;
    VOS_UINT16                          aulRxCalFreqList[RF_RX_MAX_FREQ_NUM];   /* RF_RX_FREQ_NUM =32 ,GUTL单位100KHz,CDMA:1KHz*/

}NV_GUC_RF_RX_CAL_FREQ_LIST_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RX_AGC_GAIN_THRESHOLD_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC切换门限，包括BLOCK、NOBLOCK和ACS
*****************************************************************************/
typedef struct
{
    VOS_INT16                           asNoBlockInc[AGC_MAX_GAIN_NUM];         /* NOBLOCK的上门限，AGC_MAX_GAIN_NUM = 8，单位：1dB */
    VOS_INT16                           asNoBlockDec[AGC_MAX_GAIN_NUM];         /* NOBLOCK的下门限，AGC_MAX_GAIN_NUM = 8，单位：1dB */
    VOS_INT16                           asBlockInc[AGC_MAX_GAIN_NUM];           /* BLOCK的上门限，BLOCK改为8档，AGC_MAX_GAIN_NUM = 8，单位：1dB */
    VOS_INT16                           asBlockDec[AGC_MAX_GAIN_NUM];           /* BLOCK的下门限，BLOCK改为8档，AGC_MAX_GAIN_NUM = 8，单位：1dB */
    VOS_INT16                           asAcsInc[AGC_MAX_GAIN_NUM];             /* ACS的上门限，GUC不用，AGC_MAX_GAIN_NUM = 8，单位：1dB */
    VOS_INT16                           asAcsDec[AGC_MAX_GAIN_NUM];             /* ACS的上门限，GUC不用，AGC_MAX_GAIN_NUM = 8，单位：1dB */
}NV_GUC_RX_AGC_GAIN_THRESHOLD_STRU;

/*****************************************************************************
 结构名    : NV_GUC_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC切换门限资源池，最多支持10张表，包含10种不同的AGC切换门限
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_GAIN_THRESHOLD_STRU   astAgcSwitchTable[AGC_MAX_TABLE_NUM];   /*AGC_MAX_TABLE = 10*/

}NV_GUC_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RX_AGC_GAIN_DEFAULT_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC的默认GAIN值，包含BLOCK、NOBLOCK和ACS
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          ausGainNBlock[AGC_MAX_GAIN_NUM];        /* NOBLOCK的默认AGC GAIN值，AGC_MAX_GAIN_NUM = 8，单位:1/8 dB */
    VOS_UINT16                          ausGainBlock[AGC_MAX_GAIN_NUM];         /* BLOCK的默认AGC GAIN值，支持8档AGC，AGC_MAX_GAIN_NUM = 8，单位:1/8 dB */
    VOS_UINT16                          ausGainAcs[AGC_MAX_GAIN_NUM];           /* ACS的默认AGC GAIN值，GUC不用，AGC_MAX_GAIN_NUM = 8，单位:1/8 dB */

}NV_GUC_RX_AGC_GAIN_DEFAULT_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RF_RX_AGC_GAIN_TABLE_BANK_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC默认GAIN值的资源池，最多支持10张表，包含10种不同的AGC DEFAULT GAIN
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_GAIN_DEFAULT_STRU         astAgcGainDefaultTable[AGC_MAX_TABLE_NUM];  /*AGC_MAX_TABLE = 10*/

}NV_GUC_RF_RX_AGC_GAIN_TABLE_BANK_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RX_AGC_RFIC_TABLE_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC的RFIC控制字，包含BLOCK、NOBLOCK和ACS
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          ausRfTableNoBlok[AGC_MAX_GAIN_NUM];     /* NOBLOCK下AGC的RFIC控制字，AGC_MAX_GAIN_NUM = 8 */
    VOS_UINT16                          ausRfTableBlock[AGC_MAX_GAIN_NUM];      /* BLOCK下AGC的RFIC控制字，支持8档，AGC_MAX_GAIN_NUM = 8 */
    VOS_UINT16                          ausRfTableAcs[AGC_MAX_GAIN_NUM];        /* ACS下AGC的RFIC控制字，GUC不用，AGC_MAX_GAIN_NUM = 8 */

}NV_GUC_RX_AGC_RFIC_TABLE_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RF_RX_AGC_RFIC_TABLE_BANK_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC的RFIC控制字资源池，最多支持10张表，包含10种不同的RFIC控制字
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_RFIC_TABLE_STRU           astAgcRficTable[AGC_MAX_TABLE_NUM];     /*AGC_MAX_TABLE = 10*/

}NV_GUC_RF_RX_AGC_RFIC_TABLE_BANK_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RX_AGC_TABLE_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 某一个PATH中每根天线所选择的AGC TABLE INDEX，根据INDEX去索引对应的
 AGC的切换门限、AGC DEFAULT GAIN和AGC的RFIC控制字
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          bitMainAntRxAgcTableIdx         :4;     /* 主集天线对应的AGC TABLE INDEX */
    VOS_UINT32                          bitDivAntRxAgcTableIdx          :4;     /* 分集天线对应的AGC TABLE INDEX */
    VOS_UINT32                          bitAuxMainAntRxAgcTableIdx      :4;     /* GUC不用，辅助主集天线对应的AGC TABLE INDEX */
    VOS_UINT32                          bitAuxDivAntRxAgcTableIdx       :4;     /* GUC不用，辅助分集天线对应的AGC TABLE INDEX 理论上4bit可以满足，为了4字节对齐，采用了8bit*/
    VOS_UINT32                          bitRsv0                         :4;
    VOS_UINT32                          bitRsv1                         :4;
    VOS_UINT32                          bitRsv2                         :4;
    VOS_UINT32                          bitRsv3                         :4;
}NV_GUC_RX_AGC_TABLE_INFO_STRU;


/*****************************************************************************
 结构名    : NV_GUC_RF_RX_AGC_TABLE_USED_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC的TABLE INDEX，最多支持6个PATH，GUC只需要使用一个PATH，区分BAND
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_TABLE_INFO_STRU       astAgcTableInfoDlPath[DL_PATH_NUM];

}NV_GUC_RF_RX_AGC_TABLE_USED_INFO_STRU;


/*****************************************************************************
 结构名    : NV_GUC_RX_PATH_ILOSS_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 某一个PATH中每根天线所选择的插损值
*****************************************************************************/
typedef struct
{
    VOS_INT16                           bitMainAntRffeIloss         :8;         /* 主集天线对应的插损值，单位:1db */
    VOS_INT16                           bitDivAntRffeIloss          :8;         /* 分集天线对应的插损值，单位:1db */
    VOS_INT16                           bitAuxMainAntRffeIloss      :8;         /* GUC不用，辅助主集天线对应的插损值，单位:1db */
    VOS_INT16                           bitAuxDivAntRffeIloss       :8;         /* GUC不用，辅助分集天线对应的插损值，单位:1db，理论上4bit可以满足，为了4字节对齐，采用了8bit*/

}NV_GUC_RX_PATH_ILOSS_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RF_RX_RFFE_ILOSS_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 前端的插损值，最多支持6个PATH，GUC只用一个PATH，区分BAND
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_PATH_ILOSS_STRU           astRffeIlossDlPath[DL_PATH_NUM];

}NV_GUC_RF_RX_RFFE_ILOSS_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RX_AGC_GAIN_LEVEL_CAL_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC的校准结果，包含插损值，但是不包含频补值
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          ausGainLevelNoBlock[AGC_MAX_GAIN_NUM];  /* NOBLOCK的AGC校准值，单位:1/8dB，AGC_MAX_GAIN_NUM = 8 */
    VOS_UINT16                          ausGainLevelBlock[AGC_MAX_GAIN_NUM];    /* BLOCK的AGC校准值，单位:1/8dB，AGC_MAX_GAIN_NUM = 8 */
    VOS_UINT16                          ausGainLevelAcs[AGC_MAX_GAIN_NUM];      /* GUC不用，ACS的AGC校准值，单位:1/8dB，AGC_MAX_GAIN_NUM = 8 */

}NV_GUC_RX_AGC_GAIN_LEVEL_CAL_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RX_AGC_FREQ_COMP_CAL_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC的频补校准结果
*****************************************************************************/
typedef struct
{
    VOS_INT16                           ausFreqComp[RF_RX_MAX_FREQ_NUM];        /* RF_RX_MAX_FREQ_NUM = 32 */

}NV_GUC_RX_AGC_FREQ_COMP_CAL_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RX_AGC_CAL_RESULT_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC某一根天线对应的总的校准结果
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_GAIN_LEVEL_CAL_STRU   stGainLevelCalResult;                   /* 包含了AGC_GAIN_DEFAULT和插损，但是不含有频补值，频补需要再做插值计算*/
    NV_GUC_RX_AGC_FREQ_COMP_CAL_STRU    stFreqCalResult;                        /* AGC的频补校准值 */
    VOS_INT16                           sRffeIloss;                             /* 校准时使用的插损值 */
    VOS_INT16                           sRsv;

}NV_GUC_RX_AGC_CAL_RESULT_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RX_AGC_CAL_RESULT_TABLE_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC某一个PATH对应的总的校准结果，GUC只用一个PATH，区分BAND
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_CAL_RESULT_STRU           astMainAntAgcCalResult;                 /* 主集天线对应的AGC校准结果 */
    NV_GUC_RX_AGC_CAL_RESULT_STRU           astDivAntAgcCalResult;                  /* 分集天线对应的AGC校准结果 */
    NV_GUC_RX_AGC_CAL_RESULT_STRU           astAuxMainAntAgcCalResult;              /* GUC不用，辅助主集天线对应的AGC校准结果 */
    NV_GUC_RX_AGC_CAL_RESULT_STRU           astAuxDivAntAgcCalResult;               /* GUC不用，辅助分集天线对应的AGC校准结果 */

}NV_GUC_RX_AGC_CAL_RESULT_TABLE_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RX_DCOC_COMP_VAlUE_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : DCOC的校准码字和BBP上报的残余直流值
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usDciCode;                              /* 校准的I路的DCOC码字 */
    VOS_UINT16                          usDcqCode;                              /* 校准的Q路的DCOC码字 */
    VOS_INT16                           sRemainDigitalDci;                      /* 校准时BBP上报的I路的残余直流值 */
    VOS_INT16                           sRemainDigitalDcq;                      /* 校准时BBP上报的Q路的残余直流值 */

}NV_GUC_RX_DCOC_COMP_VAlUE_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RX_DCOC_CAL_RESULT_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 某一个PATH中每根天线的DCOC的校准结果，按照VGA档位校准的，最多包含16组
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_DCOC_COMP_VAlUE_STRU          astDcocComp[MAX_VGA_GAIN_NUM];

}NV_GUC_RX_DCOC_CAL_RESULT_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RX_DCOC_CAL_RESULT_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 某一个PATH的DCOC的校准结果
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_DCOC_CAL_RESULT_STRU          astMainAntCalResult;                    /* 主集的DCOC校准结果 */
    NV_GUC_RX_DCOC_CAL_RESULT_STRU          astDivAntCalResult;                     /* 分集的DCOC校准结果 */
    NV_GUC_RX_DCOC_CAL_RESULT_STRU          astAuxMainAntCalResult;                 /* GUC不用，辅助主集的DCOC校准结果 */
    NV_GUC_RX_DCOC_CAL_RESULT_STRU          astAuxDivAntCalResult;                  /* GUC不用，辅助分集的DCOC校准结果 */

}NV_GUC_RX_PATH_DCOC_CAL_RESULT_STRU;


/*****************************************************************************
 结构名    : NV_GUC_RX_IP2_IQREG_CODE_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                           sIRegCode;                              /*需要确认下UMTS用INT16的原因，L在V7r5上用的是UINT16*/
    VOS_INT16                           sQRegCode;

}NV_GUC_RX_IP2_IQREG_CODE_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RX_IP2_CAL_RESULT_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_IP2_IQREG_CODE_STRU           stMainAntDivOn;
    NV_GUC_RX_IP2_IQREG_CODE_STRU           stMainAntDivOff;                        /*RFIC 确认不需要单独校准分集的Ip2,删除以前版本中关于校准分集的部分*/

}NV_GUC_RX_IP2_CAL_RESULT_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RX_PATH_IP2_CAL_RESULT_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_IP2_CAL_RESULT_STRU           astRxIp2CalResultFreq[MAX_IP2_CAL_FREQ_NUM];
}NV_GUC_RX_PATH_IP2_CAL_RESULT_STRU;


/*****************************************************************************
 结构名    : NV_GUC_RF_HW_BASIC_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : RFIC和ABB的连接关系
*****************************************************************************/
typedef NV_GUC_RF_HW_BASIC_INFO_STRU  UCOM_NV_RF_HW_BASIC_INFO_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_GSM_RF_BAND_CONFIG_STRU
 结构说明  : G模单载波通路NV配置
*****************************************************************************/
typedef struct
{
    NV_GUC_BAND_DL_PATH_PARA_STRU stBandDlPathPara;                                 /* 下行相关 */
    NV_GUC_BAND_UL_PATH_PARA_STRU stBandUlPathPara;                                 /* 上行相关 */

}UCOM_NV_GSM_RF_BAND_CONFIG_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_GSM_RF_DL_FEM_PATH_STRU
 结构说明  : 前端下行配置，每个PATH的配置
*****************************************************************************/
typedef NV_GUC_BAND_DL_FEM_PATH_PARA_STRU     UCOM_NV_GSM_RF_DL_FEM_PATH_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_GSM_RF_UL_FEM_PATH_STRU
 结构说明  : 前端上行配置，每个PATH的配置
*****************************************************************************/
typedef  NV_GUC_BAND_UL_FEM_PATH_PARA_STRU    UCOM_NV_GSM_RF_UL_FEM_PATH_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_GSM_RF_EXT_LNA_PATH_STRU
 结构说明  : 外置LNA 单个 Path 总结构参数结构体定义，包括Band号，Path信息
*****************************************************************************/
typedef struct
{
    NV_GUC_BAND_EXT_LNA_PATH_PARA_STRU stExtLnaPathPara;
}UCOM_NV_GSM_RF_EXT_LNA_PATH_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_GSM_RF_RX_CAL_FREQ_LIST_STRU
 结构说明  : 一个band对应的校准频点
*****************************************************************************/
typedef     NV_GUC_RF_RX_CAL_FREQ_LIST_STRU UCOM_NV_GSM_RF_RX_CAL_FREQ_LIST_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_GSM_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU
 结构说明  : GSM的AGC慢速切换门限
*****************************************************************************/
typedef NV_GUC_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU  UCOM_NV_GSM_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_GSM_ALG_RX_FAST_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU
 结构说明  : GSM的AGC快速切换门限
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          auhwBlockInitAgc[AGC_MAX_TABLE_NUM];    /* 快速测量初始档位 */
    VOS_UINT16                          auhwNoBlockInitAgc[AGC_MAX_TABLE_NUM];  /* 快速测量初始档位 */
    NV_GUC_RX_AGC_GAIN_THRESHOLD_STRU       astAgcSwitchTable[AGC_MAX_TABLE_NUM];   /*AGC_MAX_TABLE = 10*/

}UCOM_NV_GSM_ALG_RX_AGC_FAST_SWITCH_THRESHOLD_TABLE_BANK_STRU;

/*****************************************************************************
 结构名    : NV_GUC_RF_RX_AGC_TABLE_USED_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC的TABLE INDEX，最多支持6个PATH，GUC只需要使用一个PATH，区分BAND
*****************************************************************************/
typedef NV_GUC_RX_AGC_TABLE_INFO_STRU  UCOM_NV_GSM_RF_RX_AGC_TABLE_USED_INFO_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_GSM_RX_AGC_CAL_RESULT_TABLE_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC的校准结果值，包括增益值和频补值
*****************************************************************************/
typedef struct
{
        NV_GUC_RX_AGC_CAL_RESULT_STRU   astMainAntAgcCalResult;
        NV_GUC_RX_AGC_CAL_RESULT_STRU   astDivAntAgcCalResult;

}UCOM_NV_GSM_RX_AGC_CAL_RESULT_TABLE_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_GSM_RX_PATH_DCOC_CAL_RESULT_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : DCOC的校准结果值,包括校准码字和BBP上报的残余直流值
*****************************************************************************/
typedef struct
{
        NV_GUC_RX_DCOC_CAL_RESULT_STRU  astMainAntCalResult;
        NV_GUC_RX_DCOC_CAL_RESULT_STRU  astDivAntCalResult;

}UCOM_NV_GSM_RX_PATH_DCOC_CAL_RESULT_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_GSM_RX_PATH_IP2_CAL_RESULT_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : IP2的校准结果值
*****************************************************************************/
typedef NV_GUC_RX_PATH_IP2_CAL_RESULT_STRU  UCOM_NV_GSM_RX_PATH_IP2_CAL_RESULT_STRU;


/*****************************************************************************
 枚举名    : UCOM_NV_W_RF_RX_AGC_RFIC_TABLE_BANK_STRU
 协议表格  :
 枚举说明  : AGC档位切换控制字,boston及之后使用(因为RF变化)
*****************************************************************************/
typedef NV_GUC_RF_RX_AGC_RFIC_TABLE_BANK_STRU UCOM_NV_G_RF_RX_AGC_RFIC_TABLE_BANK_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_CDMA_RF_RX_CAL_FREQ_LIST_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 下行校准的频点列表，最多支持32个频点
*****************************************************************************/
typedef NV_GUC_RF_RX_CAL_FREQ_LIST_STRU     UCOM_NV_CDMA_RF_RX_CAL_FREQ_LIST_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_CDMA_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC切换门限的资源池，最多包含10张表
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_GAIN_THRESHOLD_STRU       astAgcSwitchTable[UCOM_NV_CDMA_AGC_MAX_TABLE_NUM];
}UCOM_NV_CDMA_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_CDMA_RF_RX_AGC_GAIN_TABLE_BANK_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC GAIN DEFAULT值的资源池，最多包含10张表
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_GAIN_DEFAULT_STRU         astAgcGainDefaultTable[UCOM_NV_CDMA_AGC_MAX_TABLE_NUM];
}UCOM_NV_CDMA_RF_RX_AGC_GAIN_TABLE_BANK_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_CDMA_RF_RX_AGC_RFIC_TABLE_BANK_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC RFIC控制字的资源池，最多包含10张表
*****************************************************************************/
typedef struct
{
    NV_GUC_RX_AGC_RFIC_TABLE_STRU           astAgcRficTable[UCOM_NV_CDMA_AGC_MAX_TABLE_NUM];
}UCOM_NV_CDMA_RF_RX_AGC_RFIC_TABLE_BANK_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_CDMA_RX_AGC_TABLE_INDEX_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC TABLE索引表，CDMA只有1个PATH，每个PATH最多支持双收，区分Band号
*****************************************************************************/
typedef NV_GUC_RX_AGC_TABLE_INFO_STRU       UCOM_NV_CDMA_RF_RX_AGC_TABLE_USED_INFO_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_CDMA_RF_RX_RFFE_ILOSS_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 前端的插损值，CDMA只有1个PATH，每个PATH最多支持双收，区分Band号
*****************************************************************************/
typedef NV_GUC_RX_PATH_ILOSS_STRU       UCOM_NV_CDMA_RF_RX_RFFE_ILOSS_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_CDMA_RX_AGC_CAL_RESULT_TABLE_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : AGC的校准结果，CDMA只有1个PATH，每个PATH最多支持双收，区分Band号
*****************************************************************************/
typedef NV_GUC_RX_AGC_CAL_RESULT_TABLE_STRU     UCOM_NV_CDMA_RX_AGC_CAL_RESULT_TABLE_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_CDMA_RX_PATH_DCOC_CAL_RESULT_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : DCR的校准结果，CDMA只有1个PATH，每个PATH最多支持双收，区分Band号
*****************************************************************************/
typedef NV_GUC_RX_PATH_DCOC_CAL_RESULT_STRU     UCOM_NV_CDMA_RX_PATH_DCOC_CAL_RESULT_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_CDMA_RX_PATH_IP2_CAL_RESULT_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : IP2的校准结果，CDMA只有1个PATH，每个PATH最多支持双收，区分Band号
*****************************************************************************/
typedef NV_GUC_RX_PATH_IP2_CAL_RESULT_STRU      UCOM_NV_CDMA_RX_PATH_IP2_CAL_RESULT_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_CDMA_RF_HW_BASIC_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : RFIC和ABB连接关系NV项，包括RFIC个数、RFIC和ABB连接通道等
*****************************************************************************/
typedef    NV_GUC_RF_HW_BASIC_INFO_STRU    UCOM_NV_CDMA_RF_HW_BASIC_INFO_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_CDMA_BAND_CONFIG_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : RF BAND上下行配置，包括上下行使用天线个数，RFIC编号，rfic通道，
             RFIC输出PortSel等
*****************************************************************************/
typedef struct
{
    NV_GUC_BAND_DL_PATH_PARA_STRU           stBandDlPathPara;                       /* 下行配置，CDMA有效path只有1个 */
    NV_GUC_BAND_UL_PATH_PARA_STRU           stBandUlPathPara;                       /* 下行配置，CDMA有效path只有1个 */
}UCOM_NV_CDMA_BAND_CONFIG_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_CDMA_RF_DL_FEM_PATH_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 前端下行配置(GPIO/MIPI)，包括天线通道选择，Tuner通道
*****************************************************************************/
typedef    NV_GUC_BAND_DL_FEM_PATH_PARA_STRU      UCOM_NV_CDMA_RF_DL_FEM_PATH_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_CDMA_RF_UL_FEM_PATH_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 前端上行配置(GPIO/MIPI)，包括天线通道选择，Tuner通道
*****************************************************************************/
typedef    NV_GUC_BAND_UL_FEM_PATH_PARA_STRU      UCOM_NV_CDMA_RF_UL_FEM_PATH_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_CDMA_RF_EXT_LNA_PATH_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 下行通道LNA配置
*****************************************************************************/
typedef struct
{
    NV_GUC_EXT_LNA_ANTINFO_STRU                stMainAntLnaInfo;
    NV_GUC_EXT_LNA_ANTINFO_STRU                stDivAntLnaInfo;
    PHY_MIPIDEV_UNIT_STRU                      astLnaTrig[LNA_MIPI_TRIG_NUM];          /*4RX 对应的Extra Lna MIPI控制同时生效*/
}UCOM_NV_CDMA_RF_EXT_LNA_PATH_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_GUC_TAS_DPDT_MIPI_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :CDMA TAS MIPI 结构体
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU                    astTasDpdtThrough[UCOM_NV_CDMA_TAS_MIPI_NUM];    /* 直通 */
    PHY_MIPIDEV_UNIT_STRU                    astTasDpdtSwap[UCOM_NV_CDMA_TAS_MIPI_NUM];       /* 交叉 */
}UCOM_NV_GUC_TAS_DPDT_MIPI_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_W_BAND_BIT_MASK_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : BAND是否支持
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwBandMask;                             /* bit0为1表示支持band1, 类推 */
    VOS_UINT32                          uwBandMaskEx;
}UCOM_NV_W_BAND_BIT_MASK_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_W_FE_FEATURE_BAND_MASK_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : BAND是否支持特性
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
 结构名    : UCOM_NV_W_FE_RX_FEATURE_CTRL_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : BAND是否支持特性
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_BAND_BIT_MASK_STRU            stRslv0Mask;
    UCOM_NV_W_BAND_BIT_MASK_STRU            stRslv1Mask;
    UCOM_NV_W_BAND_BIT_MASK_STRU            stRslv2Mask;
    UCOM_NV_W_BAND_BIT_MASK_STRU            stRslv3Mask;

}UCOM_NV_W_FE_RX_FEATURE_CTRL_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_W_BBP_TX_TIMING_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : W上行时序定义
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwTxChanDelay;                         /* 上行调制延时补偿 */
    VOS_UINT16                          uhwPaInitDelay;                         /* 提前打开上行PA的chip数。取值范围0~1023。典型值40us等于154chip */
    VOS_UINT16                          uhwPaOffDelay;                          /* 延后关闭上行PA的chip数。 */
    VOS_UINT16                          uhwTxInitDelay;                         /* 提前打开上行RF的chip数。取值范围0~1023。典型值800us等于3072chip */
    VOS_UINT16                          uhwTxOffDelay;                          /* 延后关闭上行RF的chip数。 */
    VOS_UINT16                          uhwTxIdleOnDelay;                       /* 提前打开上行RF IDLE状态的chip数。取值范围0~1023。典型值100us等于384chip */
    VOS_UINT16                          uhwTxIdleOffDelay;                      /* 延后关闭上行RF IDLE状态的chip数。 */
    VOS_UINT16                          uhwTxAbbInitDelay;
    VOS_UINT16                          uhwTxAbbOffDelay;
    VOS_UINT16                          shwTxGainOpenTime;                      /* 上行发射功率生效时间，单位chip。表示上行发射功率需提前上行时隙头多久时间送至射频器件。
                                                                                   由于射频器件有延时，为使上行发射功率在上行时隙头处生效，需提前将上行发射功率计算结果送至射频器件 */
    VOS_UINT16                          uhwEtDataPathIntDelay;                  /* ET数据通路整数延时 */

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
 结构名    : UCOM_NV_W_TX_CONFIG_TIMING_STRU
 协议表格  :
 结构说明  : PA的控制信息提前于时隙头生效时间，单位chip
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
 结构名    : UCOM_NV_W_TX_BAND_TIMING_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : W上行时序定义
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_PA_GAIN_SWITH_TIMING_STRU     stPaGainSwichTiming;                /* PA增益切换时序 */
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
 结构名    : UCOM_NV_W_UL_CFR_GATE_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              uwDefaultCfrFirstGate;
    VOS_UINT32                              uwDefaultCfrSecondGate;
    VOS_UINT32                              uwDpdCfrFirstGate;
    VOS_UINT32                              uwDpdCfrSecondGate;
}UCOM_NV_W_UL_CFR_GATE_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_WCDMA_TX_MAXPOWER_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                                   shwTxMaxPowerRach;                             /* 三个频段，上行仅存在DPCH或存在RACH时UE可允许的最大发射功率，单位0.1dbm;第0列为RACH,第1列为DPCH, */
    VOS_INT16                                   shwTxMaxPowerDpch;                             /* 三个频段，上行仅存在DPCH或存在RACH时UE可允许的最大发射功率，单位0.1dbm;第0列为RACH,第1列为DPCH, */
    VOS_INT16                                   ashwTxMaxPowerTempComp[UCOM_NV_W_TEMP_NUM];    /* 最大发射功率补偿增益，单位0.1dbm;3个频段，5个预先定义的温度点:-20,0,20,40,60,第6个点用于对齐，不使用 */
}UCOM_NV_WCDMA_TX_MAXPOWER_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_WCDMA_TX_MAXPOWER_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :
*****************************************************************************/
typedef struct
{
    VOS_INT16                                   shwTxMinPower;                                  /* UE允许的最小发射功率，单位0.1dbm;3个频段，5个预先定义的温度点:-20,0,20,40,60,第6个点用于对齐，不使用 */
    VOS_INT16                                   shwRslv;                                        /* 保留 */
    VOS_INT16                                   ashwTxMinPowerTempComp[UCOM_NV_W_TEMP_NUM];     /* 最小发射功率温度补偿 */
}UCOM_NV_WCDMA_TX_MINPOWER_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_W_TX_POWER_STANDARD_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :
*****************************************************************************/
typedef struct
{
    UCOM_NV_WCDMA_TX_MAXPOWER_STRU              stTxWiredMaxPower;              /* 有线 */
    UCOM_NV_WCDMA_TX_MAXPOWER_STRU              stTxWirelessMaxPower;           /* 无线 */
    UCOM_NV_WCDMA_TX_MINPOWER_STRU              stTxMinPower;
}UCOM_NV_W_TX_POWER_STANDARD_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_W_BAND_UL_FEATRUE_MIPI_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU               astMipiEtAptOn[UCOM_NV_ET_MIPI_NUM];                          /* MIPI PA On控制 */
    PHY_MIPIDEV_UNIT_STRU               astMipiEtAptOff[UCOM_NV_ET_MIPI_NUM];                        /* MIPI PA OFF控制 */
    PHY_MIPIDEV_UNIT_STRU               astMipiEtAptH2UL[UCOM_NV_PA_GAIN_NUM_MAX][UCOM_NV_ET_MIPI_NUM];    /* MIPI PA高增益控制字 PA_MODE_MIPI_NUM=4 */
    PHY_MIPIDEV_CMD_STRU                astMipiAptPaVccH2UL[UCOM_NV_PA_GAIN_NUM_MAX];
    PHY_MIPIDEV_CMD_STRU                astMipiAptPaVbiasH2UL[UCOM_NV_W_TX_PA_VBIAS_NUM][UCOM_NV_PA_GAIN_NUM_MAX];
    PHY_MIPIDEV_UNIT_STRU               stMipiAptTrigger1;
    PHY_MIPIDEV_UNIT_STRU               stMipiAptTrigger2;

}UCOM_NV_W_BAND_UL_FEATRUE_MIPI_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_DUL_PATH_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : Band基本配置信息，分band，含上下行信息。
*****************************************************************************/
typedef struct
{
    NV_GUC_BAND_DL_PATH_PARA_STRU           stBandDlPathPara;
    NV_GUC_BAND_UL_PATH_PARA_STRU           stBandUlPathPara;
}UCOM_NV_DUL_PATH_PARA_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_W_UL_FEM_PATH_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 前端上行配置，每个PATH的配置
*****************************************************************************/
typedef struct
{
    NV_GUC_BAND_UL_GPIO_PARA_STRU           stBandUlGpioPara;                       /* 上行GPIO配置 */
    NV_GUC_BAND_UL_MIPI_PARA_STRU           stBandUlMipiPara;                       /* 上行MIPI配置 */
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
 枚举名    : UCOM_NV_W_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU
 协议表格  :
 枚举说明  : AGC档位切换门限表,boston及之后使用(因为RF变化)
*****************************************************************************/
typedef NV_GUC_ALG_RX_AGC_SWITCH_THRESHOLD_TABLE_BANK_STRU UCOM_NV_W_ALG_RX_AGC_THRESHOLD_TABLE_BANK_STRU;


/*****************************************************************************
 枚举名    : UCOM_NV_W_RF_RX_AGC_RFIC_TABLE_BANK_STRU
 协议表格  :
 枚举说明  : AGC档位切换控制字,boston及之后使用(因为RF变化)
*****************************************************************************/
typedef NV_GUC_RF_RX_AGC_RFIC_TABLE_BANK_STRU UCOM_NV_W_RF_RX_AGC_RFIC_TABLE_BANK_STRU;


/*****************************************************************************
 枚举名    : UCOM_NV_W_RF_RX_AGC_RFIC_TABLE_BANK_STRU
 协议表格  :
 枚举说明  : AGC deffault gain,boston及之后使用(因为RF变化)
*****************************************************************************/
typedef NV_GUC_RF_RX_AGC_GAIN_TABLE_BANK_STRU UCOM_NV_W_RF_RX_AGC_GAIN_TABLE_BANK_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_W_RX_PATH_DCOC_CAL_RESULT_STRU
 协议表格  :
 结构说明  : DCOC校准值NV,W只用一个path，boston及之后使用(因为RF变化)
*****************************************************************************/
typedef NV_GUC_RX_PATH_DCOC_CAL_RESULT_STRU UCOM_NV_W_RX_PATH_DCOC_CAL_RESULT_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_W_RX_PATH_DCOC_CAL_RESULT_STRU
 协议表格  :
 结构说明  : DCOC NV,boston及之后使用(因为RF变化)
*****************************************************************************/
typedef NV_GUC_RX_DCOC_CAL_RESULT_STRU UCOM_NV_W_RX_DCOC_CAL_RESULT_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_W_RX_PATH_IP2_CAL_RESULT_STRU
 协议表格  :
 结构说明  : IP2校准值NV,W只用一个path，boston及之后使用(因为RF变化)
*****************************************************************************/
typedef NV_GUC_RX_PATH_IP2_CAL_RESULT_STRU UCOM_NV_W_RX_PATH_IP2_CAL_RESULT_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_W_RX_PATH_IP2_CAL_RESULT_STRU
 协议表格  :
 结构说明  : IP2校准
*****************************************************************************/
typedef NV_GUC_RX_IP2_CAL_RESULT_STRU UCOM_NV_W_RX_IP2_CAL_RESULT_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_WCDMA_RF_RX_CAL_FREQ_LIST_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 需要校准的WCDMA的频点个数和频率,boston及之后使用(因为RF变化)
*****************************************************************************/
typedef NV_GUC_RF_RX_CAL_FREQ_LIST_STRU UCOM_NV_WCDMA_RF_RX_CAL_FREQ_LIST_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_WCDMA_RF_TX_CAL_FREQ_LIST_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 需要校准的频点列表,boston及之后使用(因为RF变化)
*****************************************************************************/
typedef struct
{
    UINT16                              uhwValidCalFreqNum;                     /* 需要校准的频点个数 */
    UINT16                              uhwRsv;
    UINT16                              auhwTxCalFreqList[RF_TX_MAX_FREQ_NUM];  /* RF_TX_MAX_FREQ_NUM =32,和RX保持一致 */

}UCOM_NV_WCDMA_RF_TX_CAL_FREQ_LIST_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_WCDMA_RX_AGC_FREQ_COMP_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 需要校准的WCDMA的频点频率,boston及之后使用(因为RF变化)
*****************************************************************************/
typedef NV_GUC_RX_AGC_FREQ_COMP_CAL_STRU UCOM_NV_WCDMA_RX_AGC_FREQ_COMP_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_W_CLOSE_LOOP_TUNER_PARA_STRU
 结构说明  : 闭环tuner参数结构体
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              uwBandSupport;                      /* 对应bit为1表示这个band支持动态天线调谐,否则不支持 */
    VOS_UINT32                              uwBandExten;                        /* 以后band ID可能超出32 */
    VOS_UINT16                              uhwActiveTime;                      /* 天线调谐配置提前帧头配置量，当上行打开后，WBBP每次在帧头提前cpu_tx_sw_active_time进行配置，单位为chip */
    VOS_UINT16                              uhwSampleTime;                      /* 天线调谐平均检测次数,默认配置为4 */
    VOS_UINT16                              uhwDelayFrame;                      /* 完成一轮调谐后的等待时间，单位帧 */
    VOS_UINT16                              uhwEchoLossThreshold;               /* 天线调谐回波损耗门限,精度0.1dBm */
    VOS_UINT32                              uwForWardGpioWord;                  /* 驻波检测前向配置 */
    VOS_UINT32                              uwReverseGpioWord;                  /* 驻波检测反向配置 */
    PHY_MIPIDEV_CMD_STRU                    stTunerMipiCmd;                     /* MIPI控制字 */
    UCOM_NV_W_ANT_TUNER_CODE_STRU           stAntTunerCode;                     /* 天线调谐码字信息 */
} UCOM_NV_W_CLOSE_LOOP_TUNER_PARA_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_ANT_TUNER_CTRL_INFO_STRU
 结构说明  : 天线调谐的控制结构体,MIPI型tuner,考虑兼容多种型号，提供最多6个控制字
*****************************************************************************/
typedef struct
{
    UCOM_NV_TUNER_SUPPORT_MODE_ENUM_UINT16  enAntTunerMode;                     /* 0:硬件不支持，1:支持开环，2:支持AP+Sensor, 3:支持动态调谐 */
    UCOM_NV_RFFE_CTRL_ENUM_UINT16           enAntTunerCtrlType;                 /* 天线调谐是通过MIPI控制还是GPIO,0表示GPIO,1表示MIPI */
    PHY_MIPIDEV_UNIT_STRU                   stTunerActiveReg;                   /* tuner的公共初始化控制字，用于一些寄存器只需要模式加载配置一次 */
    PHY_MIPIDEV_UNIT_STRU                   stTunerIdleReg;                     /* 配置tuner为IDLE态或低功耗态的控制字 */
    UCOM_NV_W_CLOSE_LOOP_TUNER_PARA_STRU    stCloseLoopTunerCtrl;               /* 闭环tuner参数 */
} UCOM_NV_W_ANT_TUNER_CTRL_INFO_STRU;

typedef UCOM_NV_W_ANT_TUNER_CTRL_INFO_STRU UCOM_NV_CDMA_ANT_TUNER_CTRL_INFO_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_GSM_REDUCE_CURRENT_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 二级限流
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwReduceCurrentEn;                     /* 二级限流使能 */
    UCOM_NV_RFFE_CTRL_ENUM_UINT16       enCtrlMode;                             /* 控制方式MIPI或GPIO */
    VOS_UINT32                          uwGpioMask;                             /* 二级限流使用的管脚 */
    PHY_MIPIDEV_UNIT_STRU               stDefaultMipiData;                      /* 内含二级限流对应的PMU地址，缺省时的电流值(第一个时隙), */
    PHY_MIPIDEV_UNIT_STRU               stLimitMipiData;                        /* 内含二级限流对应的PMU地址，缺省时的电流值(第一个时隙) */
}UCOM_NV_GSM_REDUCE_CURRENT_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_W_MIPI_INIT_WORD_STRU
 结构说明  : 用于主模初始化或唤醒,初始化mipi器件的接口
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU                   astMipiInitWord[UCOM_NV_W_MIPI_INIT_WORD_NUM];
}UCOM_NV_W_MIPI_INIT_WORD_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_MIPI_COMM_STRU
 协议表格  :
 结构说明  : 用于一些mipi功能公共指令定义
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU                   astMipiWord[UCOM_NV_MIPI_COMM_NUM];
}UCOM_NV_MIPI_COMM_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_ET_MIPI_WORD_STRU
 协议表格  :
 结构说明  : 用于一些mipi功能公共指令定义
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU                   astMipiWord[UCOM_NV_ET_MIPI_MAX_NUM];
}UCOM_NV_ET_MIPI_WORD_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_W_ET_DPD_SELF_CAL_FE_CFG_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_ET_DPD_MRX_CFG_STRU       stMrxCfgInfo;                           /* ET 及DPD校准时，MRX配置参数 */
    UCOM_NV_ET_MIPI_WORD_STRU           stEtDpdCalMipiCfg;                      /* ET 及DPD校准时，ET器件可能需要改配 */
}UCOM_NV_W_ET_DPD_SELF_CAL_FE_CFG_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_W_RFFE_MIPI_ET_CTRL_STRU
 协议表格  :
 结构说明  : Et的MIPI指令
*****************************************************************************/

typedef struct
{
    UCOM_NV_ET_MIPI_WORD_STRU               stMipiEtOn;                         /* ET器件打开mipi控制字 */
    UCOM_NV_ET_MIPI_WORD_STRU               stMipiEtOff;                        /* ET器件关闭mipi控制字 */
    UCOM_NV_ET_MIPI_WORD_STRU               stMipiEtMode;                       /* ET器件配置为ET 模式mipi控制字 */
    UCOM_NV_ET_MIPI_WORD_STRU               stMipiMAptMode;                     /* ET器件配置为M APT 模式mipi控制字 */
    UCOM_NV_ET_MIPI_WORD_STRU               stMipiLAptMode;                     /* ET器件配置为L APT 模式mipi控制字 */
}UCOM_NV_W_RFFE_MIPI_ET_CTRL_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_RFFE_GPIO_VALUE_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              uwGpioMask;                         /* 射频管脚掩码,0表示该bit位不需要控制 */
    VOS_UINT32                              uwGpioValue;                        /* 射频管脚输出电平 值,0表示该低电平，1表示高电平 */
}UCOM_NV_RFFE_GPIO_VALUE_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_FEM_PIN_TO_GPIO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 线控索引和GPIO管脚号的映射表
*****************************************************************************/
typedef struct
{
    VOS_UINT32                              uwFemPinToGpio[32];                 /* GPIO转换表 */
}UCOM_NV_FEM_PIN_TO_GPIO_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_ANT_SWITCH_MIPI_CTRL_WORD_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : mipi ant 寄存器控制字
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU                   astAntMipiCtrlWord[UCOM_NV_MAX_MIPI_ANT_NUMBER];
}UCOM_NV_ANT_SWITCH_MIPI_CTRL_WORD_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_GPIO_MIPI_CTRL_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :
*****************************************************************************/
typedef struct
{
    UCOM_NV_FEMIO_CTRL_MODE_ENUM_UINT32     enMode;                             /* 配置模式 */
    UCOM_NV_RFFE_GPIO_VALUE_STRU            stGpioCtrl;                         /* GPIO 配置 */
    UCOM_NV_ANT_SWITCH_MIPI_CTRL_WORD_STRU  stMipiCtrl;                         /* MIPI 配置 */
}UCOM_NV_GPIO_MIPI_CTRL_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_W_DPD_SELF_CAL_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  :
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          uwDpdBackOffPower;                          /* DPD自校准方案中单音功率回退值，单位0.1dB */
    VOS_UINT16                          auhwDpdLinearGainIndex[UCOM_NV_BBP_DPD_LUT_MAX_NUM];  /* DPD自校准方案中对应每张DPD表的期望gain index,有效值0-63，算法推荐8，与PA有关 */
    UCOM_NV_W_ET_DPD_MRX_CFG_STRU       stDpdMrxCfg;                             /* ET 及DPD校准时，MRX配置参数 */
    UCOM_NV_MIPI_COMM_STRU              stMipiReserved;                         /* ET 及DPD校准时，ET器件可能需要改配 */
}UCOM_NV_W_DPD_SELF_CAL_INFO_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_W_DPD_LUT_CAL_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : DPD LUT 计算中相关参数
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          uhwSinToneFreqTableMode;                /* Sine单音表选择，0:1.92M正表,1:1.92M共轭表,
                                                                                2:0.96M正表,3:0.96M共轭表,4:0.48M正表,5:0.48M共轭表 */
    VOS_UINT16                          uhwDpdAlgSel;                           /* DPD算法选择 */
    VOS_UINT16                          uhwPaGainCorrectFactor;                 /* LUT归一化相关值 */
    VOS_UINT16                          uhwProtectIndex;                        /* LUT表保护索引值 */
    VOS_UINT16                          uhwDpdAveSwitch;                        /* LUT表平滑算法开关 */
    VOS_UINT16                          uhwDpdAveLength;                        /* LUT表平滑算法平滑长度  */
}UCOM_NV_W_DPD_LUT_CAL_PARA_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_W_DPD_CAL_PARA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : DPD 中相关参数
*****************************************************************************/
typedef struct
{
    UCOM_NV_W_DPD_LUT_CAL_PARA_STRU                          stDpdLutCalPara;   /* DPD LUT 计算中相关参数 */
    UCOM_NV_W_DPD_SELF_CAL_INFO_STRU                         stDpdSelfCalPara;
}UCOM_NV_W_DPD_CAL_PARA_STRU;



/*****************************************************************************
 结构名    : UCOM_NV_GSM_MIPI_INIT_WORD_STRU
 结构说明  : 用于主模初始化或唤醒,初始化mipi器件的接口
*****************************************************************************/
typedef struct
{
   PHY_MIPIDEV_UNIT_STRU        astMipiInitWord[ UCOM_NV_G_MIPI_INIT_UNIT_MAX_NUM ];

}UCOM_NV_GSM_MIPI_INIT_WORD_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_GSM_CLOSE_MIPI_PA_VCC_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : close vcc control
*****************************************************************************/
typedef struct
{
  PHY_MIPIDEV_UNIT_STRU   astMipiClosePaVcc[UCOM_NV_G_PAVCC_MIPI_UNIT_MAX_NUM];
}UCOM_NV_GSM_CLOSE_MIPI_PA_VCC_STRU;


/*****************************************************************************
 结构名    : UCOM_NV_G_PA_VCC_MIPI_CMD_FRAME_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 打开PaVcc的mipi指令帧
*****************************************************************************/
typedef struct
{
    PHY_MIPIDEV_UNIT_STRU               astMipiPaVcc[UCOM_NV_G_PAVCC_MIPI_UNIT_MAX_NUM];
}UCOM_NV_G_PA_VCC_MIPI_CMD_FRAME_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_ANT_TUNER_CTRL_INFO_STRU
 结构说明  : 天线调谐的控制结构体,MIPI型tuner,考虑兼容多种型号，提供最多6个控制字
*****************************************************************************/
typedef struct
{
    UCOM_NV_TUNER_SUPPORT_MODE_ENUM_UINT16  enAntTunerMode;                     /* 硬件是否支持天线调谐，0不支持，1支持 */
    UCOM_NV_RFFE_CTRL_ENUM_UINT16           enAntTunerCtrlType;                 /* 天线调谐是通过MIPI控制还是GPIO,0表示GPIO,1表示MIPI */
    UCOM_NV_GSM_TUNER_GPIO_MASK_STRU        stTunerGpioMask;
    PHY_MIPIDEV_UNIT_STRU                   astTunerActiveReg[UCOM_NV_G_TUNER_MIPI_UNIT_MAX_NUM];  /* tuner的公共初始化控制字，用于一些寄存器只需要模式加载配置一次 */
    PHY_MIPIDEV_UNIT_STRU                   astTunerIdleReg[UCOM_NV_G_TUNER_MIPI_UNIT_MAX_NUM];    /* 配置tuner为IDLE态或低功耗态的控制字 */
} UCOM_NV_G_ANT_TUNER_CTRL_INFO_STRU;

/*****************************************************************************
 结构名    : UCOM_NV_GSM_NOTCH_CHAN_CTRL_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 天线开关滤波器通道的控制
*****************************************************************************/
typedef struct
{
    VOS_UINT16                              uhwNotchSupportFlag;                /* DCS1800 TX NOTCH开关支持标志，1表示支持，0表示不支持 */
    VOS_UINT16                              uhwNotchControlMode;                /* NOTCH控制方式:1表示GPIO模式，2表示Mipi方式，3表示GPIO+MIPI组合方式 */
    VOS_UINT32                              uwNotchGpioSetValue;                /* Nothc GPIO控制值，uhwNotchControlMode=1或者3时有效 */
    VOS_UINT32                              uwNotchGpioDefaultValue;            /* Nothc GPIO控制值，uhwNotchControlMode=1或者3时有效 */
    PHY_MIPIDEV_UNIT_STRU                   astNotchMipiNew[UCOM_NV_G_NOTCH_MIPI_UNIT_MAX_NUM]; /* 天线NOTCH通道MIPI接口控制地址 */
    UCOM_NV_GSM_NOTCH_POWER_COMP_STRU       stNotchPowerComp;                   /* Notch发射功率补偿 */

 }UCOM_NV_GSM_NOTCH_CHAN_CTRL_STRU;



/*****************************************************************************
  7 UNION定义
*****************************************************************************/


/*****************************************************************************
  8 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  9 全局变量声明
*****************************************************************************/


/*****************************************************************************
  10 函数声明
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

