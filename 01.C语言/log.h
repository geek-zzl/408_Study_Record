#ifndef __LOG_H
#define __LOG_H



#endif // !__LOG_H

#ifdef DEBUG
#define log(frm, argc...) {\
    printf("[%s : %d] ", __func__, __LINE__);\
    printf(frm, ##argc);\
    printf("\n");\
    printf("[%s][%d][%s][%s][%s]\n",__FUNCTION__,__LINE__,__DATE__,__FILE__,__TIME__);\
}
#else
#define log(frm,...) printf(frm,...)
#endif
