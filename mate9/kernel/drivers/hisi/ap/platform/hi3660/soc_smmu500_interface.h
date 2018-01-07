#ifndef __SOC_SMMU500_INTERFACE_H__
#define __SOC_SMMU500_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_SMMU500_SMMU_SCR0_ADDR(base) ((base) + (0x0000))
#define SOC_SMMU500_SMMU_SCR1_ADDR(base) ((base) + (0x0004))
#define SOC_SMMU500_SMMU_SCR2_ADDR(base) ((base) + (0x0008))
#define SOC_SMMU500_SMMU_SACR_ADDR(base) ((base) + (0x0010))
#define SOC_SMMU500_SMMU_SIDR0_ADDR(base) ((base) + (0x0020))
#define SOC_SMMU500_SMMU_SIDR1_ADDR(base) ((base) + (0x0024))
#define SOC_SMMU500_SMMU_SIDR2_ADDR(base) ((base) + (0x0028))
#define SOC_SMMU500_SMMU_SIDR7_ADDR(base) ((base) + (0x003C))
#define SOC_SMMU500_SMMU_SGFAR_LOW_ADDR(base) ((base) + (0x0040))
#define SOC_SMMU500_SMMU_SGFAR_HIGH_ADDR(base) ((base) + (0x0044))
#define SOC_SMMU500_SMMU_SGFSR_ADDR(base) ((base) + (0x0048))
#define SOC_SMMU500_SMMU_SGFSRRESTORE_ADDR(base) ((base) + (0x004C))
#define SOC_SMMU500_SMMU_SGFSYNR0_ADDR(base) ((base) + (0x0050))
#define SOC_SMMU500_SMMU_SGFSYNR1_ADDR(base) ((base) + (0x0054))
#define SOC_SMMU500_SMMU_STLBIALL_ADDR(base) ((base) + (0x0060))
#define SOC_SMMU500_SMMU_STLBIVMID_ADDR(base) ((base) + (0x0064))
#define SOC_SMMU500_SMMU_STLBIALLNSNH_ADDR(base) ((base) + (0x0068))
#define SOC_SMMU500_SMMU_TLBIALLH_ADDR(base) ((base) + (0x006C))
#define SOC_SMMU500_SMMU_STLBGSYNC_ADDR(base) ((base) + (0x0070))
#define SOC_SMMU500_SMMU_STLBGSTATUS_ADDR(base) ((base) + (0x0074))
#define SOC_SMMU500_SMMU_TLBIVAH_LOW_ADDR(base) ((base) + (0x0078))
#define SOC_SMMU500_SMMU_TLBIVAH_HIGH_ADDR(base) ((base) + (0x007C))
#define SOC_SMMU500_SMMU_DBGRPTRTBU_ADDR(base) ((base) + (0x0080))
#define SOC_SMMU500_SMMU_DBGRDATATBU_ADDR(base) ((base) + (0x0084))
#define SOC_SMMU500_SMMU_DBGRPTRTCU_ADDR(base) ((base) + (0x0088))
#define SOC_SMMU500_SMMU_DBGRDATATCU_ADDR(base) ((base) + (0x008C))
#define SOC_SMMU500_SMMU_STLBIVALM_LOW_ADDR(base) ((base) + (0x00A0))
#define SOC_SMMU500_SMMU_STLBIVALM_HIGH_ADDR(base) ((base) + (0x00A4))
#define SOC_SMMU500_SMMU_STLBIVAM_LOW_ADDR(base) ((base) + (0x00A8))
#define SOC_SMMU500_SMMU_STLBIVAM_HIGH_ADDR(base) ((base) + (0x00AC))
#define SOC_SMMU500_SMMU_TLBIVALH64_LOW_ADDR(base) ((base) + (0x00B0))
#define SOC_SMMU500_SMMU_TLBIVALH64_HIGH_ADDR(base) ((base) + (0x00B4))
#define SOC_SMMU500_SMMU_TLBIVMIDS1_ADDR(base) ((base) + (0x00B8))
#define SOC_SMMU500_SMMU_STLBIALLM_ADDR(base) ((base) + (0x00BC))
#define SOC_SMMU500_SMMU_TLBIVAH64_LOW_ADDR(base) ((base) + (0x00C0))
#define SOC_SMMU500_SMMU_TLBIVAH64_HIGH_ADDR(base) ((base) + (0x00C4))
#define SOC_SMMU500_SMMU_SGATS1UR_LOW_ADDR(base) ((base) + (0x0100))
#define SOC_SMMU500_SMMU_SGATS1UR_HIGH_ADDR(base) ((base) + (0x0104))
#define SOC_SMMU500_SMMU_SGATS1UW_LOW_ADDR(base) ((base) + (0x0108))
#define SOC_SMMU500_SMMU_SGATS1UW_HIGH_ADDR(base) ((base) + (0x010C))
#define SOC_SMMU500_SMMU_SGATS1PR_LOW_ADDR(base) ((base) + (0x0110))
#define SOC_SMMU500_SMMU_SGATS1PR_HIGH_ADDR(base) ((base) + (0x0114))
#define SOC_SMMU500_SMMU_SGATS1PW_LOW_ADDR(base) ((base) + (0x0118))
#define SOC_SMMU500_SMMU_SGATS1PW_HIGH_ADDR(base) ((base) + (0x011C))
#define SOC_SMMU500_SMMU_SGATS12UR_LOW_ADDR(base) ((base) + (0x0120))
#define SOC_SMMU500_SMMU_SGATS12UR_HIGH_ADDR(base) ((base) + (0x0124))
#define SOC_SMMU500_SMMU_SGATS12UW_LOW_ADDR(base) ((base) + (0x0128))
#define SOC_SMMU500_SMMU_SGATS12UW_HIGH_ADDR(base) ((base) + (0x012C))
#define SOC_SMMU500_SMMU_SGATS12PR_LOW_ADDR(base) ((base) + (0x0130))
#define SOC_SMMU500_SMMU_SGATS12PR_HIGH_ADDR(base) ((base) + (0x0134))
#define SOC_SMMU500_SMMU_SGATS12PW_LOW_ADDR(base) ((base) + (0x0138))
#define SOC_SMMU500_SMMU_SGATS12PW_HIGH_ADDR(base) ((base) + (0x013C))
#define SOC_SMMU500_SMMU_SGPAR_LOW_ADDR(base) ((base) + (0x0180))
#define SOC_SMMU500_SMMU_SGPAR_HIGH_ADDR(base) ((base) + (0x0184))
#define SOC_SMMU500_SMMU_SGATSR_ADDR(base) ((base) + (0x0188))
#define SOC_SMMU500_SMMU_SMR0_ADDR(base) ((base) + (0x0800))
#define SOC_SMMU500_SMMU_SMR1_ADDR(base) ((base) + (0x0804))
#define SOC_SMMU500_SMMU_S2CR0_ADDR(base) ((base) + (0x0C00))
#define SOC_SMMU500_SMMU_S2CR1_ADDR(base) ((base) + (0x0C04))
#define SOC_SMMU500_SMMU_CBAR0_ADDR(base) ((base) + (0x1000))
#define SOC_SMMU500_SMMU_CBAR1_ADDR(base) ((base) + (0x1004))
#define SOC_SMMU500_SMMU_CBFRSYNRA0_ADDR(base) ((base) + (0x1400))
#define SOC_SMMU500_SMMU_CBFRSYNRA1_ADDR(base) ((base) + (0x1404))
#define SOC_SMMU500_SMMU_CBA2R0_ADDR(base) ((base) + (0x1800))
#define SOC_SMMU500_SMMU_CBA2R1_ADDR(base) ((base) + (0x1804))
#define SOC_SMMU500_PMEVCNTR0_ADDR(base) ((base) + (0x3000))
#define SOC_SMMU500_PMEVCNTR1_ADDR(base) ((base) + (0x3004))
#define SOC_SMMU500_PMEVCNTR2_ADDR(base) ((base) + (0x3008))
#define SOC_SMMU500_PMEVCNTR3_ADDR(base) ((base) + (0x300C))
#define SOC_SMMU500_PMEVTYPE0_ADDR(base) ((base) + (0x3400))
#define SOC_SMMU500_PMEVTYPE1_ADDR(base) ((base) + (0x3404))
#define SOC_SMMU500_PMEVTYPE2_ADDR(base) ((base) + (0x3408))
#define SOC_SMMU500_PMEVTYPE3_ADDR(base) ((base) + (0x340C))
#define SOC_SMMU500_PMCGCR0_ADDR(base) ((base) + (0x3800))
#define SOC_SMMU500_PMCGSMR0_ADDR(base) ((base) + (0x3A00))
#define SOC_SMMU500_PMCNTENSET_ADDR(base) ((base) + (0x3C00))
#define SOC_SMMU500_PMCNTENCLR_ADDR(base) ((base) + (0x3C20))
#define SOC_SMMU500_PMINTENSET_ADDR(base) ((base) + (0x3C40))
#define SOC_SMMU500_PMINTENCLR_ADDR(base) ((base) + (0x3C60))
#define SOC_SMMU500_PMOVSCLR_ADDR(base) ((base) + (0x3C80))
#define SOC_SMMU500_PMOVSSET_ADDR(base) ((base) + (0x3CC0))
#define SOC_SMMU500_PMCFGR_ADDR(base) ((base) + (0x3E00))
#define SOC_SMMU500_PMCR_ADDR(base) ((base) + (0x3E04))
#define SOC_SMMU500_PMAUTHSTATUS_ADDR(base) ((base) + (0x3FB8))
#define SOC_SMMU500_SMMU_CB0_SCTLR_ADDR(base) ((base) + (0x8000))
#define SOC_SMMU500_SMMU_CB0_ACTLR_ADDR(base) ((base) + (0x8004))
#define SOC_SMMU500_SMMU_CB0_RESUME_ADDR(base) ((base) + (0x8008))
#define SOC_SMMU500_SMMU_CB0_TCR2_ADDR(base) ((base) + (0x8010))
#define SOC_SMMU500_SMMU_CB0_TTBR0_LOW_ADDR(base) ((base) + (0x8020))
#define SOC_SMMU500_SMMU_CB0_TTBR0_HIGH_ADDR(base) ((base) + (0x8024))
#define SOC_SMMU500_SMMU_CB0_TTBR1_LOW_ADDR(base) ((base) + (0x8028))
#define SOC_SMMU500_SMMU_CB0_TTBR1_HIGH_ADDR(base) ((base) + (0x8024))
#define SOC_SMMU500_SMMU_CB0_TCR_ADDR(base) ((base) + (0x8030))
#define SOC_SMMU500_SMMU_CB0_CONTEXTIDR_ADDR(base) ((base) + (0x8034))
#define SOC_SMMU500_SMMU_CB0_PRRR_ADDR(base) ((base) + (0x8038))
#define SOC_SMMU500_SMMU_CB0_NMRR_ADDR(base) ((base) + (0x803C))
#define SOC_SMMU500_SMMU_CB0_PAR_LOW_ADDR(base) ((base) + (0x8050))
#define SOC_SMMU500_SMMU_CB0_PAR_HIGH_ADDR(base) ((base) + (0x8054))
#define SOC_SMMU500_SMMU_CB0_FSR_ADDR(base) ((base) + (0x8058))
#define SOC_SMMU500_SMMU_CB0_FSRRESTORE_ADDR(base) ((base) + (0x805C))
#define SOC_SMMU500_SMMU_CB0_FAR_LOW_ADDR(base) ((base) + (0x8060))
#define SOC_SMMU500_SMMU_CB0_FAR_HIGH_ADDR(base) ((base) + (0x8064))
#define SOC_SMMU500_SMMU_CB0_FSYNR0_ADDR(base) ((base) + (0x8068))
#define SOC_SMMU500_SMMU_CB0_IPAFAR_LOW_ADDR(base) ((base) + (0x8070))
#define SOC_SMMU500_SMMU_CB0_IPAFAR_HIGH_ADDR(base) ((base) + (0x8074))
#define SOC_SMMU500_SMMU_CB0_TLBIVA_LOW_ADDR(base) ((base) + (0x8600))
#define SOC_SMMU500_SMMU_CB0_TLBIVA_HIGH_ADDR(base) ((base) + (0x8604))
#define SOC_SMMU500_SMMU_CB0_TLBIVAA_LOW_ADDR(base) ((base) + (0x8608))
#define SOC_SMMU500_SMMU_CB0_TLBIVAA_HIGH_ADDR(base) ((base) + (0x860C))
#define SOC_SMMU500_SMMU_CB0_TLBIASID_ADDR(base) ((base) + (0x8610))
#define SOC_SMMU500_SMMU_CB0_TLBIALL_ADDR(base) ((base) + (0x8618))
#define SOC_SMMU500_SMMU_CB0_TLBIVAL_LOW_ADDR(base) ((base) + (0x8620))
#define SOC_SMMU500_SMMU_CB0_TLBIVAL_HIGH_ADDR(base) ((base) + (0x8624))
#define SOC_SMMU500_SMMU_CB0_TLBIVAAL_LOW_ADDR(base) ((base) + (0x8628))
#define SOC_SMMU500_SMMU_CB0_TLBIVAAL_HIGH_ADDR(base) ((base) + (0x862C))
#define SOC_SMMU500_SMMU_CB0_TLBSYNC_ADDR(base) ((base) + (0x87F0))
#define SOC_SMMU500_SMMU_CB0_TLBSTATUS_ADDR(base) ((base) + (0x87F4))
#define SOC_SMMU500_SMMU_CB0_ATS1PR_LOW_ADDR(base) ((base) + (0x8800))
#define SOC_SMMU500_SMMU_CB0_ATS1PR_HIGH_ADDR(base) ((base) + (0x8804))
#define SOC_SMMU500_SMMU_CB0_ATS1PW_LOW_ADDR(base) ((base) + (0x8808))
#define SOC_SMMU500_SMMU_CB0_ATS1PW_HIGH_ADDR(base) ((base) + (0x880C))
#define SOC_SMMU500_SMMU_CB0_ATS1UR_LOW_ADDR(base) ((base) + (0x8810))
#define SOC_SMMU500_SMMU_CB0_ATS1UR_HIGH_ADDR(base) ((base) + (0x8814))
#define SOC_SMMU500_SMMU_CB0_ATS1UW_LOW_ADDR(base) ((base) + (0x8818))
#define SOC_SMMU500_SMMU_CB0_ATS1UW_HIGH_ADDR(base) ((base) + (0x881C))
#define SOC_SMMU500_SMMU_CB0_ATSR_ADDR(base) ((base) + (0x88F0))
#define SOC_SMMU500_SMMU_CB0_PMEVCNTR0_ADDR(base) ((base) + (0x8E00))
#define SOC_SMMU500_SMMU_CB0_PMEVCNTR1_ADDR(base) ((base) + (0x8E04))
#define SOC_SMMU500_SMMU_CB0_PMEVCNTR2_ADDR(base) ((base) + (0x8E08))
#define SOC_SMMU500_SMMU_CB0_PMEVCNTR3_ADDR(base) ((base) + (0x8E0C))
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER0_ADDR(base) ((base) + (0x8E80))
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER1_ADDR(base) ((base) + (0x8E84))
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER2_ADDR(base) ((base) + (0x8E88))
#define SOC_SMMU500_SMMU_CB0_PMXEVTYPER3_ADDR(base) ((base) + (0x8E8C))
#define SOC_SMMU500_SMMU_CB0_PMCR_ADDR(base) ((base) + (0x8F04))
#define SOC_SMMU500_SMMU_CB0_PMCNTENSET_ADDR(base) ((base) + (0x8F40))
#define SOC_SMMU500_SMMU_CB0_PMCNTENCLR_ADDR(base) ((base) + (0x8F44))
#define SOC_SMMU500_SMMU_CB0_PMINTENSET_ADDR(base) ((base) + (0x8F48))
#define SOC_SMMU500_SMMU_CB0_PMINTENCLR_ADDR(base) ((base) + (0x8F4C))
#define SOC_SMMU500_SMMU_CB0_PMOVSRCLR_ADDR(base) ((base) + (0x8F50))
#define SOC_SMMU500_SMMU_CB0_PMOVSRSET_ADDR(base) ((base) + (0x8F58))
#define SOC_SMMU500_SMMU_CB0_PMAUTHSTATUS_ADDR(base) ((base) + (0x8FB8))
#define SOC_SMMU500_SMMU_CB1_SCTLR_ADDR(base) ((base) + (0x9000))
#define SOC_SMMU500_SMMU_CB1_ACTLR_ADDR(base) ((base) + (0x9004))
#define SOC_SMMU500_SMMU_CB1_RESUME_ADDR(base) ((base) + (0x9008))
#define SOC_SMMU500_SMMU_CB1_TCR2_ADDR(base) ((base) + (0x9010))
#define SOC_SMMU500_SMMU_CB1_TTBR0_LOW_ADDR(base) ((base) + (0x9020))
#define SOC_SMMU500_SMMU_CB1_TTBR0_HIGH_ADDR(base) ((base) + (0x9024))
#define SOC_SMMU500_SMMU_CB1_TTBR1_LOW_ADDR(base) ((base) + (0x9028))
#define SOC_SMMU500_SMMU_CB1_TTBR1_HIGH_ADDR(base) ((base) + (0x9024))
#define SOC_SMMU500_SMMU_CB1_TCR_ADDR(base) ((base) + (0x9030))
#define SOC_SMMU500_SMMU_CB1_CONTEXTIDR_ADDR(base) ((base) + (0x9034))
#define SOC_SMMU500_SMMU_CB1_PRRR_ADDR(base) ((base) + (0x9038))
#define SOC_SMMU500_SMMU_CB1_NMRR_ADDR(base) ((base) + (0x903C))
#define SOC_SMMU500_SMMU_CB1_PAR_LOW_ADDR(base) ((base) + (0x9050))
#define SOC_SMMU500_SMMU_CB1_PAR_HIGH_ADDR(base) ((base) + (0x9054))
#define SOC_SMMU500_SMMU_CB1_FSR_ADDR(base) ((base) + (0x9058))
#define SOC_SMMU500_SMMU_CB1_FSRRESTORE_ADDR(base) ((base) + (0x905C))
#define SOC_SMMU500_SMMU_CB1_FAR_LOW_ADDR(base) ((base) + (0x9060))
#define SOC_SMMU500_SMMU_CB1_FAR_HIGH_ADDR(base) ((base) + (0x9064))
#define SOC_SMMU500_SMMU_CB1_FSYNR0_ADDR(base) ((base) + (0x9068))
#define SOC_SMMU500_SMMU_CB1_IPAFAR_LOW_ADDR(base) ((base) + (0x9070))
#define SOC_SMMU500_SMMU_CB1_IPAFAR_HIGH_ADDR(base) ((base) + (0x9074))
#define SOC_SMMU500_SMMU_CB1_TLBIVA_LOW_ADDR(base) ((base) + (0x9600))
#define SOC_SMMU500_SMMU_CB1_TLBIVA_HIGH_ADDR(base) ((base) + (0x9604))
#define SOC_SMMU500_SMMU_CB1_TLBIVAA_LOW_ADDR(base) ((base) + (0x9608))
#define SOC_SMMU500_SMMU_CB1_TLBIVAA_HIGH_ADDR(base) ((base) + (0x960C))
#define SOC_SMMU500_SMMU_CB1_TLBIASID_ADDR(base) ((base) + (0x9610))
#define SOC_SMMU500_SMMU_CB1_TLBIALL_ADDR(base) ((base) + (0x9618))
#define SOC_SMMU500_SMMU_CB1_TLBIVAL_LOW_ADDR(base) ((base) + (0x9620))
#define SOC_SMMU500_SMMU_CB1_TLBIVAL_HIGH_ADDR(base) ((base) + (0x9624))
#define SOC_SMMU500_SMMU_CB1_TLBIVAAL_LOW_ADDR(base) ((base) + (0x9628))
#define SOC_SMMU500_SMMU_CB1_TLBIVAAL_HIGH_ADDR(base) ((base) + (0x962C))
#define SOC_SMMU500_SMMU_CB1_TLBSYNC_ADDR(base) ((base) + (0x97F0))
#define SOC_SMMU500_SMMU_CB1_TLBSTATUS_ADDR(base) ((base) + (0x97F4))
#define SOC_SMMU500_SMMU_CB1_ATS1PR_LOW_ADDR(base) ((base) + (0x9800))
#define SOC_SMMU500_SMMU_CB1_ATS1PR_HIGH_ADDR(base) ((base) + (0x9804))
#define SOC_SMMU500_SMMU_CB1_ATS1PW_LOW_ADDR(base) ((base) + (0x9808))
#define SOC_SMMU500_SMMU_CB1_ATS1PW_HIGH_ADDR(base) ((base) + (0x980C))
#define SOC_SMMU500_SMMU_CB1_ATS1UR_LOW_ADDR(base) ((base) + (0x9810))
#define SOC_SMMU500_SMMU_CB1_ATS1UR_HIGH_ADDR(base) ((base) + (0x9814))
#define SOC_SMMU500_SMMU_CB1_ATS1UW_LOW_ADDR(base) ((base) + (0x9818))
#define SOC_SMMU500_SMMU_CB1_ATS1UW_HIGH_ADDR(base) ((base) + (0x981C))
#define SOC_SMMU500_SMMU_CB1_ATSR_ADDR(base) ((base) + (0x98F0))
#define SOC_SMMU500_SMMU_CB1_PMEVCNTR0_ADDR(base) ((base) + (0x9E00))
#define SOC_SMMU500_SMMU_CB1_PMEVCNTR1_ADDR(base) ((base) + (0x9E04))
#define SOC_SMMU500_SMMU_CB1_PMEVCNTR2_ADDR(base) ((base) + (0x9E08))
#define SOC_SMMU500_SMMU_CB1_PMEVCNTR3_ADDR(base) ((base) + (0x9E0C))
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER0_ADDR(base) ((base) + (0x9E80))
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER1_ADDR(base) ((base) + (0x9E84))
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER2_ADDR(base) ((base) + (0x9E88))
#define SOC_SMMU500_SMMU_CB1_PMXEVTYPER3_ADDR(base) ((base) + (0x9E8C))
#define SOC_SMMU500_SMMU_CB1_PMCR_ADDR(base) ((base) + (0x9F04))
#define SOC_SMMU500_SMMU_CB1_PMCNTENSET_ADDR(base) ((base) + (0x9F40))
#define SOC_SMMU500_SMMU_CB1_PMCNTENCLR_ADDR(base) ((base) + (0x9F44))
#define SOC_SMMU500_SMMU_CB1_PMINTENSET_ADDR(base) ((base) + (0x9F48))
#define SOC_SMMU500_SMMU_CB1_PMINTENCLR_ADDR(base) ((base) + (0x9F4C))
#define SOC_SMMU500_SMMU_CB1_PMOVSRCLR_ADDR(base) ((base) + (0x9F50))
#define SOC_SMMU500_SMMU_CB1_PMOVSRSET_ADDR(base) ((base) + (0x9F58))
#define SOC_SMMU500_SMMU_CB1_PMAUTHSTATUS_ADDR(base) ((base) + (0x9FB8))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clientpd : 1;
        unsigned int gfre : 1;
        unsigned int gfie : 1;
        unsigned int exidenable : 1;
        unsigned int gcfgfre : 1;
        unsigned int gcfgfie : 1;
        unsigned int transientcfg : 2;
        unsigned int stalld : 1;
        unsigned int gse : 1;
        unsigned int usfcfg : 1;
        unsigned int vmidpne : 1;
        unsigned int ptm : 1;
        unsigned int fb : 1;
        unsigned int bsu : 2;
        unsigned int memattr : 4;
        unsigned int mtcfg : 1;
        unsigned int smcfcfg : 1;
        unsigned int shcfg : 2;
        unsigned int racfg : 2;
        unsigned int wacfg : 2;
        unsigned int nscfg : 2;
        unsigned int reserved : 2;
    } reg;
} SOC_SMMU500_SMMU_SCR0_UNION;
#endif
#define SOC_SMMU500_SMMU_SCR0_clientpd_START (0)
#define SOC_SMMU500_SMMU_SCR0_clientpd_END (0)
#define SOC_SMMU500_SMMU_SCR0_gfre_START (1)
#define SOC_SMMU500_SMMU_SCR0_gfre_END (1)
#define SOC_SMMU500_SMMU_SCR0_gfie_START (2)
#define SOC_SMMU500_SMMU_SCR0_gfie_END (2)
#define SOC_SMMU500_SMMU_SCR0_exidenable_START (3)
#define SOC_SMMU500_SMMU_SCR0_exidenable_END (3)
#define SOC_SMMU500_SMMU_SCR0_gcfgfre_START (4)
#define SOC_SMMU500_SMMU_SCR0_gcfgfre_END (4)
#define SOC_SMMU500_SMMU_SCR0_gcfgfie_START (5)
#define SOC_SMMU500_SMMU_SCR0_gcfgfie_END (5)
#define SOC_SMMU500_SMMU_SCR0_transientcfg_START (6)
#define SOC_SMMU500_SMMU_SCR0_transientcfg_END (7)
#define SOC_SMMU500_SMMU_SCR0_stalld_START (8)
#define SOC_SMMU500_SMMU_SCR0_stalld_END (8)
#define SOC_SMMU500_SMMU_SCR0_gse_START (9)
#define SOC_SMMU500_SMMU_SCR0_gse_END (9)
#define SOC_SMMU500_SMMU_SCR0_usfcfg_START (10)
#define SOC_SMMU500_SMMU_SCR0_usfcfg_END (10)
#define SOC_SMMU500_SMMU_SCR0_vmidpne_START (11)
#define SOC_SMMU500_SMMU_SCR0_vmidpne_END (11)
#define SOC_SMMU500_SMMU_SCR0_ptm_START (12)
#define SOC_SMMU500_SMMU_SCR0_ptm_END (12)
#define SOC_SMMU500_SMMU_SCR0_fb_START (13)
#define SOC_SMMU500_SMMU_SCR0_fb_END (13)
#define SOC_SMMU500_SMMU_SCR0_bsu_START (14)
#define SOC_SMMU500_SMMU_SCR0_bsu_END (15)
#define SOC_SMMU500_SMMU_SCR0_memattr_START (16)
#define SOC_SMMU500_SMMU_SCR0_memattr_END (19)
#define SOC_SMMU500_SMMU_SCR0_mtcfg_START (20)
#define SOC_SMMU500_SMMU_SCR0_mtcfg_END (20)
#define SOC_SMMU500_SMMU_SCR0_smcfcfg_START (21)
#define SOC_SMMU500_SMMU_SCR0_smcfcfg_END (21)
#define SOC_SMMU500_SMMU_SCR0_shcfg_START (22)
#define SOC_SMMU500_SMMU_SCR0_shcfg_END (23)
#define SOC_SMMU500_SMMU_SCR0_racfg_START (24)
#define SOC_SMMU500_SMMU_SCR0_racfg_END (25)
#define SOC_SMMU500_SMMU_SCR0_wacfg_START (26)
#define SOC_SMMU500_SMMU_SCR0_wacfg_END (27)
#define SOC_SMMU500_SMMU_SCR0_nscfg_START (28)
#define SOC_SMMU500_SMMU_SCR0_nscfg_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int nsnumcbo : 8;
        unsigned int nsnumsmrgo : 8;
        unsigned int nsnumirpto : 8;
        unsigned int gasrae : 1;
        unsigned int gefro : 1;
        unsigned int sif : 1;
        unsigned int spmen : 1;
        unsigned int nscafro : 1;
        unsigned int reserved : 3;
    } reg;
} SOC_SMMU500_SMMU_SCR1_UNION;
#endif
#define SOC_SMMU500_SMMU_SCR1_nsnumcbo_START (0)
#define SOC_SMMU500_SMMU_SCR1_nsnumcbo_END (7)
#define SOC_SMMU500_SMMU_SCR1_nsnumsmrgo_START (8)
#define SOC_SMMU500_SMMU_SCR1_nsnumsmrgo_END (15)
#define SOC_SMMU500_SMMU_SCR1_nsnumirpto_START (16)
#define SOC_SMMU500_SMMU_SCR1_nsnumirpto_END (23)
#define SOC_SMMU500_SMMU_SCR1_gasrae_START (24)
#define SOC_SMMU500_SMMU_SCR1_gasrae_END (24)
#define SOC_SMMU500_SMMU_SCR1_gefro_START (25)
#define SOC_SMMU500_SMMU_SCR1_gefro_END (25)
#define SOC_SMMU500_SMMU_SCR1_sif_START (26)
#define SOC_SMMU500_SMMU_SCR1_sif_END (26)
#define SOC_SMMU500_SMMU_SCR1_spmen_START (27)
#define SOC_SMMU500_SMMU_SCR1_spmen_END (27)
#define SOC_SMMU500_SMMU_SCR1_nscafro_START (28)
#define SOC_SMMU500_SMMU_SCR1_nscafro_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bpvmid : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_SMMU500_SMMU_SCR2_UNION;
#endif
#define SOC_SMMU500_SMMU_SCR2_bpvmid_START (0)
#define SOC_SMMU500_SMMU_SCR2_bpvmid_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 2;
        unsigned int s1wc2en : 1;
        unsigned int s2wc2en : 1;
        unsigned int ipa2pa_cen : 1;
        unsigned int reserved_1 : 3;
        unsigned int smtnmb_tlben : 1;
        unsigned int mmudisb_tlben : 1;
        unsigned int s2crb_tlben : 1;
        unsigned int reserved_2 : 13;
        unsigned int dp4k_tcudisb : 1;
        unsigned int dp4k_tbudisb : 1;
        unsigned int cache_lock : 1;
        unsigned int reserved_3 : 5;
    } reg;
} SOC_SMMU500_SMMU_SACR_UNION;
#endif
#define SOC_SMMU500_SMMU_SACR_s1wc2en_START (2)
#define SOC_SMMU500_SMMU_SACR_s1wc2en_END (2)
#define SOC_SMMU500_SMMU_SACR_s2wc2en_START (3)
#define SOC_SMMU500_SMMU_SACR_s2wc2en_END (3)
#define SOC_SMMU500_SMMU_SACR_ipa2pa_cen_START (4)
#define SOC_SMMU500_SMMU_SACR_ipa2pa_cen_END (4)
#define SOC_SMMU500_SMMU_SACR_smtnmb_tlben_START (8)
#define SOC_SMMU500_SMMU_SACR_smtnmb_tlben_END (8)
#define SOC_SMMU500_SMMU_SACR_mmudisb_tlben_START (9)
#define SOC_SMMU500_SMMU_SACR_mmudisb_tlben_END (9)
#define SOC_SMMU500_SMMU_SACR_s2crb_tlben_START (10)
#define SOC_SMMU500_SMMU_SACR_s2crb_tlben_END (10)
#define SOC_SMMU500_SMMU_SACR_dp4k_tcudisb_START (24)
#define SOC_SMMU500_SMMU_SACR_dp4k_tcudisb_END (24)
#define SOC_SMMU500_SMMU_SACR_dp4k_tbudisb_START (25)
#define SOC_SMMU500_SMMU_SACR_dp4k_tbudisb_END (25)
#define SOC_SMMU500_SMMU_SACR_cache_lock_START (26)
#define SOC_SMMU500_SMMU_SACR_cache_lock_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int numsmrg : 8;
        unsigned int exids : 1;
        unsigned int numsidb : 4;
        unsigned int btm : 1;
        unsigned int cttw : 1;
        unsigned int reserved : 1;
        unsigned int numirpt : 8;
        unsigned int ptfs : 2;
        unsigned int atosns : 1;
        unsigned int sms : 1;
        unsigned int nts : 1;
        unsigned int s2ts : 1;
        unsigned int s1ts : 1;
        unsigned int ses : 1;
    } reg;
} SOC_SMMU500_SMMU_SIDR0_UNION;
#endif
#define SOC_SMMU500_SMMU_SIDR0_numsmrg_START (0)
#define SOC_SMMU500_SMMU_SIDR0_numsmrg_END (7)
#define SOC_SMMU500_SMMU_SIDR0_exids_START (8)
#define SOC_SMMU500_SMMU_SIDR0_exids_END (8)
#define SOC_SMMU500_SMMU_SIDR0_numsidb_START (9)
#define SOC_SMMU500_SMMU_SIDR0_numsidb_END (12)
#define SOC_SMMU500_SMMU_SIDR0_btm_START (13)
#define SOC_SMMU500_SMMU_SIDR0_btm_END (13)
#define SOC_SMMU500_SMMU_SIDR0_cttw_START (14)
#define SOC_SMMU500_SMMU_SIDR0_cttw_END (14)
#define SOC_SMMU500_SMMU_SIDR0_numirpt_START (16)
#define SOC_SMMU500_SMMU_SIDR0_numirpt_END (23)
#define SOC_SMMU500_SMMU_SIDR0_ptfs_START (24)
#define SOC_SMMU500_SMMU_SIDR0_ptfs_END (25)
#define SOC_SMMU500_SMMU_SIDR0_atosns_START (26)
#define SOC_SMMU500_SMMU_SIDR0_atosns_END (26)
#define SOC_SMMU500_SMMU_SIDR0_sms_START (27)
#define SOC_SMMU500_SMMU_SIDR0_sms_END (27)
#define SOC_SMMU500_SMMU_SIDR0_nts_START (28)
#define SOC_SMMU500_SMMU_SIDR0_nts_END (28)
#define SOC_SMMU500_SMMU_SIDR0_s2ts_START (29)
#define SOC_SMMU500_SMMU_SIDR0_s2ts_END (29)
#define SOC_SMMU500_SMMU_SIDR0_s1ts_START (30)
#define SOC_SMMU500_SMMU_SIDR0_s1ts_END (30)
#define SOC_SMMU500_SMMU_SIDR0_ses_START (31)
#define SOC_SMMU500_SMMU_SIDR0_ses_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int numcb : 8;
        unsigned int numssdndxb : 4;
        unsigned int ssdtp : 1;
        unsigned int reserved_0 : 2;
        unsigned int smcd : 1;
        unsigned int nums2cb : 8;
        unsigned int reserved_1 : 4;
        unsigned int numpagendxb : 3;
        unsigned int pagesize : 1;
    } reg;
} SOC_SMMU500_SMMU_SIDR1_UNION;
#endif
#define SOC_SMMU500_SMMU_SIDR1_numcb_START (0)
#define SOC_SMMU500_SMMU_SIDR1_numcb_END (7)
#define SOC_SMMU500_SMMU_SIDR1_numssdndxb_START (8)
#define SOC_SMMU500_SMMU_SIDR1_numssdndxb_END (11)
#define SOC_SMMU500_SMMU_SIDR1_ssdtp_START (12)
#define SOC_SMMU500_SMMU_SIDR1_ssdtp_END (12)
#define SOC_SMMU500_SMMU_SIDR1_smcd_START (15)
#define SOC_SMMU500_SMMU_SIDR1_smcd_END (15)
#define SOC_SMMU500_SMMU_SIDR1_nums2cb_START (16)
#define SOC_SMMU500_SMMU_SIDR1_nums2cb_END (23)
#define SOC_SMMU500_SMMU_SIDR1_numpagendxb_START (28)
#define SOC_SMMU500_SMMU_SIDR1_numpagendxb_END (30)
#define SOC_SMMU500_SMMU_SIDR1_pagesize_START (31)
#define SOC_SMMU500_SMMU_SIDR1_pagesize_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ias : 4;
        unsigned int oas : 4;
        unsigned int ubs : 4;
        unsigned int ptfsv8_4kb : 1;
        unsigned int ptfsv8_16kb : 1;
        unsigned int ptfsv8_64kb : 1;
        unsigned int reserved : 17;
    } reg;
} SOC_SMMU500_SMMU_SIDR2_UNION;
#endif
#define SOC_SMMU500_SMMU_SIDR2_ias_START (0)
#define SOC_SMMU500_SMMU_SIDR2_ias_END (3)
#define SOC_SMMU500_SMMU_SIDR2_oas_START (4)
#define SOC_SMMU500_SMMU_SIDR2_oas_END (7)
#define SOC_SMMU500_SMMU_SIDR2_ubs_START (8)
#define SOC_SMMU500_SMMU_SIDR2_ubs_END (11)
#define SOC_SMMU500_SMMU_SIDR2_ptfsv8_4kb_START (12)
#define SOC_SMMU500_SMMU_SIDR2_ptfsv8_4kb_END (12)
#define SOC_SMMU500_SMMU_SIDR2_ptfsv8_16kb_START (13)
#define SOC_SMMU500_SMMU_SIDR2_ptfsv8_16kb_END (13)
#define SOC_SMMU500_SMMU_SIDR2_ptfsv8_64kb_START (14)
#define SOC_SMMU500_SMMU_SIDR2_ptfsv8_64kb_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int minor : 4;
        unsigned int major : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_SMMU500_SMMU_SIDR7_UNION;
#endif
#define SOC_SMMU500_SMMU_SIDR7_minor_START (0)
#define SOC_SMMU500_SMMU_SIDR7_minor_END (3)
#define SOC_SMMU500_SMMU_SIDR7_major_START (4)
#define SOC_SMMU500_SMMU_SIDR7_major_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int faddr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_SGFAR_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_SGFAR_LOW_faddr_low_START (0)
#define SOC_SMMU500_SMMU_SGFAR_LOW_faddr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int faddr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_SGFAR_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_SGFAR_HIGH_faddr_high_START (0)
#define SOC_SMMU500_SMMU_SGFAR_HIGH_faddr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int icf : 1;
        unsigned int usf : 1;
        unsigned int smcf : 1;
        unsigned int ucbf : 1;
        unsigned int ucif : 1;
        unsigned int caf : 1;
        unsigned int ef : 1;
        unsigned int pf : 1;
        unsigned int uut : 1;
        unsigned int reserved : 22;
        unsigned int multi : 1;
    } reg;
} SOC_SMMU500_SMMU_SGFSR_UNION;
#endif
#define SOC_SMMU500_SMMU_SGFSR_icf_START (0)
#define SOC_SMMU500_SMMU_SGFSR_icf_END (0)
#define SOC_SMMU500_SMMU_SGFSR_usf_START (1)
#define SOC_SMMU500_SMMU_SGFSR_usf_END (1)
#define SOC_SMMU500_SMMU_SGFSR_smcf_START (2)
#define SOC_SMMU500_SMMU_SGFSR_smcf_END (2)
#define SOC_SMMU500_SMMU_SGFSR_ucbf_START (3)
#define SOC_SMMU500_SMMU_SGFSR_ucbf_END (3)
#define SOC_SMMU500_SMMU_SGFSR_ucif_START (4)
#define SOC_SMMU500_SMMU_SGFSR_ucif_END (4)
#define SOC_SMMU500_SMMU_SGFSR_caf_START (5)
#define SOC_SMMU500_SMMU_SGFSR_caf_END (5)
#define SOC_SMMU500_SMMU_SGFSR_ef_START (6)
#define SOC_SMMU500_SMMU_SGFSR_ef_END (6)
#define SOC_SMMU500_SMMU_SGFSR_pf_START (7)
#define SOC_SMMU500_SMMU_SGFSR_pf_END (7)
#define SOC_SMMU500_SMMU_SGFSR_uut_START (8)
#define SOC_SMMU500_SMMU_SGFSR_uut_END (8)
#define SOC_SMMU500_SMMU_SGFSR_multi_START (31)
#define SOC_SMMU500_SMMU_SGFSR_multi_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smmu_sgfsrrestore : 32;
    } reg;
} SOC_SMMU500_SMMU_SGFSRRESTORE_UNION;
#endif
#define SOC_SMMU500_SMMU_SGFSRRESTORE_smmu_sgfsrrestore_START (0)
#define SOC_SMMU500_SMMU_SGFSRRESTORE_smmu_sgfsrrestore_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int nested : 1;
        unsigned int wnr : 1;
        unsigned int pnu : 1;
        unsigned int ind : 1;
        unsigned int nsstate : 1;
        unsigned int nsattr : 1;
        unsigned int ats : 1;
        unsigned int reserved : 25;
    } reg;
} SOC_SMMU500_SMMU_SGFSYNR0_UNION;
#endif
#define SOC_SMMU500_SMMU_SGFSYNR0_nested_START (0)
#define SOC_SMMU500_SMMU_SGFSYNR0_nested_END (0)
#define SOC_SMMU500_SMMU_SGFSYNR0_wnr_START (1)
#define SOC_SMMU500_SMMU_SGFSYNR0_wnr_END (1)
#define SOC_SMMU500_SMMU_SGFSYNR0_pnu_START (2)
#define SOC_SMMU500_SMMU_SGFSYNR0_pnu_END (2)
#define SOC_SMMU500_SMMU_SGFSYNR0_ind_START (3)
#define SOC_SMMU500_SMMU_SGFSYNR0_ind_END (3)
#define SOC_SMMU500_SMMU_SGFSYNR0_nsstate_START (4)
#define SOC_SMMU500_SMMU_SGFSYNR0_nsstate_END (4)
#define SOC_SMMU500_SMMU_SGFSYNR0_nsattr_START (5)
#define SOC_SMMU500_SMMU_SGFSYNR0_nsattr_END (5)
#define SOC_SMMU500_SMMU_SGFSYNR0_ats_START (6)
#define SOC_SMMU500_SMMU_SGFSYNR0_ats_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int streamid : 16;
        unsigned int ssd_index : 16;
    } reg;
} SOC_SMMU500_SMMU_SGFSYNR1_UNION;
#endif
#define SOC_SMMU500_SMMU_SGFSYNR1_streamid_START (0)
#define SOC_SMMU500_SMMU_SGFSYNR1_streamid_END (15)
#define SOC_SMMU500_SMMU_SGFSYNR1_ssd_index_START (16)
#define SOC_SMMU500_SMMU_SGFSYNR1_ssd_index_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tlbiall : 32;
    } reg;
} SOC_SMMU500_SMMU_STLBIALL_UNION;
#endif
#define SOC_SMMU500_SMMU_STLBIALL_tlbiall_START (0)
#define SOC_SMMU500_SMMU_STLBIALL_tlbiall_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vmid : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_SMMU500_SMMU_STLBIVMID_UNION;
#endif
#define SOC_SMMU500_SMMU_STLBIVMID_vmid_START (0)
#define SOC_SMMU500_SMMU_STLBIVMID_vmid_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tlbiall : 32;
    } reg;
} SOC_SMMU500_SMMU_STLBIALLNSNH_UNION;
#endif
#define SOC_SMMU500_SMMU_STLBIALLNSNH_tlbiall_START (0)
#define SOC_SMMU500_SMMU_STLBIALLNSNH_tlbiall_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tlbiall : 32;
    } reg;
} SOC_SMMU500_SMMU_TLBIALLH_UNION;
#endif
#define SOC_SMMU500_SMMU_TLBIALLH_tlbiall_START (0)
#define SOC_SMMU500_SMMU_TLBIALLH_tlbiall_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_SMMU500_SMMU_STLBGSYNC_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gsactive : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_SMMU500_SMMU_STLBGSTATUS_UNION;
#endif
#define SOC_SMMU500_SMMU_STLBGSTATUS_gsactive_START (0)
#define SOC_SMMU500_SMMU_STLBGSTATUS_gsactive_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_TLBIVAH_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_TLBIVAH_LOW_va_addr_low_START (0)
#define SOC_SMMU500_SMMU_TLBIVAH_LOW_va_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_TLBIVAH_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_TLBIVAH_HIGH_va_addr_high_START (0)
#define SOC_SMMU500_SMMU_TLBIVAH_HIGH_va_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tlb_entry_pointer : 4;
        unsigned int tlb_pointer : 12;
        unsigned int reserved : 8;
        unsigned int tbu_id : 8;
    } reg;
} SOC_SMMU500_SMMU_DBGRPTRTBU_UNION;
#endif
#define SOC_SMMU500_SMMU_DBGRPTRTBU_tlb_entry_pointer_START (0)
#define SOC_SMMU500_SMMU_DBGRPTRTBU_tlb_entry_pointer_END (3)
#define SOC_SMMU500_SMMU_DBGRPTRTBU_tlb_pointer_START (4)
#define SOC_SMMU500_SMMU_DBGRPTRTBU_tlb_pointer_END (15)
#define SOC_SMMU500_SMMU_DBGRPTRTBU_tbu_id_START (24)
#define SOC_SMMU500_SMMU_DBGRPTRTBU_tbu_id_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbgrdata : 32;
    } reg;
} SOC_SMMU500_SMMU_DBGRDATATBU_UNION;
#endif
#define SOC_SMMU500_SMMU_DBGRDATATBU_dbgrdata_START (0)
#define SOC_SMMU500_SMMU_DBGRDATATBU_dbgrdata_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tlb_entry_pointer : 4;
        unsigned int tlb_pointer : 12;
        unsigned int reserved_0 : 8;
        unsigned int way_ram : 2;
        unsigned int datasrc : 2;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_SMMU500_SMMU_DBGRPTRTCU_UNION;
#endif
#define SOC_SMMU500_SMMU_DBGRPTRTCU_tlb_entry_pointer_START (0)
#define SOC_SMMU500_SMMU_DBGRPTRTCU_tlb_entry_pointer_END (3)
#define SOC_SMMU500_SMMU_DBGRPTRTCU_tlb_pointer_START (4)
#define SOC_SMMU500_SMMU_DBGRPTRTCU_tlb_pointer_END (15)
#define SOC_SMMU500_SMMU_DBGRPTRTCU_way_ram_START (24)
#define SOC_SMMU500_SMMU_DBGRPTRTCU_way_ram_END (25)
#define SOC_SMMU500_SMMU_DBGRPTRTCU_datasrc_START (26)
#define SOC_SMMU500_SMMU_DBGRPTRTCU_datasrc_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbgrdata : 32;
    } reg;
} SOC_SMMU500_SMMU_DBGRDATATCU_UNION;
#endif
#define SOC_SMMU500_SMMU_DBGRDATATCU_dbgrdata_START (0)
#define SOC_SMMU500_SMMU_DBGRDATATCU_dbgrdata_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_STLBIVALM_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_STLBIVALM_LOW_va_addr_low_START (0)
#define SOC_SMMU500_SMMU_STLBIVALM_LOW_va_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_STLBIVALM_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_STLBIVALM_HIGH_va_addr_high_START (0)
#define SOC_SMMU500_SMMU_STLBIVALM_HIGH_va_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_STLBIVAM_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_STLBIVAM_LOW_va_addr_low_START (0)
#define SOC_SMMU500_SMMU_STLBIVAM_LOW_va_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_STLBIVAM_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_STLBIVAM_HIGH_va_addr_high_START (0)
#define SOC_SMMU500_SMMU_STLBIVAM_HIGH_va_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_TLBIVALH64_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_TLBIVALH64_LOW_va_addr_low_START (0)
#define SOC_SMMU500_SMMU_TLBIVALH64_LOW_va_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_TLBIVALH64_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_TLBIVALH64_HIGH_va_addr_high_START (0)
#define SOC_SMMU500_SMMU_TLBIVALH64_HIGH_va_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vmid : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_SMMU500_SMMU_TLBIVMIDS1_UNION;
#endif
#define SOC_SMMU500_SMMU_TLBIVMIDS1_vmid_START (0)
#define SOC_SMMU500_SMMU_TLBIVMIDS1_vmid_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalid_monc : 32;
    } reg;
} SOC_SMMU500_SMMU_STLBIALLM_UNION;
#endif
#define SOC_SMMU500_SMMU_STLBIALLM_invalid_monc_START (0)
#define SOC_SMMU500_SMMU_STLBIALLM_invalid_monc_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_TLBIVAH64_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_TLBIVAH64_LOW_va_addr_low_START (0)
#define SOC_SMMU500_SMMU_TLBIVAH64_LOW_va_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_TLBIVAH64_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_TLBIVAH64_HIGH_va_addr_high_START (0)
#define SOC_SMMU500_SMMU_TLBIVAH64_HIGH_va_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_SGATS1UR_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_SGATS1UR_LOW_addr_low_START (0)
#define SOC_SMMU500_SMMU_SGATS1UR_LOW_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_SGATS1UR_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_SGATS1UR_HIGH_addr_high_START (0)
#define SOC_SMMU500_SMMU_SGATS1UR_HIGH_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_SGATS1UW_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_SGATS1UW_LOW_addr_low_START (0)
#define SOC_SMMU500_SMMU_SGATS1UW_LOW_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_SGATS1UW_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_SGATS1UW_HIGH_addr_high_START (0)
#define SOC_SMMU500_SMMU_SGATS1UW_HIGH_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_SGATS1PR_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_SGATS1PR_LOW_addr_low_START (0)
#define SOC_SMMU500_SMMU_SGATS1PR_LOW_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_SGATS1PR_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_SGATS1PR_HIGH_addr_high_START (0)
#define SOC_SMMU500_SMMU_SGATS1PR_HIGH_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_SGATS1PW_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_SGATS1PW_LOW_addr_low_START (0)
#define SOC_SMMU500_SMMU_SGATS1PW_LOW_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_SGATS1PW_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_SGATS1PW_HIGH_addr_high_START (0)
#define SOC_SMMU500_SMMU_SGATS1PW_HIGH_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_SGATS12UR_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_SGATS12UR_LOW_addr_low_START (0)
#define SOC_SMMU500_SMMU_SGATS12UR_LOW_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_SGATS12UR_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_SGATS12UR_HIGH_addr_high_START (0)
#define SOC_SMMU500_SMMU_SGATS12UR_HIGH_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_SGATS12UW_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_SGATS12UW_LOW_addr_low_START (0)
#define SOC_SMMU500_SMMU_SGATS12UW_LOW_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_SGATS12UW_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_SGATS12UW_HIGH_addr_high_START (0)
#define SOC_SMMU500_SMMU_SGATS12UW_HIGH_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_SGATS12PR_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_SGATS12PR_LOW_addr_low_START (0)
#define SOC_SMMU500_SMMU_SGATS12PR_LOW_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_SGATS12PR_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_SGATS12PR_HIGH_addr_high_START (0)
#define SOC_SMMU500_SMMU_SGATS12PR_HIGH_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_SGATS12PW_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_SGATS12PW_LOW_addr_low_START (0)
#define SOC_SMMU500_SMMU_SGATS12PW_LOW_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_SGATS12PW_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_SGATS12PW_HIGH_addr_high_START (0)
#define SOC_SMMU500_SMMU_SGATS12PW_HIGH_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_SGPAR_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_SGPAR_LOW_addr_low_START (0)
#define SOC_SMMU500_SMMU_SGPAR_LOW_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_SGPAR_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_SGPAR_HIGH_addr_high_START (0)
#define SOC_SMMU500_SMMU_SGPAR_HIGH_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int active : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_SMMU500_SMMU_SGATSR_UNION;
#endif
#define SOC_SMMU500_SMMU_SGATSR_active_START (0)
#define SOC_SMMU500_SMMU_SGATSR_active_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int id : 15;
        unsigned int reserved : 1;
        unsigned int mask : 15;
        unsigned int valid : 1;
    } reg;
} SOC_SMMU500_SMMU_SMR0_UNION;
#endif
#define SOC_SMMU500_SMMU_SMR0_id_START (0)
#define SOC_SMMU500_SMMU_SMR0_id_END (14)
#define SOC_SMMU500_SMMU_SMR0_mask_START (16)
#define SOC_SMMU500_SMMU_SMR0_mask_END (30)
#define SOC_SMMU500_SMMU_SMR0_valid_START (31)
#define SOC_SMMU500_SMMU_SMR0_valid_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int id : 15;
        unsigned int reserved : 1;
        unsigned int mask : 15;
        unsigned int valid : 1;
    } reg;
} SOC_SMMU500_SMMU_SMR1_UNION;
#endif
#define SOC_SMMU500_SMMU_SMR1_id_START (0)
#define SOC_SMMU500_SMMU_SMR1_id_END (14)
#define SOC_SMMU500_SMMU_SMR1_mask_START (16)
#define SOC_SMMU500_SMMU_SMR1_mask_END (30)
#define SOC_SMMU500_SMMU_SMR1_valid_START (31)
#define SOC_SMMU500_SMMU_SMR1_valid_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cbndx : 8;
        unsigned int shcfg : 2;
        unsigned int exidvalid : 1;
        unsigned int mtcfg : 1;
        unsigned int memattr : 4;
        unsigned int type : 2;
        unsigned int nscfg : 2;
        unsigned int racfg : 2;
        unsigned int wacfg : 2;
        unsigned int privcfg : 2;
        unsigned int instcfg : 2;
        unsigned int transientcfg : 2;
        unsigned int reserved : 2;
    } reg;
} SOC_SMMU500_SMMU_S2CR0_UNION;
#endif
#define SOC_SMMU500_SMMU_S2CR0_cbndx_START (0)
#define SOC_SMMU500_SMMU_S2CR0_cbndx_END (7)
#define SOC_SMMU500_SMMU_S2CR0_shcfg_START (8)
#define SOC_SMMU500_SMMU_S2CR0_shcfg_END (9)
#define SOC_SMMU500_SMMU_S2CR0_exidvalid_START (10)
#define SOC_SMMU500_SMMU_S2CR0_exidvalid_END (10)
#define SOC_SMMU500_SMMU_S2CR0_mtcfg_START (11)
#define SOC_SMMU500_SMMU_S2CR0_mtcfg_END (11)
#define SOC_SMMU500_SMMU_S2CR0_memattr_START (12)
#define SOC_SMMU500_SMMU_S2CR0_memattr_END (15)
#define SOC_SMMU500_SMMU_S2CR0_type_START (16)
#define SOC_SMMU500_SMMU_S2CR0_type_END (17)
#define SOC_SMMU500_SMMU_S2CR0_nscfg_START (18)
#define SOC_SMMU500_SMMU_S2CR0_nscfg_END (19)
#define SOC_SMMU500_SMMU_S2CR0_racfg_START (20)
#define SOC_SMMU500_SMMU_S2CR0_racfg_END (21)
#define SOC_SMMU500_SMMU_S2CR0_wacfg_START (22)
#define SOC_SMMU500_SMMU_S2CR0_wacfg_END (23)
#define SOC_SMMU500_SMMU_S2CR0_privcfg_START (24)
#define SOC_SMMU500_SMMU_S2CR0_privcfg_END (25)
#define SOC_SMMU500_SMMU_S2CR0_instcfg_START (26)
#define SOC_SMMU500_SMMU_S2CR0_instcfg_END (27)
#define SOC_SMMU500_SMMU_S2CR0_transientcfg_START (28)
#define SOC_SMMU500_SMMU_S2CR0_transientcfg_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cbndx : 8;
        unsigned int shcfg : 2;
        unsigned int exidvalid : 1;
        unsigned int mtcfg : 1;
        unsigned int memattr : 4;
        unsigned int type : 2;
        unsigned int nscfg : 2;
        unsigned int racfg : 2;
        unsigned int wacfg : 2;
        unsigned int privcfg : 2;
        unsigned int instcfg : 2;
        unsigned int transientcfg : 2;
        unsigned int reserved : 2;
    } reg;
} SOC_SMMU500_SMMU_S2CR1_UNION;
#endif
#define SOC_SMMU500_SMMU_S2CR1_cbndx_START (0)
#define SOC_SMMU500_SMMU_S2CR1_cbndx_END (7)
#define SOC_SMMU500_SMMU_S2CR1_shcfg_START (8)
#define SOC_SMMU500_SMMU_S2CR1_shcfg_END (9)
#define SOC_SMMU500_SMMU_S2CR1_exidvalid_START (10)
#define SOC_SMMU500_SMMU_S2CR1_exidvalid_END (10)
#define SOC_SMMU500_SMMU_S2CR1_mtcfg_START (11)
#define SOC_SMMU500_SMMU_S2CR1_mtcfg_END (11)
#define SOC_SMMU500_SMMU_S2CR1_memattr_START (12)
#define SOC_SMMU500_SMMU_S2CR1_memattr_END (15)
#define SOC_SMMU500_SMMU_S2CR1_type_START (16)
#define SOC_SMMU500_SMMU_S2CR1_type_END (17)
#define SOC_SMMU500_SMMU_S2CR1_nscfg_START (18)
#define SOC_SMMU500_SMMU_S2CR1_nscfg_END (19)
#define SOC_SMMU500_SMMU_S2CR1_racfg_START (20)
#define SOC_SMMU500_SMMU_S2CR1_racfg_END (21)
#define SOC_SMMU500_SMMU_S2CR1_wacfg_START (22)
#define SOC_SMMU500_SMMU_S2CR1_wacfg_END (23)
#define SOC_SMMU500_SMMU_S2CR1_privcfg_START (24)
#define SOC_SMMU500_SMMU_S2CR1_privcfg_END (25)
#define SOC_SMMU500_SMMU_S2CR1_instcfg_START (26)
#define SOC_SMMU500_SMMU_S2CR1_instcfg_END (27)
#define SOC_SMMU500_SMMU_S2CR1_transientcfg_START (28)
#define SOC_SMMU500_SMMU_S2CR1_transientcfg_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vmid : 8;
        unsigned int bpshcfg : 2;
        unsigned int hypc : 1;
        unsigned int fb : 1;
        unsigned int memattr : 4;
        unsigned int type : 2;
        unsigned int bsu : 2;
        unsigned int racfg : 2;
        unsigned int wacfg : 2;
        unsigned int reserved : 8;
    } reg;
} SOC_SMMU500_SMMU_CBAR0_UNION;
#endif
#define SOC_SMMU500_SMMU_CBAR0_vmid_START (0)
#define SOC_SMMU500_SMMU_CBAR0_vmid_END (7)
#define SOC_SMMU500_SMMU_CBAR0_bpshcfg_START (8)
#define SOC_SMMU500_SMMU_CBAR0_bpshcfg_END (9)
#define SOC_SMMU500_SMMU_CBAR0_hypc_START (10)
#define SOC_SMMU500_SMMU_CBAR0_hypc_END (10)
#define SOC_SMMU500_SMMU_CBAR0_fb_START (11)
#define SOC_SMMU500_SMMU_CBAR0_fb_END (11)
#define SOC_SMMU500_SMMU_CBAR0_memattr_START (12)
#define SOC_SMMU500_SMMU_CBAR0_memattr_END (15)
#define SOC_SMMU500_SMMU_CBAR0_type_START (16)
#define SOC_SMMU500_SMMU_CBAR0_type_END (17)
#define SOC_SMMU500_SMMU_CBAR0_bsu_START (18)
#define SOC_SMMU500_SMMU_CBAR0_bsu_END (19)
#define SOC_SMMU500_SMMU_CBAR0_racfg_START (20)
#define SOC_SMMU500_SMMU_CBAR0_racfg_END (21)
#define SOC_SMMU500_SMMU_CBAR0_wacfg_START (22)
#define SOC_SMMU500_SMMU_CBAR0_wacfg_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vmid : 8;
        unsigned int bpshcfg : 2;
        unsigned int hypc : 1;
        unsigned int fb : 1;
        unsigned int memattr : 4;
        unsigned int type : 2;
        unsigned int bsu : 2;
        unsigned int racfg : 2;
        unsigned int wacfg : 2;
        unsigned int reserved : 8;
    } reg;
} SOC_SMMU500_SMMU_CBAR1_UNION;
#endif
#define SOC_SMMU500_SMMU_CBAR1_vmid_START (0)
#define SOC_SMMU500_SMMU_CBAR1_vmid_END (7)
#define SOC_SMMU500_SMMU_CBAR1_bpshcfg_START (8)
#define SOC_SMMU500_SMMU_CBAR1_bpshcfg_END (9)
#define SOC_SMMU500_SMMU_CBAR1_hypc_START (10)
#define SOC_SMMU500_SMMU_CBAR1_hypc_END (10)
#define SOC_SMMU500_SMMU_CBAR1_fb_START (11)
#define SOC_SMMU500_SMMU_CBAR1_fb_END (11)
#define SOC_SMMU500_SMMU_CBAR1_memattr_START (12)
#define SOC_SMMU500_SMMU_CBAR1_memattr_END (15)
#define SOC_SMMU500_SMMU_CBAR1_type_START (16)
#define SOC_SMMU500_SMMU_CBAR1_type_END (17)
#define SOC_SMMU500_SMMU_CBAR1_bsu_START (18)
#define SOC_SMMU500_SMMU_CBAR1_bsu_END (19)
#define SOC_SMMU500_SMMU_CBAR1_racfg_START (20)
#define SOC_SMMU500_SMMU_CBAR1_racfg_END (21)
#define SOC_SMMU500_SMMU_CBAR1_wacfg_START (22)
#define SOC_SMMU500_SMMU_CBAR1_wacfg_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int streamid : 16;
        unsigned int ssd_index : 16;
    } reg;
} SOC_SMMU500_SMMU_CBFRSYNRA0_UNION;
#endif
#define SOC_SMMU500_SMMU_CBFRSYNRA0_streamid_START (0)
#define SOC_SMMU500_SMMU_CBFRSYNRA0_streamid_END (15)
#define SOC_SMMU500_SMMU_CBFRSYNRA0_ssd_index_START (16)
#define SOC_SMMU500_SMMU_CBFRSYNRA0_ssd_index_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int streamid : 16;
        unsigned int ssd_index : 16;
    } reg;
} SOC_SMMU500_SMMU_CBFRSYNRA1_UNION;
#endif
#define SOC_SMMU500_SMMU_CBFRSYNRA1_streamid_START (0)
#define SOC_SMMU500_SMMU_CBFRSYNRA1_streamid_END (15)
#define SOC_SMMU500_SMMU_CBFRSYNRA1_ssd_index_START (16)
#define SOC_SMMU500_SMMU_CBFRSYNRA1_ssd_index_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va64 : 1;
        unsigned int monc : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_SMMU500_SMMU_CBA2R0_UNION;
#endif
#define SOC_SMMU500_SMMU_CBA2R0_va64_START (0)
#define SOC_SMMU500_SMMU_CBA2R0_va64_END (0)
#define SOC_SMMU500_SMMU_CBA2R0_monc_START (1)
#define SOC_SMMU500_SMMU_CBA2R0_monc_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va64 : 1;
        unsigned int monc : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_SMMU500_SMMU_CBA2R1_UNION;
#endif
#define SOC_SMMU500_SMMU_CBA2R1_va64_START (0)
#define SOC_SMMU500_SMMU_CBA2R1_va64_END (0)
#define SOC_SMMU500_SMMU_CBA2R1_monc_START (1)
#define SOC_SMMU500_SMMU_CBA2R1_monc_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int evcntrn : 32;
    } reg;
} SOC_SMMU500_PMEVCNTR0_UNION;
#endif
#define SOC_SMMU500_PMEVCNTR0_evcntrn_START (0)
#define SOC_SMMU500_PMEVCNTR0_evcntrn_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int evcntrn : 32;
    } reg;
} SOC_SMMU500_PMEVCNTR1_UNION;
#endif
#define SOC_SMMU500_PMEVCNTR1_evcntrn_START (0)
#define SOC_SMMU500_PMEVCNTR1_evcntrn_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int evcntrn : 32;
    } reg;
} SOC_SMMU500_PMEVCNTR2_UNION;
#endif
#define SOC_SMMU500_PMEVCNTR2_evcntrn_START (0)
#define SOC_SMMU500_PMEVCNTR2_evcntrn_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int evcntrn : 32;
    } reg;
} SOC_SMMU500_PMEVCNTR3_UNION;
#endif
#define SOC_SMMU500_PMEVCNTR3_evcntrn_START (0)
#define SOC_SMMU500_PMEVCNTR3_evcntrn_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int event : 8;
        unsigned int reserved : 20;
        unsigned int nsu : 1;
        unsigned int nsp : 1;
        unsigned int u : 1;
        unsigned int p : 1;
    } reg;
} SOC_SMMU500_PMEVTYPE0_UNION;
#endif
#define SOC_SMMU500_PMEVTYPE0_event_START (0)
#define SOC_SMMU500_PMEVTYPE0_event_END (7)
#define SOC_SMMU500_PMEVTYPE0_nsu_START (28)
#define SOC_SMMU500_PMEVTYPE0_nsu_END (28)
#define SOC_SMMU500_PMEVTYPE0_nsp_START (29)
#define SOC_SMMU500_PMEVTYPE0_nsp_END (29)
#define SOC_SMMU500_PMEVTYPE0_u_START (30)
#define SOC_SMMU500_PMEVTYPE0_u_END (30)
#define SOC_SMMU500_PMEVTYPE0_p_START (31)
#define SOC_SMMU500_PMEVTYPE0_p_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int event : 8;
        unsigned int reserved : 20;
        unsigned int nsu : 1;
        unsigned int nsp : 1;
        unsigned int u : 1;
        unsigned int p : 1;
    } reg;
} SOC_SMMU500_PMEVTYPE1_UNION;
#endif
#define SOC_SMMU500_PMEVTYPE1_event_START (0)
#define SOC_SMMU500_PMEVTYPE1_event_END (7)
#define SOC_SMMU500_PMEVTYPE1_nsu_START (28)
#define SOC_SMMU500_PMEVTYPE1_nsu_END (28)
#define SOC_SMMU500_PMEVTYPE1_nsp_START (29)
#define SOC_SMMU500_PMEVTYPE1_nsp_END (29)
#define SOC_SMMU500_PMEVTYPE1_u_START (30)
#define SOC_SMMU500_PMEVTYPE1_u_END (30)
#define SOC_SMMU500_PMEVTYPE1_p_START (31)
#define SOC_SMMU500_PMEVTYPE1_p_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int event : 8;
        unsigned int reserved : 20;
        unsigned int nsu : 1;
        unsigned int nsp : 1;
        unsigned int u : 1;
        unsigned int p : 1;
    } reg;
} SOC_SMMU500_PMEVTYPE2_UNION;
#endif
#define SOC_SMMU500_PMEVTYPE2_event_START (0)
#define SOC_SMMU500_PMEVTYPE2_event_END (7)
#define SOC_SMMU500_PMEVTYPE2_nsu_START (28)
#define SOC_SMMU500_PMEVTYPE2_nsu_END (28)
#define SOC_SMMU500_PMEVTYPE2_nsp_START (29)
#define SOC_SMMU500_PMEVTYPE2_nsp_END (29)
#define SOC_SMMU500_PMEVTYPE2_u_START (30)
#define SOC_SMMU500_PMEVTYPE2_u_END (30)
#define SOC_SMMU500_PMEVTYPE2_p_START (31)
#define SOC_SMMU500_PMEVTYPE2_p_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int event : 8;
        unsigned int reserved : 20;
        unsigned int nsu : 1;
        unsigned int nsp : 1;
        unsigned int u : 1;
        unsigned int p : 1;
    } reg;
} SOC_SMMU500_PMEVTYPE3_UNION;
#endif
#define SOC_SMMU500_PMEVTYPE3_event_START (0)
#define SOC_SMMU500_PMEVTYPE3_event_END (7)
#define SOC_SMMU500_PMEVTYPE3_nsu_START (28)
#define SOC_SMMU500_PMEVTYPE3_nsu_END (28)
#define SOC_SMMU500_PMEVTYPE3_nsp_START (29)
#define SOC_SMMU500_PMEVTYPE3_nsp_END (29)
#define SOC_SMMU500_PMEVTYPE3_u_START (30)
#define SOC_SMMU500_PMEVTYPE3_u_END (30)
#define SOC_SMMU500_PMEVTYPE3_p_START (31)
#define SOC_SMMU500_PMEVTYPE3_p_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ndx : 8;
        unsigned int tcefcfg : 2;
        unsigned int cbaen : 1;
        unsigned int e : 1;
        unsigned int x : 1;
        unsigned int reserved_0: 3;
        unsigned int sidg : 7;
        unsigned int reserved_1: 1;
        unsigned int cgnc : 4;
        unsigned int reserved_2: 4;
    } reg;
} SOC_SMMU500_PMCGCR0_UNION;
#endif
#define SOC_SMMU500_PMCGCR0_ndx_START (0)
#define SOC_SMMU500_PMCGCR0_ndx_END (7)
#define SOC_SMMU500_PMCGCR0_tcefcfg_START (8)
#define SOC_SMMU500_PMCGCR0_tcefcfg_END (9)
#define SOC_SMMU500_PMCGCR0_cbaen_START (10)
#define SOC_SMMU500_PMCGCR0_cbaen_END (10)
#define SOC_SMMU500_PMCGCR0_e_START (11)
#define SOC_SMMU500_PMCGCR0_e_END (11)
#define SOC_SMMU500_PMCGCR0_x_START (12)
#define SOC_SMMU500_PMCGCR0_x_END (12)
#define SOC_SMMU500_PMCGCR0_sidg_START (16)
#define SOC_SMMU500_PMCGCR0_sidg_END (22)
#define SOC_SMMU500_PMCGCR0_cgnc_START (24)
#define SOC_SMMU500_PMCGCR0_cgnc_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int id : 15;
        unsigned int reserved_0: 1;
        unsigned int mask : 15;
        unsigned int reserved_1: 1;
    } reg;
} SOC_SMMU500_PMCGSMR0_UNION;
#endif
#define SOC_SMMU500_PMCGSMR0_id_START (0)
#define SOC_SMMU500_PMCGSMR0_id_END (14)
#define SOC_SMMU500_PMCGSMR0_mask_START (16)
#define SOC_SMMU500_PMCGSMR0_mask_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enableset : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_PMCNTENSET_UNION;
#endif
#define SOC_SMMU500_PMCNTENSET_enableset_START (0)
#define SOC_SMMU500_PMCNTENSET_enableset_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enableclr : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_PMCNTENCLR_UNION;
#endif
#define SOC_SMMU500_PMCNTENCLR_enableclr_START (0)
#define SOC_SMMU500_PMCNTENCLR_enableclr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enableset : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_PMINTENSET_UNION;
#endif
#define SOC_SMMU500_PMINTENSET_enableset_START (0)
#define SOC_SMMU500_PMINTENSET_enableset_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enableclr : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_PMINTENCLR_UNION;
#endif
#define SOC_SMMU500_PMINTENCLR_enableclr_START (0)
#define SOC_SMMU500_PMINTENCLR_enableclr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osclr : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_PMOVSCLR_UNION;
#endif
#define SOC_SMMU500_PMOVSCLR_osclr_START (0)
#define SOC_SMMU500_PMOVSCLR_osclr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int osset : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_PMOVSSET_UNION;
#endif
#define SOC_SMMU500_PMOVSSET_osset_START (0)
#define SOC_SMMU500_PMOVSSET_osset_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int n : 8;
        unsigned int size : 6;
        unsigned int cc : 1;
        unsigned int ccd : 1;
        unsigned int ex : 1;
        unsigned int reserved_0: 2;
        unsigned int uen : 1;
        unsigned int reserved_1: 4;
        unsigned int ncg : 8;
    } reg;
} SOC_SMMU500_PMCFGR_UNION;
#endif
#define SOC_SMMU500_PMCFGR_n_START (0)
#define SOC_SMMU500_PMCFGR_n_END (7)
#define SOC_SMMU500_PMCFGR_size_START (8)
#define SOC_SMMU500_PMCFGR_size_END (13)
#define SOC_SMMU500_PMCFGR_cc_START (14)
#define SOC_SMMU500_PMCFGR_cc_END (14)
#define SOC_SMMU500_PMCFGR_ccd_START (15)
#define SOC_SMMU500_PMCFGR_ccd_END (15)
#define SOC_SMMU500_PMCFGR_ex_START (16)
#define SOC_SMMU500_PMCFGR_ex_END (16)
#define SOC_SMMU500_PMCFGR_uen_START (19)
#define SOC_SMMU500_PMCFGR_uen_END (19)
#define SOC_SMMU500_PMCFGR_ncg_START (24)
#define SOC_SMMU500_PMCFGR_ncg_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int e : 1;
        unsigned int p : 1;
        unsigned int reserved_0: 2;
        unsigned int x : 1;
        unsigned int reserved_1: 27;
    } reg;
} SOC_SMMU500_PMCR_UNION;
#endif
#define SOC_SMMU500_PMCR_e_START (0)
#define SOC_SMMU500_PMCR_e_END (0)
#define SOC_SMMU500_PMCR_p_START (1)
#define SOC_SMMU500_PMCR_p_END (1)
#define SOC_SMMU500_PMCR_x_START (4)
#define SOC_SMMU500_PMCR_x_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int nsid : 2;
        unsigned int nsnid : 2;
        unsigned int sid : 2;
        unsigned int snid : 2;
        unsigned int reserved : 24;
    } reg;
} SOC_SMMU500_PMAUTHSTATUS_UNION;
#endif
#define SOC_SMMU500_PMAUTHSTATUS_nsid_START (0)
#define SOC_SMMU500_PMAUTHSTATUS_nsid_END (1)
#define SOC_SMMU500_PMAUTHSTATUS_nsnid_START (2)
#define SOC_SMMU500_PMAUTHSTATUS_nsnid_END (3)
#define SOC_SMMU500_PMAUTHSTATUS_sid_START (4)
#define SOC_SMMU500_PMAUTHSTATUS_sid_END (5)
#define SOC_SMMU500_PMAUTHSTATUS_snid_START (6)
#define SOC_SMMU500_PMAUTHSTATUS_snid_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int m : 1;
        unsigned int tre : 1;
        unsigned int afe : 1;
        unsigned int affd : 1;
        unsigned int e : 1;
        unsigned int cfre : 1;
        unsigned int cfie : 1;
        unsigned int cfcfg : 1;
        unsigned int hupcf : 1;
        unsigned int wxn : 1;
        unsigned int uwxn : 1;
        unsigned int reserved_0 : 1;
        unsigned int asidpne : 1;
        unsigned int reserved_1 : 1;
        unsigned int transientcfg : 2;
        unsigned int memattr : 4;
        unsigned int mtcfg : 1;
        unsigned int reserved_2 : 1;
        unsigned int shcfg : 2;
        unsigned int racfg : 2;
        unsigned int wacfg : 2;
        unsigned int nscfg : 2;
        unsigned int uci : 1;
        unsigned int reserved_3 : 1;
    } reg;
} SOC_SMMU500_SMMU_CB0_SCTLR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_SCTLR_m_START (0)
#define SOC_SMMU500_SMMU_CB0_SCTLR_m_END (0)
#define SOC_SMMU500_SMMU_CB0_SCTLR_tre_START (1)
#define SOC_SMMU500_SMMU_CB0_SCTLR_tre_END (1)
#define SOC_SMMU500_SMMU_CB0_SCTLR_afe_START (2)
#define SOC_SMMU500_SMMU_CB0_SCTLR_afe_END (2)
#define SOC_SMMU500_SMMU_CB0_SCTLR_affd_START (3)
#define SOC_SMMU500_SMMU_CB0_SCTLR_affd_END (3)
#define SOC_SMMU500_SMMU_CB0_SCTLR_e_START (4)
#define SOC_SMMU500_SMMU_CB0_SCTLR_e_END (4)
#define SOC_SMMU500_SMMU_CB0_SCTLR_cfre_START (5)
#define SOC_SMMU500_SMMU_CB0_SCTLR_cfre_END (5)
#define SOC_SMMU500_SMMU_CB0_SCTLR_cfie_START (6)
#define SOC_SMMU500_SMMU_CB0_SCTLR_cfie_END (6)
#define SOC_SMMU500_SMMU_CB0_SCTLR_cfcfg_START (7)
#define SOC_SMMU500_SMMU_CB0_SCTLR_cfcfg_END (7)
#define SOC_SMMU500_SMMU_CB0_SCTLR_hupcf_START (8)
#define SOC_SMMU500_SMMU_CB0_SCTLR_hupcf_END (8)
#define SOC_SMMU500_SMMU_CB0_SCTLR_wxn_START (9)
#define SOC_SMMU500_SMMU_CB0_SCTLR_wxn_END (9)
#define SOC_SMMU500_SMMU_CB0_SCTLR_uwxn_START (10)
#define SOC_SMMU500_SMMU_CB0_SCTLR_uwxn_END (10)
#define SOC_SMMU500_SMMU_CB0_SCTLR_asidpne_START (12)
#define SOC_SMMU500_SMMU_CB0_SCTLR_asidpne_END (12)
#define SOC_SMMU500_SMMU_CB0_SCTLR_transientcfg_START (14)
#define SOC_SMMU500_SMMU_CB0_SCTLR_transientcfg_END (15)
#define SOC_SMMU500_SMMU_CB0_SCTLR_memattr_START (16)
#define SOC_SMMU500_SMMU_CB0_SCTLR_memattr_END (19)
#define SOC_SMMU500_SMMU_CB0_SCTLR_mtcfg_START (20)
#define SOC_SMMU500_SMMU_CB0_SCTLR_mtcfg_END (20)
#define SOC_SMMU500_SMMU_CB0_SCTLR_shcfg_START (22)
#define SOC_SMMU500_SMMU_CB0_SCTLR_shcfg_END (23)
#define SOC_SMMU500_SMMU_CB0_SCTLR_racfg_START (24)
#define SOC_SMMU500_SMMU_CB0_SCTLR_racfg_END (25)
#define SOC_SMMU500_SMMU_CB0_SCTLR_wacfg_START (26)
#define SOC_SMMU500_SMMU_CB0_SCTLR_wacfg_END (27)
#define SOC_SMMU500_SMMU_CB0_SCTLR_nscfg_START (28)
#define SOC_SMMU500_SMMU_CB0_SCTLR_nscfg_END (29)
#define SOC_SMMU500_SMMU_CB0_SCTLR_uci_START (30)
#define SOC_SMMU500_SMMU_CB0_SCTLR_uci_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cmtlb : 1;
        unsigned int cpre : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_SMMU500_SMMU_CB0_ACTLR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_ACTLR_cmtlb_START (0)
#define SOC_SMMU500_SMMU_CB0_ACTLR_cmtlb_END (0)
#define SOC_SMMU500_SMMU_CB0_ACTLR_cpre_START (1)
#define SOC_SMMU500_SMMU_CB0_ACTLR_cpre_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tnr : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_SMMU500_SMMU_CB0_RESUME_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_RESUME_tnr_START (0)
#define SOC_SMMU500_SMMU_CB0_RESUME_tnr_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pasize : 3;
        unsigned int reserved_0: 1;
        unsigned int as : 1;
        unsigned int tbi0 : 1;
        unsigned int tbi1 : 1;
        unsigned int reserved_1: 7;
        unsigned int nscfg0 : 1;
        unsigned int sep : 3;
        unsigned int reserved_2: 12;
        unsigned int nscfg1 : 1;
        unsigned int reserved_3: 1;
    } reg;
} SOC_SMMU500_SMMU_CB0_TCR2_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TCR2_pasize_START (0)
#define SOC_SMMU500_SMMU_CB0_TCR2_pasize_END (2)
#define SOC_SMMU500_SMMU_CB0_TCR2_as_START (4)
#define SOC_SMMU500_SMMU_CB0_TCR2_as_END (4)
#define SOC_SMMU500_SMMU_CB0_TCR2_tbi0_START (5)
#define SOC_SMMU500_SMMU_CB0_TCR2_tbi0_END (5)
#define SOC_SMMU500_SMMU_CB0_TCR2_tbi1_START (6)
#define SOC_SMMU500_SMMU_CB0_TCR2_tbi1_END (6)
#define SOC_SMMU500_SMMU_CB0_TCR2_nscfg0_START (14)
#define SOC_SMMU500_SMMU_CB0_TCR2_nscfg0_END (14)
#define SOC_SMMU500_SMMU_CB0_TCR2_sep_START (15)
#define SOC_SMMU500_SMMU_CB0_TCR2_sep_END (17)
#define SOC_SMMU500_SMMU_CB0_TCR2_nscfg1_START (30)
#define SOC_SMMU500_SMMU_CB0_TCR2_nscfg1_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ttbr0_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_TTBR0_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TTBR0_LOW_ttbr0_low_START (0)
#define SOC_SMMU500_SMMU_CB0_TTBR0_LOW_ttbr0_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ttbr0_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_TTBR0_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TTBR0_HIGH_ttbr0_high_START (0)
#define SOC_SMMU500_SMMU_CB0_TTBR0_HIGH_ttbr0_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ttbr1_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_TTBR1_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TTBR1_LOW_ttbr1_low_START (0)
#define SOC_SMMU500_SMMU_CB0_TTBR1_LOW_ttbr1_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ttbr1_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_TTBR1_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TTBR1_HIGH_ttbr1_high_START (0)
#define SOC_SMMU500_SMMU_CB0_TTBR1_HIGH_ttbr1_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t0sz : 3;
        unsigned int reserved_0: 1;
        unsigned int pd0 : 1;
        unsigned int pd1 : 1;
        unsigned int reserved_1: 8;
        unsigned int nscfg0 : 1;
        unsigned int reserved_2: 15;
        unsigned int nscfg1 : 1;
        unsigned int eae : 1;
    } reg;
} SOC_SMMU500_SMMU_CB0_TCR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TCR_t0sz_START (0)
#define SOC_SMMU500_SMMU_CB0_TCR_t0sz_END (2)
#define SOC_SMMU500_SMMU_CB0_TCR_pd0_START (4)
#define SOC_SMMU500_SMMU_CB0_TCR_pd0_END (4)
#define SOC_SMMU500_SMMU_CB0_TCR_pd1_START (5)
#define SOC_SMMU500_SMMU_CB0_TCR_pd1_END (5)
#define SOC_SMMU500_SMMU_CB0_TCR_nscfg0_START (14)
#define SOC_SMMU500_SMMU_CB0_TCR_nscfg0_END (14)
#define SOC_SMMU500_SMMU_CB0_TCR_nscfg1_START (30)
#define SOC_SMMU500_SMMU_CB0_TCR_nscfg1_END (30)
#define SOC_SMMU500_SMMU_CB0_TCR_eae_START (31)
#define SOC_SMMU500_SMMU_CB0_TCR_eae_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int asid : 8;
        unsigned int procid : 24;
    } reg;
} SOC_SMMU500_SMMU_CB0_CONTEXTIDR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_CONTEXTIDR_asid_START (0)
#define SOC_SMMU500_SMMU_CB0_CONTEXTIDR_asid_END (7)
#define SOC_SMMU500_SMMU_CB0_CONTEXTIDR_procid_START (8)
#define SOC_SMMU500_SMMU_CB0_CONTEXTIDR_procid_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tr0 : 2;
        unsigned int tr1 : 2;
        unsigned int tr2 : 2;
        unsigned int tr3 : 2;
        unsigned int tr4 : 2;
        unsigned int tr5 : 2;
        unsigned int tr6 : 2;
        unsigned int tr7 : 2;
        unsigned int ds0 : 1;
        unsigned int ds1 : 1;
        unsigned int ns0 : 1;
        unsigned int ns1 : 1;
        unsigned int reserved : 4;
        unsigned int nos0 : 1;
        unsigned int nos1 : 1;
        unsigned int nos2 : 1;
        unsigned int nos3 : 1;
        unsigned int nos4 : 1;
        unsigned int nos5 : 1;
        unsigned int nos6 : 1;
        unsigned int nos7 : 1;
    } reg;
} SOC_SMMU500_SMMU_CB0_PRRR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PRRR_tr0_START (0)
#define SOC_SMMU500_SMMU_CB0_PRRR_tr0_END (1)
#define SOC_SMMU500_SMMU_CB0_PRRR_tr1_START (2)
#define SOC_SMMU500_SMMU_CB0_PRRR_tr1_END (3)
#define SOC_SMMU500_SMMU_CB0_PRRR_tr2_START (4)
#define SOC_SMMU500_SMMU_CB0_PRRR_tr2_END (5)
#define SOC_SMMU500_SMMU_CB0_PRRR_tr3_START (6)
#define SOC_SMMU500_SMMU_CB0_PRRR_tr3_END (7)
#define SOC_SMMU500_SMMU_CB0_PRRR_tr4_START (8)
#define SOC_SMMU500_SMMU_CB0_PRRR_tr4_END (9)
#define SOC_SMMU500_SMMU_CB0_PRRR_tr5_START (10)
#define SOC_SMMU500_SMMU_CB0_PRRR_tr5_END (11)
#define SOC_SMMU500_SMMU_CB0_PRRR_tr6_START (12)
#define SOC_SMMU500_SMMU_CB0_PRRR_tr6_END (13)
#define SOC_SMMU500_SMMU_CB0_PRRR_tr7_START (14)
#define SOC_SMMU500_SMMU_CB0_PRRR_tr7_END (15)
#define SOC_SMMU500_SMMU_CB0_PRRR_ds0_START (16)
#define SOC_SMMU500_SMMU_CB0_PRRR_ds0_END (16)
#define SOC_SMMU500_SMMU_CB0_PRRR_ds1_START (17)
#define SOC_SMMU500_SMMU_CB0_PRRR_ds1_END (17)
#define SOC_SMMU500_SMMU_CB0_PRRR_ns0_START (18)
#define SOC_SMMU500_SMMU_CB0_PRRR_ns0_END (18)
#define SOC_SMMU500_SMMU_CB0_PRRR_ns1_START (19)
#define SOC_SMMU500_SMMU_CB0_PRRR_ns1_END (19)
#define SOC_SMMU500_SMMU_CB0_PRRR_nos0_START (24)
#define SOC_SMMU500_SMMU_CB0_PRRR_nos0_END (24)
#define SOC_SMMU500_SMMU_CB0_PRRR_nos1_START (25)
#define SOC_SMMU500_SMMU_CB0_PRRR_nos1_END (25)
#define SOC_SMMU500_SMMU_CB0_PRRR_nos2_START (26)
#define SOC_SMMU500_SMMU_CB0_PRRR_nos2_END (26)
#define SOC_SMMU500_SMMU_CB0_PRRR_nos3_START (27)
#define SOC_SMMU500_SMMU_CB0_PRRR_nos3_END (27)
#define SOC_SMMU500_SMMU_CB0_PRRR_nos4_START (28)
#define SOC_SMMU500_SMMU_CB0_PRRR_nos4_END (28)
#define SOC_SMMU500_SMMU_CB0_PRRR_nos5_START (29)
#define SOC_SMMU500_SMMU_CB0_PRRR_nos5_END (29)
#define SOC_SMMU500_SMMU_CB0_PRRR_nos6_START (30)
#define SOC_SMMU500_SMMU_CB0_PRRR_nos6_END (30)
#define SOC_SMMU500_SMMU_CB0_PRRR_nos7_START (31)
#define SOC_SMMU500_SMMU_CB0_PRRR_nos7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ir0 : 2;
        unsigned int ir1 : 2;
        unsigned int ir2 : 2;
        unsigned int ir3 : 2;
        unsigned int ir4 : 2;
        unsigned int ir5 : 2;
        unsigned int ir6 : 2;
        unsigned int ir7 : 2;
        unsigned int or0 : 2;
        unsigned int or1 : 2;
        unsigned int or2 : 2;
        unsigned int or3 : 2;
        unsigned int or4 : 2;
        unsigned int or5 : 2;
        unsigned int or6 : 2;
        unsigned int or7 : 2;
    } reg;
} SOC_SMMU500_SMMU_CB0_NMRR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_NMRR_ir0_START (0)
#define SOC_SMMU500_SMMU_CB0_NMRR_ir0_END (1)
#define SOC_SMMU500_SMMU_CB0_NMRR_ir1_START (2)
#define SOC_SMMU500_SMMU_CB0_NMRR_ir1_END (3)
#define SOC_SMMU500_SMMU_CB0_NMRR_ir2_START (4)
#define SOC_SMMU500_SMMU_CB0_NMRR_ir2_END (5)
#define SOC_SMMU500_SMMU_CB0_NMRR_ir3_START (6)
#define SOC_SMMU500_SMMU_CB0_NMRR_ir3_END (7)
#define SOC_SMMU500_SMMU_CB0_NMRR_ir4_START (8)
#define SOC_SMMU500_SMMU_CB0_NMRR_ir4_END (9)
#define SOC_SMMU500_SMMU_CB0_NMRR_ir5_START (10)
#define SOC_SMMU500_SMMU_CB0_NMRR_ir5_END (11)
#define SOC_SMMU500_SMMU_CB0_NMRR_ir6_START (12)
#define SOC_SMMU500_SMMU_CB0_NMRR_ir6_END (13)
#define SOC_SMMU500_SMMU_CB0_NMRR_ir7_START (14)
#define SOC_SMMU500_SMMU_CB0_NMRR_ir7_END (15)
#define SOC_SMMU500_SMMU_CB0_NMRR_or0_START (16)
#define SOC_SMMU500_SMMU_CB0_NMRR_or0_END (17)
#define SOC_SMMU500_SMMU_CB0_NMRR_or1_START (18)
#define SOC_SMMU500_SMMU_CB0_NMRR_or1_END (19)
#define SOC_SMMU500_SMMU_CB0_NMRR_or2_START (20)
#define SOC_SMMU500_SMMU_CB0_NMRR_or2_END (21)
#define SOC_SMMU500_SMMU_CB0_NMRR_or3_START (22)
#define SOC_SMMU500_SMMU_CB0_NMRR_or3_END (23)
#define SOC_SMMU500_SMMU_CB0_NMRR_or4_START (24)
#define SOC_SMMU500_SMMU_CB0_NMRR_or4_END (25)
#define SOC_SMMU500_SMMU_CB0_NMRR_or5_START (26)
#define SOC_SMMU500_SMMU_CB0_NMRR_or5_END (27)
#define SOC_SMMU500_SMMU_CB0_NMRR_or6_START (28)
#define SOC_SMMU500_SMMU_CB0_NMRR_or6_END (29)
#define SOC_SMMU500_SMMU_CB0_NMRR_or7_START (30)
#define SOC_SMMU500_SMMU_CB0_NMRR_or7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int par_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_PAR_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PAR_LOW_par_low_START (0)
#define SOC_SMMU500_SMMU_CB0_PAR_LOW_par_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int par_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_PAR_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PAR_HIGH_par_high_START (0)
#define SOC_SMMU500_SMMU_CB0_PAR_HIGH_par_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 1;
        unsigned int tf : 1;
        unsigned int aff : 1;
        unsigned int pf : 1;
        unsigned int ef : 1;
        unsigned int tlbmcf : 1;
        unsigned int tlblkf : 1;
        unsigned int asf : 1;
        unsigned int uut : 1;
        unsigned int format : 2;
        unsigned int reserved_1: 19;
        unsigned int ss : 1;
        unsigned int multi : 1;
    } reg;
} SOC_SMMU500_SMMU_CB0_FSR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_FSR_tf_START (1)
#define SOC_SMMU500_SMMU_CB0_FSR_tf_END (1)
#define SOC_SMMU500_SMMU_CB0_FSR_aff_START (2)
#define SOC_SMMU500_SMMU_CB0_FSR_aff_END (2)
#define SOC_SMMU500_SMMU_CB0_FSR_pf_START (3)
#define SOC_SMMU500_SMMU_CB0_FSR_pf_END (3)
#define SOC_SMMU500_SMMU_CB0_FSR_ef_START (4)
#define SOC_SMMU500_SMMU_CB0_FSR_ef_END (4)
#define SOC_SMMU500_SMMU_CB0_FSR_tlbmcf_START (5)
#define SOC_SMMU500_SMMU_CB0_FSR_tlbmcf_END (5)
#define SOC_SMMU500_SMMU_CB0_FSR_tlblkf_START (6)
#define SOC_SMMU500_SMMU_CB0_FSR_tlblkf_END (6)
#define SOC_SMMU500_SMMU_CB0_FSR_asf_START (7)
#define SOC_SMMU500_SMMU_CB0_FSR_asf_END (7)
#define SOC_SMMU500_SMMU_CB0_FSR_uut_START (8)
#define SOC_SMMU500_SMMU_CB0_FSR_uut_END (8)
#define SOC_SMMU500_SMMU_CB0_FSR_format_START (9)
#define SOC_SMMU500_SMMU_CB0_FSR_format_END (10)
#define SOC_SMMU500_SMMU_CB0_FSR_ss_START (30)
#define SOC_SMMU500_SMMU_CB0_FSR_ss_END (30)
#define SOC_SMMU500_SMMU_CB0_FSR_multi_START (31)
#define SOC_SMMU500_SMMU_CB0_FSR_multi_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smmu_cb0_fsrrestore : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_FSRRESTORE_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_FSRRESTORE_smmu_cb0_fsrrestore_START (0)
#define SOC_SMMU500_SMMU_CB0_FSRRESTORE_smmu_cb0_fsrrestore_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int faddr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_FAR_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_FAR_LOW_faddr_low_START (0)
#define SOC_SMMU500_SMMU_CB0_FAR_LOW_faddr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int faddr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_FAR_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_FAR_HIGH_faddr_high_START (0)
#define SOC_SMMU500_SMMU_CB0_FAR_HIGH_faddr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int plvl : 2;
        unsigned int reserved_0: 2;
        unsigned int wnr : 1;
        unsigned int pnu : 1;
        unsigned int ind : 1;
        unsigned int reserved_1: 1;
        unsigned int nsattr : 1;
        unsigned int reserved_2: 1;
        unsigned int ptwf : 1;
        unsigned int afr : 1;
        unsigned int reserved_3: 4;
        unsigned int sicbndx : 8;
        unsigned int reserved_4: 8;
    } reg;
} SOC_SMMU500_SMMU_CB0_FSYNR0_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_FSYNR0_plvl_START (0)
#define SOC_SMMU500_SMMU_CB0_FSYNR0_plvl_END (1)
#define SOC_SMMU500_SMMU_CB0_FSYNR0_wnr_START (4)
#define SOC_SMMU500_SMMU_CB0_FSYNR0_wnr_END (4)
#define SOC_SMMU500_SMMU_CB0_FSYNR0_pnu_START (5)
#define SOC_SMMU500_SMMU_CB0_FSYNR0_pnu_END (5)
#define SOC_SMMU500_SMMU_CB0_FSYNR0_ind_START (6)
#define SOC_SMMU500_SMMU_CB0_FSYNR0_ind_END (6)
#define SOC_SMMU500_SMMU_CB0_FSYNR0_nsattr_START (8)
#define SOC_SMMU500_SMMU_CB0_FSYNR0_nsattr_END (8)
#define SOC_SMMU500_SMMU_CB0_FSYNR0_ptwf_START (10)
#define SOC_SMMU500_SMMU_CB0_FSYNR0_ptwf_END (10)
#define SOC_SMMU500_SMMU_CB0_FSYNR0_afr_START (11)
#define SOC_SMMU500_SMMU_CB0_FSYNR0_afr_END (11)
#define SOC_SMMU500_SMMU_CB0_FSYNR0_sicbndx_START (16)
#define SOC_SMMU500_SMMU_CB0_FSYNR0_sicbndx_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int faddr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_IPAFAR_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_IPAFAR_LOW_faddr_low_START (0)
#define SOC_SMMU500_SMMU_CB0_IPAFAR_LOW_faddr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int faddr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_IPAFAR_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_IPAFAR_HIGH_faddr_high_START (0)
#define SOC_SMMU500_SMMU_CB0_IPAFAR_HIGH_faddr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_TLBIVA_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TLBIVA_LOW_va_low_START (0)
#define SOC_SMMU500_SMMU_CB0_TLBIVA_LOW_va_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_TLBIVA_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TLBIVA_HIGH_va_high_START (0)
#define SOC_SMMU500_SMMU_CB0_TLBIVA_HIGH_va_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_TLBIVAA_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TLBIVAA_LOW_va_low_START (0)
#define SOC_SMMU500_SMMU_CB0_TLBIVAA_LOW_va_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_TLBIVAA_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TLBIVAA_HIGH_va_high_START (0)
#define SOC_SMMU500_SMMU_CB0_TLBIVAA_HIGH_va_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int asid : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_SMMU500_SMMU_CB0_TLBIASID_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TLBIASID_asid_START (0)
#define SOC_SMMU500_SMMU_CB0_TLBIASID_asid_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iall : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_TLBIALL_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TLBIALL_iall_START (0)
#define SOC_SMMU500_SMMU_CB0_TLBIALL_iall_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_TLBIVAL_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TLBIVAL_LOW_va_low_START (0)
#define SOC_SMMU500_SMMU_CB0_TLBIVAL_LOW_va_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_TLBIVAL_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TLBIVAL_HIGH_va_high_START (0)
#define SOC_SMMU500_SMMU_CB0_TLBIVAL_HIGH_va_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_TLBIVAAL_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TLBIVAAL_LOW_va_low_START (0)
#define SOC_SMMU500_SMMU_CB0_TLBIVAAL_LOW_va_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_TLBIVAAL_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TLBIVAAL_HIGH_va_high_START (0)
#define SOC_SMMU500_SMMU_CB0_TLBIVAAL_HIGH_va_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tlbsync : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_TLBSYNC_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TLBSYNC_tlbsync_START (0)
#define SOC_SMMU500_SMMU_CB0_TLBSYNC_tlbsync_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sactive : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_SMMU500_SMMU_CB0_TLBSTATUS_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_TLBSTATUS_sactive_START (0)
#define SOC_SMMU500_SMMU_CB0_TLBSTATUS_sactive_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_ATS1PR_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_ATS1PR_LOW_addr_low_START (0)
#define SOC_SMMU500_SMMU_CB0_ATS1PR_LOW_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_ATS1PR_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_ATS1PR_HIGH_addr_high_START (0)
#define SOC_SMMU500_SMMU_CB0_ATS1PR_HIGH_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_ATS1PW_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_ATS1PW_LOW_addr_low_START (0)
#define SOC_SMMU500_SMMU_CB0_ATS1PW_LOW_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_ATS1PW_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_ATS1PW_HIGH_addr_high_START (0)
#define SOC_SMMU500_SMMU_CB0_ATS1PW_HIGH_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_ATS1UR_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_ATS1UR_LOW_addr_low_START (0)
#define SOC_SMMU500_SMMU_CB0_ATS1UR_LOW_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_ATS1UR_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_ATS1UR_HIGH_addr_high_START (0)
#define SOC_SMMU500_SMMU_CB0_ATS1UR_HIGH_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_ATS1UW_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_ATS1UW_LOW_addr_low_START (0)
#define SOC_SMMU500_SMMU_CB0_ATS1UW_LOW_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_ATS1UW_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_ATS1UW_HIGH_addr_high_START (0)
#define SOC_SMMU500_SMMU_CB0_ATS1UW_HIGH_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int active : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_SMMU500_SMMU_CB0_ATSR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_ATSR_active_START (0)
#define SOC_SMMU500_SMMU_CB0_ATSR_active_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int evcntr0 : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_PMEVCNTR0_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PMEVCNTR0_evcntr0_START (0)
#define SOC_SMMU500_SMMU_CB0_PMEVCNTR0_evcntr0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int evcntr1 : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_PMEVCNTR1_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PMEVCNTR1_evcntr1_START (0)
#define SOC_SMMU500_SMMU_CB0_PMEVCNTR1_evcntr1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int evcntr2 : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_PMEVCNTR2_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PMEVCNTR2_evcntr2_START (0)
#define SOC_SMMU500_SMMU_CB0_PMEVCNTR2_evcntr2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int evcntr3 : 32;
    } reg;
} SOC_SMMU500_SMMU_CB0_PMEVCNTR3_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PMEVCNTR3_evcntr3_START (0)
#define SOC_SMMU500_SMMU_CB0_PMEVCNTR3_evcntr3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int event : 8;
        unsigned int reserved : 20;
        unsigned int nsu : 1;
        unsigned int nsp : 1;
        unsigned int u : 1;
        unsigned int p : 1;
    } reg;
} SOC_SMMU500_SMMU_CB0_PMEVTYPER0_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER0_event_START (0)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER0_event_END (7)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER0_nsu_START (28)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER0_nsu_END (28)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER0_nsp_START (29)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER0_nsp_END (29)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER0_u_START (30)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER0_u_END (30)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER0_p_START (31)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER0_p_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int event : 8;
        unsigned int reserved : 20;
        unsigned int nsu : 1;
        unsigned int nsp : 1;
        unsigned int u : 1;
        unsigned int p : 1;
    } reg;
} SOC_SMMU500_SMMU_CB0_PMEVTYPER1_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER1_event_START (0)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER1_event_END (7)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER1_nsu_START (28)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER1_nsu_END (28)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER1_nsp_START (29)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER1_nsp_END (29)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER1_u_START (30)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER1_u_END (30)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER1_p_START (31)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER1_p_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int event : 8;
        unsigned int reserved : 20;
        unsigned int nsu : 1;
        unsigned int nsp : 1;
        unsigned int u : 1;
        unsigned int p : 1;
    } reg;
} SOC_SMMU500_SMMU_CB0_PMEVTYPER2_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER2_event_START (0)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER2_event_END (7)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER2_nsu_START (28)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER2_nsu_END (28)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER2_nsp_START (29)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER2_nsp_END (29)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER2_u_START (30)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER2_u_END (30)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER2_p_START (31)
#define SOC_SMMU500_SMMU_CB0_PMEVTYPER2_p_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int event : 8;
        unsigned int reserved : 20;
        unsigned int nsu : 1;
        unsigned int nsp : 1;
        unsigned int u : 1;
        unsigned int p : 1;
    } reg;
} SOC_SMMU500_SMMU_CB0_PMXEVTYPER3_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PMXEVTYPER3_event_START (0)
#define SOC_SMMU500_SMMU_CB0_PMXEVTYPER3_event_END (7)
#define SOC_SMMU500_SMMU_CB0_PMXEVTYPER3_nsu_START (28)
#define SOC_SMMU500_SMMU_CB0_PMXEVTYPER3_nsu_END (28)
#define SOC_SMMU500_SMMU_CB0_PMXEVTYPER3_nsp_START (29)
#define SOC_SMMU500_SMMU_CB0_PMXEVTYPER3_nsp_END (29)
#define SOC_SMMU500_SMMU_CB0_PMXEVTYPER3_u_START (30)
#define SOC_SMMU500_SMMU_CB0_PMXEVTYPER3_u_END (30)
#define SOC_SMMU500_SMMU_CB0_PMXEVTYPER3_p_START (31)
#define SOC_SMMU500_SMMU_CB0_PMXEVTYPER3_p_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int e : 1;
        unsigned int p : 1;
        unsigned int reserved_0: 2;
        unsigned int x : 1;
        unsigned int reserved_1: 27;
    } reg;
} SOC_SMMU500_SMMU_CB0_PMCR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PMCR_e_START (0)
#define SOC_SMMU500_SMMU_CB0_PMCR_e_END (0)
#define SOC_SMMU500_SMMU_CB0_PMCR_p_START (1)
#define SOC_SMMU500_SMMU_CB0_PMCR_p_END (1)
#define SOC_SMMU500_SMMU_CB0_PMCR_x_START (4)
#define SOC_SMMU500_SMMU_CB0_PMCR_x_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enableset : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_SMMU_CB0_PMCNTENSET_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PMCNTENSET_enableset_START (0)
#define SOC_SMMU500_SMMU_CB0_PMCNTENSET_enableset_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enableclr : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_SMMU_CB0_PMCNTENCLR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PMCNTENCLR_enableclr_START (0)
#define SOC_SMMU500_SMMU_CB0_PMCNTENCLR_enableclr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enableset : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_SMMU_CB0_PMINTENSET_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PMINTENSET_enableset_START (0)
#define SOC_SMMU500_SMMU_CB0_PMINTENSET_enableset_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enableclr : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_SMMU_CB0_PMINTENCLR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PMINTENCLR_enableclr_START (0)
#define SOC_SMMU500_SMMU_CB0_PMINTENCLR_enableclr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enableclr : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_SMMU_CB0_PMOVSRCLR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PMOVSRCLR_enableclr_START (0)
#define SOC_SMMU500_SMMU_CB0_PMOVSRCLR_enableclr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enableset : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_SMMU_CB0_PMOVSRSET_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PMOVSRSET_enableset_START (0)
#define SOC_SMMU500_SMMU_CB0_PMOVSRSET_enableset_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int nsid : 2;
        unsigned int nsnid : 2;
        unsigned int sid : 2;
        unsigned int snid : 2;
        unsigned int reserved : 24;
    } reg;
} SOC_SMMU500_SMMU_CB0_PMAUTHSTATUS_UNION;
#endif
#define SOC_SMMU500_SMMU_CB0_PMAUTHSTATUS_nsid_START (0)
#define SOC_SMMU500_SMMU_CB0_PMAUTHSTATUS_nsid_END (1)
#define SOC_SMMU500_SMMU_CB0_PMAUTHSTATUS_nsnid_START (2)
#define SOC_SMMU500_SMMU_CB0_PMAUTHSTATUS_nsnid_END (3)
#define SOC_SMMU500_SMMU_CB0_PMAUTHSTATUS_sid_START (4)
#define SOC_SMMU500_SMMU_CB0_PMAUTHSTATUS_sid_END (5)
#define SOC_SMMU500_SMMU_CB0_PMAUTHSTATUS_snid_START (6)
#define SOC_SMMU500_SMMU_CB0_PMAUTHSTATUS_snid_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int m : 1;
        unsigned int tre : 1;
        unsigned int afe : 1;
        unsigned int affd : 1;
        unsigned int e : 1;
        unsigned int cfre : 1;
        unsigned int cfie : 1;
        unsigned int cfcfg : 1;
        unsigned int hupcf : 1;
        unsigned int wxn : 1;
        unsigned int uwxn : 1;
        unsigned int reserved_0 : 1;
        unsigned int asidpne : 1;
        unsigned int reserved_1 : 1;
        unsigned int transientcfg : 2;
        unsigned int memattr : 4;
        unsigned int mtcfg : 1;
        unsigned int reserved_2 : 1;
        unsigned int shcfg : 2;
        unsigned int racfg : 2;
        unsigned int wacfg : 2;
        unsigned int nscfg : 2;
        unsigned int uci : 1;
        unsigned int reserved_3 : 1;
    } reg;
} SOC_SMMU500_SMMU_CB1_SCTLR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_SCTLR_m_START (0)
#define SOC_SMMU500_SMMU_CB1_SCTLR_m_END (0)
#define SOC_SMMU500_SMMU_CB1_SCTLR_tre_START (1)
#define SOC_SMMU500_SMMU_CB1_SCTLR_tre_END (1)
#define SOC_SMMU500_SMMU_CB1_SCTLR_afe_START (2)
#define SOC_SMMU500_SMMU_CB1_SCTLR_afe_END (2)
#define SOC_SMMU500_SMMU_CB1_SCTLR_affd_START (3)
#define SOC_SMMU500_SMMU_CB1_SCTLR_affd_END (3)
#define SOC_SMMU500_SMMU_CB1_SCTLR_e_START (4)
#define SOC_SMMU500_SMMU_CB1_SCTLR_e_END (4)
#define SOC_SMMU500_SMMU_CB1_SCTLR_cfre_START (5)
#define SOC_SMMU500_SMMU_CB1_SCTLR_cfre_END (5)
#define SOC_SMMU500_SMMU_CB1_SCTLR_cfie_START (6)
#define SOC_SMMU500_SMMU_CB1_SCTLR_cfie_END (6)
#define SOC_SMMU500_SMMU_CB1_SCTLR_cfcfg_START (7)
#define SOC_SMMU500_SMMU_CB1_SCTLR_cfcfg_END (7)
#define SOC_SMMU500_SMMU_CB1_SCTLR_hupcf_START (8)
#define SOC_SMMU500_SMMU_CB1_SCTLR_hupcf_END (8)
#define SOC_SMMU500_SMMU_CB1_SCTLR_wxn_START (9)
#define SOC_SMMU500_SMMU_CB1_SCTLR_wxn_END (9)
#define SOC_SMMU500_SMMU_CB1_SCTLR_uwxn_START (10)
#define SOC_SMMU500_SMMU_CB1_SCTLR_uwxn_END (10)
#define SOC_SMMU500_SMMU_CB1_SCTLR_asidpne_START (12)
#define SOC_SMMU500_SMMU_CB1_SCTLR_asidpne_END (12)
#define SOC_SMMU500_SMMU_CB1_SCTLR_transientcfg_START (14)
#define SOC_SMMU500_SMMU_CB1_SCTLR_transientcfg_END (15)
#define SOC_SMMU500_SMMU_CB1_SCTLR_memattr_START (16)
#define SOC_SMMU500_SMMU_CB1_SCTLR_memattr_END (19)
#define SOC_SMMU500_SMMU_CB1_SCTLR_mtcfg_START (20)
#define SOC_SMMU500_SMMU_CB1_SCTLR_mtcfg_END (20)
#define SOC_SMMU500_SMMU_CB1_SCTLR_shcfg_START (22)
#define SOC_SMMU500_SMMU_CB1_SCTLR_shcfg_END (23)
#define SOC_SMMU500_SMMU_CB1_SCTLR_racfg_START (24)
#define SOC_SMMU500_SMMU_CB1_SCTLR_racfg_END (25)
#define SOC_SMMU500_SMMU_CB1_SCTLR_wacfg_START (26)
#define SOC_SMMU500_SMMU_CB1_SCTLR_wacfg_END (27)
#define SOC_SMMU500_SMMU_CB1_SCTLR_nscfg_START (28)
#define SOC_SMMU500_SMMU_CB1_SCTLR_nscfg_END (29)
#define SOC_SMMU500_SMMU_CB1_SCTLR_uci_START (30)
#define SOC_SMMU500_SMMU_CB1_SCTLR_uci_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cmtlb : 1;
        unsigned int cpre : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_SMMU500_SMMU_CB1_ACTLR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_ACTLR_cmtlb_START (0)
#define SOC_SMMU500_SMMU_CB1_ACTLR_cmtlb_END (0)
#define SOC_SMMU500_SMMU_CB1_ACTLR_cpre_START (1)
#define SOC_SMMU500_SMMU_CB1_ACTLR_cpre_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tnr : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_SMMU500_SMMU_CB1_RESUME_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_RESUME_tnr_START (0)
#define SOC_SMMU500_SMMU_CB1_RESUME_tnr_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pasize : 3;
        unsigned int reserved_0: 1;
        unsigned int as : 1;
        unsigned int tbi0 : 1;
        unsigned int tbi1 : 1;
        unsigned int reserved_1: 7;
        unsigned int nscfg0 : 1;
        unsigned int sep : 3;
        unsigned int reserved_2: 12;
        unsigned int nscfg1 : 1;
        unsigned int reserved_3: 1;
    } reg;
} SOC_SMMU500_SMMU_CB1_TCR2_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TCR2_pasize_START (0)
#define SOC_SMMU500_SMMU_CB1_TCR2_pasize_END (2)
#define SOC_SMMU500_SMMU_CB1_TCR2_as_START (4)
#define SOC_SMMU500_SMMU_CB1_TCR2_as_END (4)
#define SOC_SMMU500_SMMU_CB1_TCR2_tbi0_START (5)
#define SOC_SMMU500_SMMU_CB1_TCR2_tbi0_END (5)
#define SOC_SMMU500_SMMU_CB1_TCR2_tbi1_START (6)
#define SOC_SMMU500_SMMU_CB1_TCR2_tbi1_END (6)
#define SOC_SMMU500_SMMU_CB1_TCR2_nscfg0_START (14)
#define SOC_SMMU500_SMMU_CB1_TCR2_nscfg0_END (14)
#define SOC_SMMU500_SMMU_CB1_TCR2_sep_START (15)
#define SOC_SMMU500_SMMU_CB1_TCR2_sep_END (17)
#define SOC_SMMU500_SMMU_CB1_TCR2_nscfg1_START (30)
#define SOC_SMMU500_SMMU_CB1_TCR2_nscfg1_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ttbr0_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_TTBR0_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TTBR0_LOW_ttbr0_low_START (0)
#define SOC_SMMU500_SMMU_CB1_TTBR0_LOW_ttbr0_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ttbr0_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_TTBR0_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TTBR0_HIGH_ttbr0_high_START (0)
#define SOC_SMMU500_SMMU_CB1_TTBR0_HIGH_ttbr0_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ttbr1_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_TTBR1_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TTBR1_LOW_ttbr1_low_START (0)
#define SOC_SMMU500_SMMU_CB1_TTBR1_LOW_ttbr1_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ttbr1_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_TTBR1_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TTBR1_HIGH_ttbr1_high_START (0)
#define SOC_SMMU500_SMMU_CB1_TTBR1_HIGH_ttbr1_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t0sz : 3;
        unsigned int reserved_0: 1;
        unsigned int pd0 : 1;
        unsigned int pd1 : 1;
        unsigned int reserved_1: 8;
        unsigned int nscfg0 : 1;
        unsigned int reserved_2: 15;
        unsigned int nscfg1 : 1;
        unsigned int eae : 1;
    } reg;
} SOC_SMMU500_SMMU_CB1_TCR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TCR_t0sz_START (0)
#define SOC_SMMU500_SMMU_CB1_TCR_t0sz_END (2)
#define SOC_SMMU500_SMMU_CB1_TCR_pd0_START (4)
#define SOC_SMMU500_SMMU_CB1_TCR_pd0_END (4)
#define SOC_SMMU500_SMMU_CB1_TCR_pd1_START (5)
#define SOC_SMMU500_SMMU_CB1_TCR_pd1_END (5)
#define SOC_SMMU500_SMMU_CB1_TCR_nscfg0_START (14)
#define SOC_SMMU500_SMMU_CB1_TCR_nscfg0_END (14)
#define SOC_SMMU500_SMMU_CB1_TCR_nscfg1_START (30)
#define SOC_SMMU500_SMMU_CB1_TCR_nscfg1_END (30)
#define SOC_SMMU500_SMMU_CB1_TCR_eae_START (31)
#define SOC_SMMU500_SMMU_CB1_TCR_eae_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int asid : 8;
        unsigned int procid : 24;
    } reg;
} SOC_SMMU500_SMMU_CB1_CONTEXTIDR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_CONTEXTIDR_asid_START (0)
#define SOC_SMMU500_SMMU_CB1_CONTEXTIDR_asid_END (7)
#define SOC_SMMU500_SMMU_CB1_CONTEXTIDR_procid_START (8)
#define SOC_SMMU500_SMMU_CB1_CONTEXTIDR_procid_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tr0 : 2;
        unsigned int tr1 : 2;
        unsigned int tr2 : 2;
        unsigned int tr3 : 2;
        unsigned int tr4 : 2;
        unsigned int tr5 : 2;
        unsigned int tr6 : 2;
        unsigned int tr7 : 2;
        unsigned int ds0 : 1;
        unsigned int ds1 : 1;
        unsigned int ns0 : 1;
        unsigned int ns1 : 1;
        unsigned int reserved : 4;
        unsigned int nos0 : 1;
        unsigned int nos1 : 1;
        unsigned int nos2 : 1;
        unsigned int nos3 : 1;
        unsigned int nos4 : 1;
        unsigned int nos5 : 1;
        unsigned int nos6 : 1;
        unsigned int nos7 : 1;
    } reg;
} SOC_SMMU500_SMMU_CB1_PRRR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PRRR_tr0_START (0)
#define SOC_SMMU500_SMMU_CB1_PRRR_tr0_END (1)
#define SOC_SMMU500_SMMU_CB1_PRRR_tr1_START (2)
#define SOC_SMMU500_SMMU_CB1_PRRR_tr1_END (3)
#define SOC_SMMU500_SMMU_CB1_PRRR_tr2_START (4)
#define SOC_SMMU500_SMMU_CB1_PRRR_tr2_END (5)
#define SOC_SMMU500_SMMU_CB1_PRRR_tr3_START (6)
#define SOC_SMMU500_SMMU_CB1_PRRR_tr3_END (7)
#define SOC_SMMU500_SMMU_CB1_PRRR_tr4_START (8)
#define SOC_SMMU500_SMMU_CB1_PRRR_tr4_END (9)
#define SOC_SMMU500_SMMU_CB1_PRRR_tr5_START (10)
#define SOC_SMMU500_SMMU_CB1_PRRR_tr5_END (11)
#define SOC_SMMU500_SMMU_CB1_PRRR_tr6_START (12)
#define SOC_SMMU500_SMMU_CB1_PRRR_tr6_END (13)
#define SOC_SMMU500_SMMU_CB1_PRRR_tr7_START (14)
#define SOC_SMMU500_SMMU_CB1_PRRR_tr7_END (15)
#define SOC_SMMU500_SMMU_CB1_PRRR_ds0_START (16)
#define SOC_SMMU500_SMMU_CB1_PRRR_ds0_END (16)
#define SOC_SMMU500_SMMU_CB1_PRRR_ds1_START (17)
#define SOC_SMMU500_SMMU_CB1_PRRR_ds1_END (17)
#define SOC_SMMU500_SMMU_CB1_PRRR_ns0_START (18)
#define SOC_SMMU500_SMMU_CB1_PRRR_ns0_END (18)
#define SOC_SMMU500_SMMU_CB1_PRRR_ns1_START (19)
#define SOC_SMMU500_SMMU_CB1_PRRR_ns1_END (19)
#define SOC_SMMU500_SMMU_CB1_PRRR_nos0_START (24)
#define SOC_SMMU500_SMMU_CB1_PRRR_nos0_END (24)
#define SOC_SMMU500_SMMU_CB1_PRRR_nos1_START (25)
#define SOC_SMMU500_SMMU_CB1_PRRR_nos1_END (25)
#define SOC_SMMU500_SMMU_CB1_PRRR_nos2_START (26)
#define SOC_SMMU500_SMMU_CB1_PRRR_nos2_END (26)
#define SOC_SMMU500_SMMU_CB1_PRRR_nos3_START (27)
#define SOC_SMMU500_SMMU_CB1_PRRR_nos3_END (27)
#define SOC_SMMU500_SMMU_CB1_PRRR_nos4_START (28)
#define SOC_SMMU500_SMMU_CB1_PRRR_nos4_END (28)
#define SOC_SMMU500_SMMU_CB1_PRRR_nos5_START (29)
#define SOC_SMMU500_SMMU_CB1_PRRR_nos5_END (29)
#define SOC_SMMU500_SMMU_CB1_PRRR_nos6_START (30)
#define SOC_SMMU500_SMMU_CB1_PRRR_nos6_END (30)
#define SOC_SMMU500_SMMU_CB1_PRRR_nos7_START (31)
#define SOC_SMMU500_SMMU_CB1_PRRR_nos7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ir0 : 2;
        unsigned int ir1 : 2;
        unsigned int ir2 : 2;
        unsigned int ir3 : 2;
        unsigned int ir4 : 2;
        unsigned int ir5 : 2;
        unsigned int ir6 : 2;
        unsigned int ir7 : 2;
        unsigned int or0 : 2;
        unsigned int or1 : 2;
        unsigned int or2 : 2;
        unsigned int or3 : 2;
        unsigned int or4 : 2;
        unsigned int or5 : 2;
        unsigned int or6 : 2;
        unsigned int or7 : 2;
    } reg;
} SOC_SMMU500_SMMU_CB1_NMRR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_NMRR_ir0_START (0)
#define SOC_SMMU500_SMMU_CB1_NMRR_ir0_END (1)
#define SOC_SMMU500_SMMU_CB1_NMRR_ir1_START (2)
#define SOC_SMMU500_SMMU_CB1_NMRR_ir1_END (3)
#define SOC_SMMU500_SMMU_CB1_NMRR_ir2_START (4)
#define SOC_SMMU500_SMMU_CB1_NMRR_ir2_END (5)
#define SOC_SMMU500_SMMU_CB1_NMRR_ir3_START (6)
#define SOC_SMMU500_SMMU_CB1_NMRR_ir3_END (7)
#define SOC_SMMU500_SMMU_CB1_NMRR_ir4_START (8)
#define SOC_SMMU500_SMMU_CB1_NMRR_ir4_END (9)
#define SOC_SMMU500_SMMU_CB1_NMRR_ir5_START (10)
#define SOC_SMMU500_SMMU_CB1_NMRR_ir5_END (11)
#define SOC_SMMU500_SMMU_CB1_NMRR_ir6_START (12)
#define SOC_SMMU500_SMMU_CB1_NMRR_ir6_END (13)
#define SOC_SMMU500_SMMU_CB1_NMRR_ir7_START (14)
#define SOC_SMMU500_SMMU_CB1_NMRR_ir7_END (15)
#define SOC_SMMU500_SMMU_CB1_NMRR_or0_START (16)
#define SOC_SMMU500_SMMU_CB1_NMRR_or0_END (17)
#define SOC_SMMU500_SMMU_CB1_NMRR_or1_START (18)
#define SOC_SMMU500_SMMU_CB1_NMRR_or1_END (19)
#define SOC_SMMU500_SMMU_CB1_NMRR_or2_START (20)
#define SOC_SMMU500_SMMU_CB1_NMRR_or2_END (21)
#define SOC_SMMU500_SMMU_CB1_NMRR_or3_START (22)
#define SOC_SMMU500_SMMU_CB1_NMRR_or3_END (23)
#define SOC_SMMU500_SMMU_CB1_NMRR_or4_START (24)
#define SOC_SMMU500_SMMU_CB1_NMRR_or4_END (25)
#define SOC_SMMU500_SMMU_CB1_NMRR_or5_START (26)
#define SOC_SMMU500_SMMU_CB1_NMRR_or5_END (27)
#define SOC_SMMU500_SMMU_CB1_NMRR_or6_START (28)
#define SOC_SMMU500_SMMU_CB1_NMRR_or6_END (29)
#define SOC_SMMU500_SMMU_CB1_NMRR_or7_START (30)
#define SOC_SMMU500_SMMU_CB1_NMRR_or7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int par_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_PAR_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PAR_LOW_par_low_START (0)
#define SOC_SMMU500_SMMU_CB1_PAR_LOW_par_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int par_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_PAR_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PAR_HIGH_par_high_START (0)
#define SOC_SMMU500_SMMU_CB1_PAR_HIGH_par_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 1;
        unsigned int tf : 1;
        unsigned int aff : 1;
        unsigned int pf : 1;
        unsigned int ef : 1;
        unsigned int tlbmcf : 1;
        unsigned int tlblkf : 1;
        unsigned int asf : 1;
        unsigned int uut : 1;
        unsigned int format : 2;
        unsigned int reserved_1: 19;
        unsigned int ss : 1;
        unsigned int multi : 1;
    } reg;
} SOC_SMMU500_SMMU_CB1_FSR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_FSR_tf_START (1)
#define SOC_SMMU500_SMMU_CB1_FSR_tf_END (1)
#define SOC_SMMU500_SMMU_CB1_FSR_aff_START (2)
#define SOC_SMMU500_SMMU_CB1_FSR_aff_END (2)
#define SOC_SMMU500_SMMU_CB1_FSR_pf_START (3)
#define SOC_SMMU500_SMMU_CB1_FSR_pf_END (3)
#define SOC_SMMU500_SMMU_CB1_FSR_ef_START (4)
#define SOC_SMMU500_SMMU_CB1_FSR_ef_END (4)
#define SOC_SMMU500_SMMU_CB1_FSR_tlbmcf_START (5)
#define SOC_SMMU500_SMMU_CB1_FSR_tlbmcf_END (5)
#define SOC_SMMU500_SMMU_CB1_FSR_tlblkf_START (6)
#define SOC_SMMU500_SMMU_CB1_FSR_tlblkf_END (6)
#define SOC_SMMU500_SMMU_CB1_FSR_asf_START (7)
#define SOC_SMMU500_SMMU_CB1_FSR_asf_END (7)
#define SOC_SMMU500_SMMU_CB1_FSR_uut_START (8)
#define SOC_SMMU500_SMMU_CB1_FSR_uut_END (8)
#define SOC_SMMU500_SMMU_CB1_FSR_format_START (9)
#define SOC_SMMU500_SMMU_CB1_FSR_format_END (10)
#define SOC_SMMU500_SMMU_CB1_FSR_ss_START (30)
#define SOC_SMMU500_SMMU_CB1_FSR_ss_END (30)
#define SOC_SMMU500_SMMU_CB1_FSR_multi_START (31)
#define SOC_SMMU500_SMMU_CB1_FSR_multi_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int smmu_CB1_fsrrestore : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_FSRRESTORE_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_FSRRESTORE_smmu_CB1_fsrrestore_START (0)
#define SOC_SMMU500_SMMU_CB1_FSRRESTORE_smmu_CB1_fsrrestore_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int faddr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_FAR_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_FAR_LOW_faddr_low_START (0)
#define SOC_SMMU500_SMMU_CB1_FAR_LOW_faddr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int faddr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_FAR_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_FAR_HIGH_faddr_high_START (0)
#define SOC_SMMU500_SMMU_CB1_FAR_HIGH_faddr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int plvl : 2;
        unsigned int reserved_0: 2;
        unsigned int wnr : 1;
        unsigned int pnu : 1;
        unsigned int ind : 1;
        unsigned int reserved_1: 1;
        unsigned int nsattr : 1;
        unsigned int reserved_2: 1;
        unsigned int ptwf : 1;
        unsigned int afr : 1;
        unsigned int reserved_3: 4;
        unsigned int sicbndx : 8;
        unsigned int reserved_4: 8;
    } reg;
} SOC_SMMU500_SMMU_CB1_FSYNR0_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_FSYNR0_plvl_START (0)
#define SOC_SMMU500_SMMU_CB1_FSYNR0_plvl_END (1)
#define SOC_SMMU500_SMMU_CB1_FSYNR0_wnr_START (4)
#define SOC_SMMU500_SMMU_CB1_FSYNR0_wnr_END (4)
#define SOC_SMMU500_SMMU_CB1_FSYNR0_pnu_START (5)
#define SOC_SMMU500_SMMU_CB1_FSYNR0_pnu_END (5)
#define SOC_SMMU500_SMMU_CB1_FSYNR0_ind_START (6)
#define SOC_SMMU500_SMMU_CB1_FSYNR0_ind_END (6)
#define SOC_SMMU500_SMMU_CB1_FSYNR0_nsattr_START (8)
#define SOC_SMMU500_SMMU_CB1_FSYNR0_nsattr_END (8)
#define SOC_SMMU500_SMMU_CB1_FSYNR0_ptwf_START (10)
#define SOC_SMMU500_SMMU_CB1_FSYNR0_ptwf_END (10)
#define SOC_SMMU500_SMMU_CB1_FSYNR0_afr_START (11)
#define SOC_SMMU500_SMMU_CB1_FSYNR0_afr_END (11)
#define SOC_SMMU500_SMMU_CB1_FSYNR0_sicbndx_START (16)
#define SOC_SMMU500_SMMU_CB1_FSYNR0_sicbndx_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int faddr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_IPAFAR_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_IPAFAR_LOW_faddr_low_START (0)
#define SOC_SMMU500_SMMU_CB1_IPAFAR_LOW_faddr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int faddr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_IPAFAR_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_IPAFAR_HIGH_faddr_high_START (0)
#define SOC_SMMU500_SMMU_CB1_IPAFAR_HIGH_faddr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_TLBIVA_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TLBIVA_LOW_va_low_START (0)
#define SOC_SMMU500_SMMU_CB1_TLBIVA_LOW_va_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_TLBIVA_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TLBIVA_HIGH_va_high_START (0)
#define SOC_SMMU500_SMMU_CB1_TLBIVA_HIGH_va_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_TLBIVAA_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TLBIVAA_LOW_va_low_START (0)
#define SOC_SMMU500_SMMU_CB1_TLBIVAA_LOW_va_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_TLBIVAA_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TLBIVAA_HIGH_va_high_START (0)
#define SOC_SMMU500_SMMU_CB1_TLBIVAA_HIGH_va_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int asid : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_SMMU500_SMMU_CB1_TLBIASID_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TLBIASID_asid_START (0)
#define SOC_SMMU500_SMMU_CB1_TLBIASID_asid_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iall : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_TLBIALL_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TLBIALL_iall_START (0)
#define SOC_SMMU500_SMMU_CB1_TLBIALL_iall_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_TLBIVAL_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TLBIVAL_LOW_va_low_START (0)
#define SOC_SMMU500_SMMU_CB1_TLBIVAL_LOW_va_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_TLBIVAL_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TLBIVAL_HIGH_va_high_START (0)
#define SOC_SMMU500_SMMU_CB1_TLBIVAL_HIGH_va_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_TLBIVAAL_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TLBIVAAL_LOW_va_low_START (0)
#define SOC_SMMU500_SMMU_CB1_TLBIVAAL_LOW_va_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int va_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_TLBIVAAL_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TLBIVAAL_HIGH_va_high_START (0)
#define SOC_SMMU500_SMMU_CB1_TLBIVAAL_HIGH_va_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tlbsync : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_TLBSYNC_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TLBSYNC_tlbsync_START (0)
#define SOC_SMMU500_SMMU_CB1_TLBSYNC_tlbsync_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sactive : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_SMMU500_SMMU_CB1_TLBSTATUS_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_TLBSTATUS_sactive_START (0)
#define SOC_SMMU500_SMMU_CB1_TLBSTATUS_sactive_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_ATS1PR_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_ATS1PR_LOW_addr_low_START (0)
#define SOC_SMMU500_SMMU_CB1_ATS1PR_LOW_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_ATS1PR_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_ATS1PR_HIGH_addr_high_START (0)
#define SOC_SMMU500_SMMU_CB1_ATS1PR_HIGH_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_ATS1PW_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_ATS1PW_LOW_addr_low_START (0)
#define SOC_SMMU500_SMMU_CB1_ATS1PW_LOW_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_ATS1PW_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_ATS1PW_HIGH_addr_high_START (0)
#define SOC_SMMU500_SMMU_CB1_ATS1PW_HIGH_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_ATS1UR_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_ATS1UR_LOW_addr_low_START (0)
#define SOC_SMMU500_SMMU_CB1_ATS1UR_LOW_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_ATS1UR_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_ATS1UR_HIGH_addr_high_START (0)
#define SOC_SMMU500_SMMU_CB1_ATS1UR_HIGH_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_low : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_ATS1UW_LOW_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_ATS1UW_LOW_addr_low_START (0)
#define SOC_SMMU500_SMMU_CB1_ATS1UW_LOW_addr_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_high : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_ATS1UW_HIGH_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_ATS1UW_HIGH_addr_high_START (0)
#define SOC_SMMU500_SMMU_CB1_ATS1UW_HIGH_addr_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int active : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_SMMU500_SMMU_CB1_ATSR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_ATSR_active_START (0)
#define SOC_SMMU500_SMMU_CB1_ATSR_active_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int evcntr0 : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_PMEVCNTR0_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PMEVCNTR0_evcntr0_START (0)
#define SOC_SMMU500_SMMU_CB1_PMEVCNTR0_evcntr0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int evcntr1 : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_PMEVCNTR1_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PMEVCNTR1_evcntr1_START (0)
#define SOC_SMMU500_SMMU_CB1_PMEVCNTR1_evcntr1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int evcntr2 : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_PMEVCNTR2_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PMEVCNTR2_evcntr2_START (0)
#define SOC_SMMU500_SMMU_CB1_PMEVCNTR2_evcntr2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int evcntr3 : 32;
    } reg;
} SOC_SMMU500_SMMU_CB1_PMEVCNTR3_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PMEVCNTR3_evcntr3_START (0)
#define SOC_SMMU500_SMMU_CB1_PMEVCNTR3_evcntr3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int event : 8;
        unsigned int reserved : 20;
        unsigned int nsu : 1;
        unsigned int nsp : 1;
        unsigned int u : 1;
        unsigned int p : 1;
    } reg;
} SOC_SMMU500_SMMU_CB1_PMEVTYPER0_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER0_event_START (0)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER0_event_END (7)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER0_nsu_START (28)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER0_nsu_END (28)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER0_nsp_START (29)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER0_nsp_END (29)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER0_u_START (30)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER0_u_END (30)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER0_p_START (31)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER0_p_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int event : 8;
        unsigned int reserved : 20;
        unsigned int nsu : 1;
        unsigned int nsp : 1;
        unsigned int u : 1;
        unsigned int p : 1;
    } reg;
} SOC_SMMU500_SMMU_CB1_PMEVTYPER1_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER1_event_START (0)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER1_event_END (7)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER1_nsu_START (28)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER1_nsu_END (28)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER1_nsp_START (29)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER1_nsp_END (29)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER1_u_START (30)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER1_u_END (30)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER1_p_START (31)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER1_p_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int event : 8;
        unsigned int reserved : 20;
        unsigned int nsu : 1;
        unsigned int nsp : 1;
        unsigned int u : 1;
        unsigned int p : 1;
    } reg;
} SOC_SMMU500_SMMU_CB1_PMEVTYPER2_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER2_event_START (0)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER2_event_END (7)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER2_nsu_START (28)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER2_nsu_END (28)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER2_nsp_START (29)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER2_nsp_END (29)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER2_u_START (30)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER2_u_END (30)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER2_p_START (31)
#define SOC_SMMU500_SMMU_CB1_PMEVTYPER2_p_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int event : 8;
        unsigned int reserved : 20;
        unsigned int nsu : 1;
        unsigned int nsp : 1;
        unsigned int u : 1;
        unsigned int p : 1;
    } reg;
} SOC_SMMU500_SMMU_CB1_PMXEVTYPER3_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PMXEVTYPER3_event_START (0)
#define SOC_SMMU500_SMMU_CB1_PMXEVTYPER3_event_END (7)
#define SOC_SMMU500_SMMU_CB1_PMXEVTYPER3_nsu_START (28)
#define SOC_SMMU500_SMMU_CB1_PMXEVTYPER3_nsu_END (28)
#define SOC_SMMU500_SMMU_CB1_PMXEVTYPER3_nsp_START (29)
#define SOC_SMMU500_SMMU_CB1_PMXEVTYPER3_nsp_END (29)
#define SOC_SMMU500_SMMU_CB1_PMXEVTYPER3_u_START (30)
#define SOC_SMMU500_SMMU_CB1_PMXEVTYPER3_u_END (30)
#define SOC_SMMU500_SMMU_CB1_PMXEVTYPER3_p_START (31)
#define SOC_SMMU500_SMMU_CB1_PMXEVTYPER3_p_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int e : 1;
        unsigned int p : 1;
        unsigned int reserved_0: 2;
        unsigned int x : 1;
        unsigned int reserved_1: 27;
    } reg;
} SOC_SMMU500_SMMU_CB1_PMCR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PMCR_e_START (0)
#define SOC_SMMU500_SMMU_CB1_PMCR_e_END (0)
#define SOC_SMMU500_SMMU_CB1_PMCR_p_START (1)
#define SOC_SMMU500_SMMU_CB1_PMCR_p_END (1)
#define SOC_SMMU500_SMMU_CB1_PMCR_x_START (4)
#define SOC_SMMU500_SMMU_CB1_PMCR_x_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enableset : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_SMMU_CB1_PMCNTENSET_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PMCNTENSET_enableset_START (0)
#define SOC_SMMU500_SMMU_CB1_PMCNTENSET_enableset_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enableclr : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_SMMU_CB1_PMCNTENCLR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PMCNTENCLR_enableclr_START (0)
#define SOC_SMMU500_SMMU_CB1_PMCNTENCLR_enableclr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enableset : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_SMMU_CB1_PMINTENSET_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PMINTENSET_enableset_START (0)
#define SOC_SMMU500_SMMU_CB1_PMINTENSET_enableset_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enableclr : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_SMMU_CB1_PMINTENCLR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PMINTENCLR_enableclr_START (0)
#define SOC_SMMU500_SMMU_CB1_PMINTENCLR_enableclr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enableclr : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_SMMU_CB1_PMOVSRCLR_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PMOVSRCLR_enableclr_START (0)
#define SOC_SMMU500_SMMU_CB1_PMOVSRCLR_enableclr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enableset : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SMMU500_SMMU_CB1_PMOVSRSET_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PMOVSRSET_enableset_START (0)
#define SOC_SMMU500_SMMU_CB1_PMOVSRSET_enableset_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int nsid : 2;
        unsigned int nsnid : 2;
        unsigned int sid : 2;
        unsigned int snid : 2;
        unsigned int reserved : 24;
    } reg;
} SOC_SMMU500_SMMU_CB1_PMAUTHSTATUS_UNION;
#endif
#define SOC_SMMU500_SMMU_CB1_PMAUTHSTATUS_nsid_START (0)
#define SOC_SMMU500_SMMU_CB1_PMAUTHSTATUS_nsid_END (1)
#define SOC_SMMU500_SMMU_CB1_PMAUTHSTATUS_nsnid_START (2)
#define SOC_SMMU500_SMMU_CB1_PMAUTHSTATUS_nsnid_END (3)
#define SOC_SMMU500_SMMU_CB1_PMAUTHSTATUS_sid_START (4)
#define SOC_SMMU500_SMMU_CB1_PMAUTHSTATUS_sid_END (5)
#define SOC_SMMU500_SMMU_CB1_PMAUTHSTATUS_snid_START (6)
#define SOC_SMMU500_SMMU_CB1_PMAUTHSTATUS_snid_END (7)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
