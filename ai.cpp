// game_version.h

char* get_apex_version()
{
    char* v0; // rdx -> allocated at static part of asm address list (list at object + 0x4180)

    if (valid_bytes)
        return char_buffer;
    valid_bytes = 1;
    if (!(unsigned __int8)log_to_file("gameversion.txt", char_buffer, 0x80i64))// log_to_file(const char* created_file, char buffer, int dest_size)
        strcpy(char_buffer, "(dev)");
    if (HIDWORD((*valid_size)[13]))
    {
        v0 = &char_buffer[-1];
        while (*++v0 != 0)
            ;
        strcpy(v0, " - spinner_debug_info");
    }
    return char_buffer;
}