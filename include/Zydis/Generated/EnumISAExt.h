/**
 * Defines the `ZydisISAExt` enum.
 */
typedef enum ZydisISAExt_
{
    ZYDIS_ISA_EXT_INVALID,
    ZYDIS_ISA_EXT_ADOX_ADCX,
    ZYDIS_ISA_EXT_AES,
    ZYDIS_ISA_EXT_AMD3DNOW,
    ZYDIS_ISA_EXT_AMD3DNOW_PREFETCH,
    ZYDIS_ISA_EXT_AMD_INVLPGB,
    ZYDIS_ISA_EXT_AMX_BF16,
    ZYDIS_ISA_EXT_AMX_FP16,
    ZYDIS_ISA_EXT_AMX_INT8,
    ZYDIS_ISA_EXT_AMX_TILE,
    ZYDIS_ISA_EXT_APXEVEX,
    ZYDIS_ISA_EXT_APXLEGACY,
    ZYDIS_ISA_EXT_AVX,
    ZYDIS_ISA_EXT_AVX2,
    ZYDIS_ISA_EXT_AVX2GATHER,
    ZYDIS_ISA_EXT_AVX512EVEX,
    ZYDIS_ISA_EXT_AVX512VEX,
    ZYDIS_ISA_EXT_AVXAES,
    ZYDIS_ISA_EXT_AVX_IFMA,
    ZYDIS_ISA_EXT_AVX_NE_CONVERT,
    ZYDIS_ISA_EXT_AVX_VNNI,
    ZYDIS_ISA_EXT_AVX_VNNI_INT16,
    ZYDIS_ISA_EXT_AVX_VNNI_INT8,
    ZYDIS_ISA_EXT_BASE,
    ZYDIS_ISA_EXT_BMI1,
    ZYDIS_ISA_EXT_BMI2,
    ZYDIS_ISA_EXT_CET,
    ZYDIS_ISA_EXT_CLDEMOTE,
    ZYDIS_ISA_EXT_CLFLUSHOPT,
    ZYDIS_ISA_EXT_CLFSH,
    ZYDIS_ISA_EXT_CLWB,
    ZYDIS_ISA_EXT_CLZERO,
    ZYDIS_ISA_EXT_ENQCMD,
    ZYDIS_ISA_EXT_F16C,
    ZYDIS_ISA_EXT_FMA,
    ZYDIS_ISA_EXT_FMA4,
    ZYDIS_ISA_EXT_FRED,
    ZYDIS_ISA_EXT_GFNI,
    ZYDIS_ISA_EXT_HRESET,
    ZYDIS_ISA_EXT_ICACHE_PREFETCH,
    ZYDIS_ISA_EXT_INVPCID,
    ZYDIS_ISA_EXT_KEYLOCKER,
    ZYDIS_ISA_EXT_KEYLOCKER_WIDE,
    ZYDIS_ISA_EXT_KNC,
    ZYDIS_ISA_EXT_KNCE,
    ZYDIS_ISA_EXT_KNCV,
    ZYDIS_ISA_EXT_LKGS,
    ZYDIS_ISA_EXT_LONGMODE,
    ZYDIS_ISA_EXT_LZCNT,
    ZYDIS_ISA_EXT_MCOMMIT,
    ZYDIS_ISA_EXT_MMX,
    ZYDIS_ISA_EXT_MONITOR,
    ZYDIS_ISA_EXT_MONITORX,
    ZYDIS_ISA_EXT_MOVBE,
    ZYDIS_ISA_EXT_MOVDIR,
    ZYDIS_ISA_EXT_MPX,
    ZYDIS_ISA_EXT_MSRLIST,
    ZYDIS_ISA_EXT_PADLOCK,
    ZYDIS_ISA_EXT_PAUSE,
    ZYDIS_ISA_EXT_PBNDKB,
    ZYDIS_ISA_EXT_PCLMULQDQ,
    ZYDIS_ISA_EXT_PCOMMIT,
    ZYDIS_ISA_EXT_PCONFIG,
    ZYDIS_ISA_EXT_PKU,
    ZYDIS_ISA_EXT_PREFETCHWT1,
    ZYDIS_ISA_EXT_PT,
    ZYDIS_ISA_EXT_RAO_INT,
    ZYDIS_ISA_EXT_RDPID,
    ZYDIS_ISA_EXT_RDPRU,
    ZYDIS_ISA_EXT_RDRAND,
    ZYDIS_ISA_EXT_RDSEED,
    ZYDIS_ISA_EXT_RDTSCP,
    ZYDIS_ISA_EXT_RDWRFSGS,
    ZYDIS_ISA_EXT_RTM,
    ZYDIS_ISA_EXT_SERIALIZE,
    ZYDIS_ISA_EXT_SGX,
    ZYDIS_ISA_EXT_SGX_ENCLV,
    ZYDIS_ISA_EXT_SHA,
    ZYDIS_ISA_EXT_SHA512,
    ZYDIS_ISA_EXT_SM3,
    ZYDIS_ISA_EXT_SM4,
    ZYDIS_ISA_EXT_SMAP,
    ZYDIS_ISA_EXT_SMX,
    ZYDIS_ISA_EXT_SNP,
    ZYDIS_ISA_EXT_SSE,
    ZYDIS_ISA_EXT_SSE2,
    ZYDIS_ISA_EXT_SSE3,
    ZYDIS_ISA_EXT_SSE4,
    ZYDIS_ISA_EXT_SSE4A,
    ZYDIS_ISA_EXT_SSSE3,
    ZYDIS_ISA_EXT_SVM,
    ZYDIS_ISA_EXT_TBM,
    ZYDIS_ISA_EXT_TDX,
    ZYDIS_ISA_EXT_TSX_LDTRK,
    ZYDIS_ISA_EXT_UINTR,
    ZYDIS_ISA_EXT_VAES,
    ZYDIS_ISA_EXT_VMFUNC,
    ZYDIS_ISA_EXT_VPCLMULQDQ,
    ZYDIS_ISA_EXT_VTX,
    ZYDIS_ISA_EXT_WAITPKG,
    ZYDIS_ISA_EXT_WRMSRNS,
    ZYDIS_ISA_EXT_X87,
    ZYDIS_ISA_EXT_XOP,
    ZYDIS_ISA_EXT_XSAVE,
    ZYDIS_ISA_EXT_XSAVEC,
    ZYDIS_ISA_EXT_XSAVEOPT,
    ZYDIS_ISA_EXT_XSAVES,

    /**
     * Maximum value of this enum.
     */
    ZYDIS_ISA_EXT_MAX_VALUE = ZYDIS_ISA_EXT_XSAVES,
    /**
     * The minimum number of bits required to represent all values of this enum.
     */
    ZYDIS_ISA_EXT_REQUIRED_BITS = ZYAN_BITS_TO_REPRESENT(ZYDIS_ISA_EXT_MAX_VALUE)
} ZydisISAExt;
