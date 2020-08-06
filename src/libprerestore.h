

#ifndef libprerestore_h
#define libprerestore_h

#include <stdio.h>
int sendiBEC(char *iBECpath);
int get_dev();
static int read_file_into_buffer(char* path, char** buf, size_t* len);
static int load_ibec(char* path, char** ibec, size_t* ibec_len);
int boot_client(void* buf, size_t sz);
int sendiBSS(char *iBSSpath);

///

struct swift_callbacks {
    void (* _Nonnull send_output_to_swift)(const char * _Nonnull modifier);
};
typedef struct swift_callbacks swift_callbacks;

extern void callback_setup(const swift_callbacks * _Nonnull callbacks);
void send_progress(double progress);
void send_text(char* text);
///

struct swift_progresss {
    void (* _Nonnull send_output_progress_to_swift)(double modifier);
};
typedef struct swift_progresss swift_progress;

extern void progress_setup(const swift_progress* _Nonnull callbacks);
int test_prog();
#endif /* libprerestore_h */
