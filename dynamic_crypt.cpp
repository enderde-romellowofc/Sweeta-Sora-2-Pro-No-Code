// dynamic_crypt.cpp

__int64 __fastcall encrypt_dynamic_values(_QWORD* a1) // 53 55 56 57 41 54 41 55 41 56 41 57 48 89 CF 48 8B 77 10 
{
    _QWORD* v1; // rdi
    __int64 v2; // rcx
    __int64 v3; // rbp
    __int64 v4; // rsi
    __int64 v5; // rcx
    char v6; // cc
    __int64 v7; // rcx
    unsigned __int64 v8; // rbx
    unsigned __int64 v9; // rdx
    __int64 v10; // rax
    unsigned __int64 v11; // rbx
    __int64 v12; // rax
    __int64 v13; // rax
    __int64 v14; // rax
    unsigned __int64 v15; // rdx
    __int64 v16; // rax
    __int64 v17; // rax
    __int64 v18; // rsi
    __int64 i; // rcx
    __int64 result; // rax
    __int64 v21; // rdi
    __int64 v22; // rcx
    __int64 j; // rcx
    __int64 k; // rcx
    unsigned __int64 v25; // rdx
    __int64 v26; // rax
    unsigned __int64 v27; // rbx
    __int64 v28; // rax
    __int64 v29; // rax

    memset(a1 + 4, 0, 0x1000ui64);
    v1 = a1;
    v2 = a1[1];
    v3 = (__int64)(v1 + 4);
    v4 = *v1 + v2 - 24;
    v5 = -v2;
    v6 = (v5 + 24 < 0) ^ __OFADD__(24i64, v5);
    v7 = v5 + 24;
    if (v6)
    {
        v8 = *(_QWORD*)(v4 + v7);
        do
        {
            while (1)
            {
                while (1)
                {
                    v9 = *(_QWORD*)(v4 + v7 + 8);
                    if (v8 == v9)
                        break;
                    ++* (_DWORD*)(v3 + 4i64 * (unsigned __int8)v8);
                    v10 = BYTE1(v8);
                    v11 = v8 >> 16;
                    ++* (_DWORD*)(v3 + 4 * v10 + 1024);
                    ++* (_DWORD*)(v3 + 4i64 * (unsigned __int8)v11 + 2048);
                    v12 = BYTE1(v11);
                    v11 >>= 16;
                    ++* (_DWORD*)(v3 + 4 * v12 + 3072);
                    ++* (_DWORD*)(v3 + 4i64 * (unsigned __int8)v11);
                    v13 = BYTE1(v11);
                    LODWORD(v11) = (unsigned int)v11 >> 16;
                    ++* (_DWORD*)(v3 + 4 * v13 + 1024);
                    ++* (_DWORD*)(v3 + 4i64 * (unsigned __int8)v11 + 2048);
                    ++* (_DWORD*)(v3 + 4i64 * BYTE1(v11) + 3072);
                    v8 = *(_QWORD*)(v4 + v7 + 16);
                    ++* (_DWORD*)(v3 + 4i64 * (unsigned __int8)v9);
                    v14 = BYTE1(v9);
                    v15 = v9 >> 16;
                    ++* (_DWORD*)(v3 + 4 * v14 + 1024);
                    ++* (_DWORD*)(v3 + 4i64 * (unsigned __int8)v15 + 2048);
                    v16 = BYTE1(v15);
                    v15 >>= 16;
                    ++* (_DWORD*)(v3 + 4 * v16 + 3072);
                    ++* (_DWORD*)(v3 + 4i64 * (unsigned __int8)v15);
                    v17 = BYTE1(v15);
                    LODWORD(v15) = (unsigned int)v15 >> 16;
                    ++* (_DWORD*)(v3 + 4 * v17 + 1024);
                    ++* (_DWORD*)(v3 + 4i64 * (unsigned __int8)v15 + 2048);
                    ++* (_DWORD*)(v3 + 4i64 * BYTE1(v15) + 3072);
                    v7 += 16i64;
                    if (v7 >= 0)
                        goto LABEL_5;
                }
                v25 = v8 ^ (*(_QWORD*)(v4 + v7 + 8) << 8);
                if (v25 >= 0x100)
                    break;
                *(_DWORD*)(v3 + 4 * v25) += 16;
                v8 = *(_QWORD*)(v4 + v7 + 16);
                v7 += 16i64;
                if (v7 >= 0)
                    goto LABEL_5;
            }
            *(_DWORD*)(v3 + 4i64 * (unsigned __int8)v8) += 2;
            v26 = BYTE1(v8);
            v27 = v8 >> 16;
            *(_DWORD*)(v3 + 4 * v26 + 1024) += 2;
            *(_DWORD*)(v3 + 4i64 * (unsigned __int8)v27 + 2048) += 2;
            v28 = BYTE1(v27);
            v27 >>= 16;
            *(_DWORD*)(v3 + 4 * v28 + 3072) += 2;
            *(_DWORD*)(v3 + 4i64 * (unsigned __int8)v27) += 2;
            v29 = BYTE1(v27);
            LODWORD(v27) = (unsigned int)v27 >> 16;
            *(_DWORD*)(v3 + 4 * v29 + 1024) += 2;
            *(_DWORD*)(v3 + 4i64 * (unsigned __int8)v27 + 2048) += 2;
            *(_DWORD*)(v3 + 4i64 * BYTE1(v27) + 3072) += 2;
            v8 = *(_QWORD*)(v4 + v7 + 16);
            v7 += 16i64;
        } while (v7 < 0);
    }
LABEL_5:
    v18 = v4 + 24;
    for (i = v7 - 24; i; ++i)
        ++* (_DWORD*)(v3 + 4i64 * *(unsigned __int8*)(v18 + i));
    result = v1[3];
    v21 = v1[2];
    v22 = 4 * (unsigned int)(unsigned __int16)result;
    if (result & 0x10000)
    {
        while (v22 & 0xF)
        {
            result = (unsigned int)(*(_DWORD*)(v3 + v22 + 3072)
                + *(_DWORD*)(v3 + v22 + 2048)
                + *(_DWORD*)(v3 + v22 + 1024)
                + *(_DWORD*)(v3 + v22)
                + *(_DWORD*)(v21 + v22));
            *(_DWORD*)(v21 + v22) = result;
            v22 = (unsigned int)(v22 - 4);
        }
        for (j = (unsigned int)(v22 - 16); (int)j >= 0; j = (unsigned int)(j - 16))
            _mm_storeu_si128(
                (__m128i*)(v21 + j),
                _mm_add_epi32(
                    _mm_add_epi32(
                        _mm_add_epi32(
                            _mm_add_epi32(_mm_load_si128((const __m128i*)(v21 + j)), *(__m128i*)(v3 + j)),
                            *(__m128i*)(v3 + j + 1024)),
                        *(__m128i*)(v3 + j + 2048)),
                    *(__m128i*)(v3 + j + 3072)));
    }
    else
    {
        while (v22 & 0xF)
        {
            result = (unsigned int)(*(_DWORD*)(v3 + v22 + 3072)
                + *(_DWORD*)(v3 + v22 + 2048)
                + *(_DWORD*)(v3 + v22 + 1024)
                + *(_DWORD*)(v3 + v22));
            *(_DWORD*)(v21 + v22) = result;
            v22 = (unsigned int)(v22 - 4);
        }
        for (k = (unsigned int)(v22 - 16); (int)k >= 0; k = (unsigned int)(k - 16))
            _mm_storeu_si128(
                (__m128i*)(v21 + k),
                _mm_add_epi32(
                    _mm_add_epi32(
                        _mm_add_epi32(_mm_load_si128((const __m128i*)(v3 + k)), *(__m128i*)(v3 + k + 1024)),
                        *(__m128i*)(v3 + k + 2048)),
                    *(__m128i*)(v3 + k + 3072)));
    }
    return result;
}