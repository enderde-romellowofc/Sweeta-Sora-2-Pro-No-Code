// name_list.cpp

__int64 __fastcall obtain_name_list(__int64 a1)
{
    __int64 v1; // rdi
    int v2; // edx
    char v3; // al
    char v4; // bl
    __int64 result; // rax

    v1 = a1;
    if (*off_7FF655BB8570[0] == &CEngineClient::vftable)
    {
        if (dword_7FF655BB73E0 != 1)
            goto LABEL_14;
        v2 = HIDWORD((*off_7FF64FA9EA18)[13]);
        v3 = v2 != 0;
        if (v2 < 0)
            v3 = byte_7FF657493154;
        if (v3)
            v4 = 1;
        else
            LABEL_14:
        v4 = 0;
    }
    else
    {
        v4 = (*((__int64 (**)(void)) * off_7FF655BB8570[0] + 166))();
    }
    sub_7FF64EC5CFC0(v1);
    if (v4)
        result = name_list[2 * *(int*)(v1 + 56) - 2];// name_list - base = B97E0D0
    else
        result = name_list[2 * *(int*)(v1 + 56) - 1];
    return result;