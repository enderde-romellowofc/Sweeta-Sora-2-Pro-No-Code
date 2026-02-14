// #STR: "CreateGameClient", "GameClientInterfaceV012", "CreateClientAuth", "ClientAuthInterfaceV001", "EasyAntiCheat_x64.dll"

// game_client.cpp

char uac::create_game_client()
{
    __int64 v0; // rax
    __int64(__fastcall * v1)(const char*); // rax
    __int64(__fastcall * v2)(const char*); // rax
    void(__fastcall * **v3)(_QWORD); // rax
    __int64 v4; // rdi
    __int64 v5; // rsi
    _WORD* v6; // rax
    __int64 v7; // rbx
    __int64 v8; // rdx
    int v9; // ecx
    __int64 v10; // rax
    char* v11; // rax
    __int16 v13; // [rsp+1Ah] [rbp-BEh]
    char v14[4]; // [rsp+1Ch] [rbp-BCh]
    __int16 v15[88]; // [rsp+20h] [rbp-B8h]
    char v16[8]; // [rsp+E0h] [rbp+8h]

    v0 = sub_7FF64EB2F960("EasyAntiCheat_x64.dll");
    qword_7FF659DE9B58 = v0;
    if (!v0)
        return 0;
    v1 = (__int64(__fastcall*)(const char*))MEMORY[0x7FF8EC52AEC0](v0, "CreateGameClient");
    if (!v1
        || (qword_7FF659DE9B48 = v1("GameClientInterfaceV012")) == 0
        || (v2 = (__int64(__fastcall*)(const char*))MEMORY[0x7FF8EC52AEC0](qword_7FF659DE9B58, "CreateClientAuth")) == 0i64
        || (v3 = (void(__fastcall***)(_QWORD))v2("ClientAuthInterfaceV001"), (qword_7FF659DE9B60 = (__int64)v3) == 0))
    {
        sub_7FF64E9392B0();
        return 0;
    }
    (**v3)(v3);
    v4 = sub_7FF64EB22430();
    v5 = sub_7FF64EB22240(v4);
    if (!(unsigned int)MEMORY[0x7FF8EC52E370](v15, 85i64))
        goto LABEL_28;
    v6 = (_WORD*)sub_7FF64F4BF218(v15, L"-x-");
    if (v6)
        *v6 = 0;
    v7 = -1i64;
    v8 = -1i64;
    do
        ++v8;
    while (v15[v8]);
    v9 = v8 - 1;
    v10 = (int)v8 - 1;
    if ((int)v8 - 1 >= 0)
    {
        while (v15[v10] != 95)
        {
            --v9;
            if (--v10 < 0)
                goto LABEL_16;
        }
        v8 = v9;
        v15[v9] = 0;
    }
LABEL_16:
    if (v8 < 3)
        goto LABEL_28;
    if (*(&v13 + v8) != 45)
        goto LABEL_28;
    (*(void(__fastcall**)(void*, char*, char*, __int64))(*(_QWORD*)off_7FF655BB6D08 + 112i64))(
        off_7FF655BB6D08,
        &v14[2 * v8],
        v16,
        3i64);
    do
        ++v7;
    while (v16[v7]);
    if (v7 == 2)
        v11 = v16;
    else
        LABEL_28:
    v11 = (char*)sub_7FF64EB22270(v4);
    (*(void(__fastcall**)(__int64, __int64, char*))(*(_QWORD*)qword_7FF659DE9B48 + 80i64))(
        qword_7FF659DE9B48,
        v5,
        v11);
    (**(void(__fastcall***)(__int64, __int64(__fastcall*)(), __int64(__fastcall*)(), _QWORD))qword_7FF659DE9B48)(
        qword_7FF659DE9B48,
        sub_7FF64E866FE0,
        nullsub_1,
        0i64);
    return 1;
}