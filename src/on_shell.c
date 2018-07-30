#include "on_adaptor.h"

#include "on_shell.h"

int onc_shell_init(char *init_json)
{
    return onc_adaptor_init(init_json);;
}

void onc_shell_final(void)
{
    onc_adaptor_final();
}
