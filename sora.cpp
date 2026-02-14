// view_render.cpp

char __fastcall init_view_render(__int64 a1, __int64 a2)
{
    (*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)view_render + 0x200i64))(
        view_render,
        *(unsigned __int16*)(a1 + 12),
        a2);
    return 1;
}